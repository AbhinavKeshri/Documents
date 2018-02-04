# include <iostream>
# include <fstream>
# include <cstdio>
using namespace std;
int main()
{
    fstream file;
    file.open("his_rec.txt",ios::in| ios:: out| ios::app|ios::trunc);
    file << "this is a new file. \nThis is awesome!\nThis is how c++ appends a file."<<endl;
    rename("his_rec.txt","new.txt" );

    file.close()
}
