# include <iostream>
using namespace std;
namespace abc
{
    int mx(int a, int b)
    {
        return a>b?a:b;
    }
}
int main()
{
    cout<< mx(10,20);
}
