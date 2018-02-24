# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    ///ofstream file("anil.txt");          ///rewrite the file. Previous content is deleted.
    fstream file("anil.txt", ios::in|ios::app); /// if you add append mode to the fstream then it will not delete the pervious content but append it.
    if(!file.is_open())
    {
        cout << "unable to open the file.\n";
    }
     else
     {
         file << "Learning lad rocks 4\n";
         file<< "fsdjkfjdsl\n";
         file.close();
     }
    return 0;
}
