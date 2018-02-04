#include <iostream>
using namespace std;
namespace verylargenamespacename
{

    int x;
    namespace nestednamespace
    {
        void display()
        {
            cout << x ;
        }
    }
}
namespace one = verylargenamespacename;
namespace nested = one :: nestednamespace;
int main()
{
    verylargenamespacename::x=100;
    verylargenamespacename::nestednamespace::display();
    cout << endl;
    one::x= 1000;
    nested::display();
}
