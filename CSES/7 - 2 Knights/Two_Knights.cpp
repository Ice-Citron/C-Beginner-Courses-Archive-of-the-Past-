#include <iostream>

unsigned int iteration = 1;

unsigned long long combinations(unsigned long long N) {
    //calculating combinations || C(n, r) = n! / r! * (n-r)!

    return N * (N-1) / 2;

}

int main() {
    std::cin >> iteration;
    for (int i = 1; i <= iteration; i++) {
        unsigned long long temp = combinations(i*i) - 4*(i-1)*(i-2);
        std::cout << temp << std::endl;
    }
}

/*
int main() {

    std::cin >> iteration;

    if (iteration > 3) {
        printf("0\n6\n28\n");
        for (unsigned int i = 4; i <= iteration; i++) {
            unsigned int SQvalue = combinations(i*i);

            //ACDA corner block
            unsigned int ACDA = (2 + 2);
            //EF blocks
            unsigned int EF = 4 + 6;
            unsigned int middle_blocks = 8;
            int temp = SQvalue - 4 * ACDA - (i-4) * (EF) - middle_blocks * ((i - 4)*(i - 4));
            std::cout << temp << std::endl;

        }
    }
    else if (iteration == 3) { printf("0\n6\n28\n"); }
    else if (iteration == 2) { printf("0\n6\n"); }
    else if (iteration == 1) { printf("0\n"); }


    return 0;
}
*/