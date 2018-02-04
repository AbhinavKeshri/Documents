# include <iostream>
# include <iomanip>
/// manipulator function are nothing but special function that work with input-stream or output-stream.
using namespace std;
ostream &arrow(ostream &output)
{
    cout << "nice name man ---> ";
    return output;
}
istream &getname(istream &input)
{
    cout << "Enter your name please " <<endl;
    return input;
}
int main()
{
    string name;
    cin >> getname>> name;
    cout << arrow << name;
}
