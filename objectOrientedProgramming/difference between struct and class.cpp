# include <iostream>
using namespace std;
struct abhi
{
private:
    int x;
public:
    abhi()
    {
        x = 4;
    }
    abhi(int y)
    {
        x = y;
    }
    void print()
    {
        cout << x << endl;
    }
    ~abhi()
    {cout << "destroyed"<<endl;}
};
int main()
{
    abhi a;
    a.print();



}
