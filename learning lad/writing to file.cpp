# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    ofstream file("anil.txt");
    if(!file.is_open())
    {
        cout << "unable to open the file" <<endl;
    }
    else
    {
        file << "Learning la" << endl;
        file << "abhianv " << endl;
        file.close();
        cout << "successful" ;
    }
    return 0;
}
