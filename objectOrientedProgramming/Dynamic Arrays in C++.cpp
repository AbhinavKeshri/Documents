# include <iostream>
# include <string>
# include <vector>
using namespace std;
///Dynamic arrays
///Give it a size
///Its size increase
///Creates a new array if it exceeds the size
///continuous memory allocation
struct Vertex
{
    float x, y , z;
};
std::ostream& operator<<(  Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << " , " << vertex.z;
    return stream;
}

int main()
{
    std:: vector<Vertex> vertices;   ///what is in the array --Vertex
    vertices.push_back({1,2,3});
    vertices.push_back({4,5,7});

    for (int i = 0 ; i < vertices.size(); i++)
        std:: cout << vertices[i] << std::endl;


    for (Vertex& v: vertices)            ///Ranged based for loops
        std::cout << v << std::endl;

    vertices.erase(vertices.begin()+1);  ///cleared one vertices
    for (Vertex& v: vertices)            ///Ranged based for loops
        std::cout << v << std::endl;
}
/// Pass vectors to function using reference or by const reference
/// like void function(const std::vector<Vertex>& vertices)
