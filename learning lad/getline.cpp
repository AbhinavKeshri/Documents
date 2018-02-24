# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    //string abh;
    //getline(cin, abh);  ///This is how you read entire line with spaces.
    //cout << abh;

    fstream file("anil.txt", ios::in | ios::out | ios::app);
    /// append mode will find the file in the present directory and cursor will point at the end of the file.
    /// if the file is not present append mode will create a new file.
    /// in fstream object get and put pointers are at the last.
    /// if we want to read the entire file then i will have to set get to the beginning so that it starts reading from the beginning.
    if(!file.is_open())
    {
        cout << "Error while opening the file" << endl;
    }
    else
    {
        cout << "File opened successfully." << endl;
        cout << "Writing to the file."<< endl;
        ///file.seekp(1);                       ///i tried to write at the beginning of the file.
        file << "Learning lad rocks." <<endl;
        cout << "Reading from the file."<< endl;
        file.seekg(0);              ///seek get. get is set to the beginning.
        string line;
        while(file.good())          ///good is a method of fstream class which returns false if a eof is set or in other words end of file is reached.
        {
            getline(file,line);
            cout << line << endl;
        }
    }///else
    return 0;
}
