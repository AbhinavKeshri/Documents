# include <iostream>
using namespace std;
class A
{
    int i_ ;
public:
    A(int i):i_(1){};
    int get()const { return i_;} ///const member function works with const as well as non-const objects.
    void set(int j) {i_ = j;}
};
struct type
{
    type():i(3){}
    void m1(int v) const
    {
        const_cast<type*>(this)->i = v; ///Ok as long as the type object isn't const
    }
    int i;
};
int main()
{
    const A a(1);
    cout << a.get();
    ///a.set(7); not possible
    const_cast<A &>(a).set(5);
    cout << a.get();



}
