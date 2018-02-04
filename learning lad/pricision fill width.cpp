# include <iostream>
using namespace std;
int main()
{
    cout.precision(5);
    cout << 123.4566<< endl;
    cout << 1234457<< endl;
    cout.fill('&');
    cout.width(10);
    cout << "hi" << endl;
    cout.setf(ios::left);
    cout.width(19);
    cout << "abhinav" <<endl;

    return 0;
}
