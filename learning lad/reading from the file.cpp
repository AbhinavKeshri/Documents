# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    fstream file("anil.txt", ios:: in);
    if(!file.is_open())
    {
        cout << "Error while openning the file\n";
    }
    else
    {
        string line;
        while(file.good())
        {
            getline(file, line);
            cout << line << endl;
        }
    }
    return 0;
}
