#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int board[4][4];
int dirLine[] = {1, 0, -1, 0};
int dirColumn[] = {0, 1, 0, -1}; 

pair<int, int> generateemptypositions(){
    int occupied = 1, line, column;
    while (occupied){
        line = rand() % 4;
        column = rand() % 4; 
        if (board[line][column] == 0){
            occupied = 0;
        }
    }
    return make_pair(line, column);
}

void addpiece(){
    pair<int, int> pos = generateemptypositions();
    board[pos.first][pos.second] = 2;
}

void newgame(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            board[i][j] = 0;
        }
    }
    addpiece();
}

void printUI(){
    system("clear");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (board[i][j] == 0){
                cout << setw(5) << ".";
            }
            else{
                cout << setw(5) << board[i][j];
            }
        }
        cout << '\n';
    }
    cout << "N: New Game, W: Up, A: Left, S: Down, D: Right, Q: Quit" << '\n';
}

bool candomove(int line, int column, int nextline, int nextcolumn){
    if (nextline < 0 || nextline >= 4 || nextcolumn < 0 || nextcolumn >= 4 
    || (board[line][column] != board[nextline][nextcolumn] && board[nextline][nextcolumn] != 0)){
        return false;
    }
    return true;
}

void applymove(int direction){
    int startline = 0, startcolumn = 0, linestep = 1, columnstep = 1; 
    if(direction == 0){
        startline = 3;
        linestep = -1;
    }
    if(direction == 1){
        startcolumn = 3;
        columnstep = -1;
    }
    int movepossible, canaddpiece = 0;
    do {
        movepossible = 0;
        for (int i = startline; i >= 0 && i < 4; i += linestep){
            for (int j = startcolumn; j >= 0 && j < 4; j += columnstep){
                int nextI = i + dirLine[direction], nextJ = j + dirColumn[direction];
                if (board[i][j] && candomove(i, j, nextI, nextJ)){
                    board[nextI][nextJ] += board[i][j];
                    board[i][j] = 0;
                    movepossible = canaddpiece = 1;
                }
            }
        }
        printUI();
    }while(movepossible);
    if (canaddpiece){
        addpiece();
    }
}

void checkwinner(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (board[i][j] == 2048){
                cout << "Congratulations! You've won!" << '\n';
                break;
            }
        }
    }
}

int main(){
    srand(time(0));
    char CommandToDir[128];
    CommandToDir['S'] = 0;
    CommandToDir['D'] = 1;
    CommandToDir['W'] = 2;
    CommandToDir['A'] = 3;
    newgame();
    while(true){
        printUI();
        checkwinner();
        char command;
        cin >> command;
        if (command == 'N'){
            newgame();
        }
        else if (command == 'Q'){
            break;
        }
        else{
            int currentdirection = CommandToDir[command];
            applymove(currentdirection);
        }
    }

    return 0; 
}