# include <iostream>
# include <iomanip>
using namespace std;
ostream &rightArrow(ostream &output)
{
    output << "cool name man ---> ";
    return output;
}
istream &getname(istream &input)
{
    cout << "Enter your name " << endl;
    return input;
}

int main()
{
    string name;
    cin >> getname >> name;
    cout << rightArrow << name;
    return 0;

}
