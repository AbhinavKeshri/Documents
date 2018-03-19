

# include <iostream>
class father
{
protected:
	int age;
public:
	father(int x)
	{
		age = x;
	}
	virtual void iam()
	{
		std::cout << "I am father, My age is :" << age << std::endl;
	}
};
class son: public father
{
public:
	son(int x, int y) :father(y)
	{
		this->age = y;
	}
	void iam()
	{
		std::cout <<
	}
};
int main()
{

}
