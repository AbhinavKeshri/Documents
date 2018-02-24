# include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    Person(string name,int age):name(name) , age(age){}
    Person operator=(Person& A)
    {
        name = A.name;
        age = A.age;
        A.name = "albal";
        return *this;
    }
    void display()
    {
        cout << name <<" " << age << endl;
    }
};
int main()
{
    Person abhinav("abhianv", 20);
    abhinav.display();
    Person gf("gf", 20);
    gf.display();
    gf = abhinav;
    gf.display();
    abhinav.display();
}
