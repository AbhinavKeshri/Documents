# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    fstream file("MergeSort.txt",ios::out|ios::trunc);
    if(!file.is_open())
    {
        cout << "Error opening the file"<< endl;
    }
    else
    {
        for(int i = 100; i>0;i--)
        {
            file<< i<< endl;
        }
    }
}
