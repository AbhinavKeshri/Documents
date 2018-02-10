#include <iostream>
using namespace std;
class A
{
public:
    int data_a;
};
class B:public A
{
public:
    int data_b;
};
int main()
{
    A a;
    B b;
    a.data_a = 5;
    b.data_a = 6;
    b.data_b = 7;
    A * pa = &a;
    B * pb = &b;

    cout << pa->data_a<< endl;
    cout << pb->data_a<< " " << pb->data_b << endl;

    pa = &b;///you actually have less information and you are trying to get more information.
    cout << pa->data_a << " ";
    ///cout << pa->data_b << endl;/// this line produces an error.
    /* Data loss occurred */
    ///pb = &a; not possible.

}
