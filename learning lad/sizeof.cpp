#include <iostream>

 getPtrSize( char *ptr )
{
   return sizeof( ptr );
}

using namespace std;
int main()
{
   char szHello[] = "Hello, world!";

   cout  << "The size of a char is: "
     << sizeof( char )
     << "\nThe length of " << szHello << " is: "
     << sizeof szHello
     << "\nThe size of the pointer is "
     << getPtrSize( szHello ) << endl;
}
