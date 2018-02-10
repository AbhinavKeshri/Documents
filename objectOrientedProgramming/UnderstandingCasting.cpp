# include <iostream>
using namespace std;
class A
{
    int i;
};
class B
{
    double d;
};
int main()
{
    A a;
    B b;

    A *p = &a;
    B *q = &b;

    ///a = b;
    ///a = (A)b;

    ///b = a;

    ///b = (B)a;

    ///p = q;

    ///q = p;

    p = (A*)&b; /// Forced -- Okay
    q = (B*)&a;///Forced -- Okay
}
