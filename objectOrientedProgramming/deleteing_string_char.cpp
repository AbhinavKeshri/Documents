# include <iostream>
using namespace std;
char *strdel(int start, int endd,int size, char * p);
int main()
{
    int size;
    cout << "enter the size of the string" << endl;
    cin >> size;
    char *p = new char[size];
    cout << "Enter the string" << endl;
    cin >> p;
    cout << "string you entered is " << p << endl;
    cout << "enter the start and end" << endl;
    int start;
    int endd;
    cin >> start >> endd;

    cout << "new string is " << strdel(start, endd,size, p);
}

char *strdel(int start, int endd,int size, char * p)             ///anv\0anv
{
    endd++;
    int i,j=endd;
    char * q = new char[size-endd+start];
    for(i=0; i <start; i++)
    {
        q[i] = p[i];
    }
    for(i; i<(size-endd+start); i++)
    {
        q[i]= p[j];
        j++;
    }
    q[i]='\0';
    delete p;
    return q;
}
