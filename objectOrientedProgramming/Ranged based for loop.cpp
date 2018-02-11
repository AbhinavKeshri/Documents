# include <iostream>
# include <vector>
using namespace std;
struct abhi
{
    int i;
};

/*ostream & operator<<(ostream & stream , abhi a)
{
    stream << a.i << endl;
    return stream;
}*/
int main()
{
    ///for(variable : collection){}
    int marks[] {34,55,4,34,345,6565,56,5334355,6,6};
    for(int var: marks)
    {
        cout << var << endl;
    }

    for(int var: {34,55,4,34,345,6565,56,5334355,6,6})
    {
        cout << var << endl;
    }

    std::vector<abhi> abhinav ;
    abhinav.push_back({1});
    abhinav.push_back({2});
    abhinav.push_back({3});
    abhinav.push_back({4});
    abhinav.push_back({5});
    abhinav.push_back({6});
    abhinav.push_back({7});
    abhinav.push_back({8});
    for(abhi& a: abhinav)
    {
        std::cout << a.i << std::endl;
    }

}
