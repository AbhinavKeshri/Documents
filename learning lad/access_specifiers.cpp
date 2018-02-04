# include <iostream>
# include <cmath>
using namespace std;
class Complex
{
    public: double re, im;
    public: double norm(){
        return sqrt(re*re + im *im);
    }
};
void print( Complex t)
{
    cout << t.re << "+j" << t.im << endl;
}
int main()
{
    Complex c = { 4.2, 55.3};
    print(c);
    cout << c.norm();
    cout <<"\nsize of Complex c is \t" << sizeof c;
    return 0;
}
