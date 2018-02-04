# include <iostream>
using namespace std;
int i = 2;
int main()
{
    int i = 45;/// if this line is there then i is not taken into account from outside the main function.
    i = 3;
    cout << i;
    cout << ::i;
}
