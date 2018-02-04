# include <iostream>
# include <fstream>

using namespace std;



void display1();
void edit1();
int main()
{

    string event;
    string date;

    cout << "1 Display\n2 Edit \n0 Exit\n";

    while(1)
    {
        int choice;
        cin >> choice;
        switch(choice)
        {
        case 1:
            display1();
            break;
        case 2:
            edit1();
            break;
        }
        cout << "1 Display\n2 Edit \n0 Exit\n";

    }


}
void display1()
{
    ifstream records;
    records.open("historical_record.txt");

    if(!records.is_open())
    {
        cout << "error opening the file\n";
    }
    string event_name;
    int date;
    while(records >> event_name >> date )
    {
     cout << event_name << " " << date<<endl ;
    }
    records.close();

}
void edit1()
{   ofstream records;
    records.open("historical_record.txt",ios::in | ios :: out | ios :: trunc);

    if(!records.is_open())
    {
        cout << "error opening the file\n";
    }
    cout << "press ctrl + z if you are done\n";
    string event_name;
    int date;
    while(cin >> event_name >> date)
    {
        records << event_name<< " " << date << endl;
    }

}
