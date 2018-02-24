# include <iostream>
using namespace std;
class abc
{
private:
    int A;
public:
    abc(int a):A(a){ cout << "Ctor" << endl;}
    void showA()
    {
        cout << "A = " << A << endl;
    }
    ~abc(){cout << "dtor" << endl;}
    friend void show(abc *a);
};
void show(abc  *a)
{
    cout << "A = " << (*a).A << endl;
}
int main()
{
    abc a(8);
    show(&a);
    a.showA();

}
