# include <iostream>
# include <fstream>
# include <cstring>
using namespace std;
class Person
{
    char name[80];
    int age;
public:
    Person()
    {
        strcpy(name , "noname");
        age =0;
    }
    Person(char *name , int  age)
    {
        strcpy(this->name,name);
        this->age=0;
    }
    void whoyouare()
    {
        cout << "hi am " <<name <<" and i am " << age << "years old"<<endl;

    }
};

int main()
{
    Person anil("anil",24);
    fstream file("person.bin",ios::binary | ios::in | ios::out | ios::trunc);
    if(!file.is_open())
    {
        cout << "error while opening the file";

    }
    else
    {
        file.write((char *)&anil, sizeof(Person));
        file.seekg(0);
        Person anjali;
        file.read((char * )&anjali, sizeof(Person));
        anil.whoyouare();
        anjali.whoyouare();
    }
    file.close();
    return 0;
}
