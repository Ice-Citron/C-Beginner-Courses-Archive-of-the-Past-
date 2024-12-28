#include <iostream>
#include <vector>
using namespace std;

struct Vertex{
private:
public:
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.x), z(vertex.z)
    {
        cout << "copied" << endl;
    }


};




int main(){

    vector<Vertex> vertices;
    vertices.reserve(3);
    vertices.emplace_back(1, 2, 3);
    vertices.push_back(Vertex(1, 2, 3));
    vertices.push_back(Vertex(1, 2, 3));


    cin.get();
    return 0;
}