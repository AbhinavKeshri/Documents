# include <iostream>
# include <fstream>
# include <cstring>
using namespace std;
class Person
{
private:
    char name[80];
    int age;
public:
    Person(char *name, int age)
    {
        strcpy(this->name, name);
        this->age  =  age;
    }
    Person()
    {
        strcpy(this->name, "noname");
        age = 0;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person anil((char*)"anil",34);
    fstream file("sunita.txt", ios::in | ios::out | ios::trunc);
    if(!file.is_open())
    {
        cout << " Error";
    }
    else
    {
        file.write((char *)& anil, sizeof(Person));
        file.seekg(0);
        Person anjali;
        file.read((char *)&anjali,sizeof(Person));
        anjali.display();
        anil.display();
    }




}
