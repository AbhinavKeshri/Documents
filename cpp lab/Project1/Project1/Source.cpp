# include <iostream>
# include <string>
using namespace std;
class Log
{
public:
	const int logLeveWarn = 1;
	const int logLevelinfo = 2;
	const int logLevelMessage = 3;
private:
	int m_log;
public:
	void SetLevel(int x)
	{
		m_log = x;
	}
	void get()
	{
		if (m_log == logLeveWarn)
		{
			cout << "[Warning ]" << endl;
		}
	}
};
	class Entity
	{
	public:
		std::string m_name;
		int m_age;
	public:
		Entity(const std::string&  name ):m_name(name), m_age(-1){}
		Entity(int age):m_age(age), m_name("unknown"){}
	};
	void PrintEntity(Entity & entity)
	{

	}

int main()
{
	cout << "Hello Abhinav!" << endl;
	Log log;
	log.SetLevel(1);
	log.get();

	//Implicit conversion and stuff

	Entity b = 34;

	cout << b.m_name;


}
