# include <iostream>
# include <string>
using namespace std;
class father
{
	int age;
	string name;
public:
    father()
    {
        name = "default ";
        age = 0;
    }
	father(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	virtual void getinfo()
	{
		cout << "My name is " << name << " and i am " << age << " years old." << endl;
	}
};

class son : public father
{
	int age;
	string name;
public:
	son(string name, int age) :name(name), age(age) {}
};
int main()
{
	cout << "provide father and son name" << endl;
	string a, b;
	cin >> a;
	cin >> b;
	father abc(a, 50);
	son abhinav(b, 20);
	abc.getinfo();
	abhinav.getinfo();
}
