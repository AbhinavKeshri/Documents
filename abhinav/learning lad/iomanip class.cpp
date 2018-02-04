# include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "hi" << endl;
    cout << hex << 100 << endl;
    /// need the "iomanip" header file
    cout << setw(10) << setfill('&')<< "anil"<<endl;
}
