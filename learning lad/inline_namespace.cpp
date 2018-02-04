# include <iostream>
using namespace std;

namespace AppVersion
{
    namespace version1
    {
        void display()
        {
            cout << "display function from version 1" <<endl;
        }
    }
    namespace version2
    {
        void display()
        {
            cout << "display function from version 2" <<endl;
        }
    }
   inline namespace version3
    {
        void display()
        {
            cout << "display function from version 3" <<endl;
        }
    }
    namespace version3 /// in-spite of not using inline, same as inline.
    {
        void whatsup()
        {
            cout << "whatsup function from version 3" <<endl;
        }
    }
}


int main()
{
    AppVersion::version1::display();
    AppVersion :: display();
    AppVersion :: whatsup();
    return 0;
}
