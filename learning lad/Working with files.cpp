# include <iostream>
# include <fstream>
using namespace std;
int main()
{

    fstream buckyFile;///ofstream buckeyfile("fskdfjk.txt");
    buckyFile.open("tuna.txt");///no
    if(buckyFile.is_open())
    {
        cout << "file open";
    }
    buckyFile << "I love tuna and ts me! \na";
    cout << " press Ctrl+Z to quit\n" << endl;
    int idNumber;
    string name;
    double money;
    while(cin>> idNumber >> name >> money)
    {
        buckyFile<<idNumber<<" " << name <<" "<< money <<endl;
    }
    buckyFile.close();
}
