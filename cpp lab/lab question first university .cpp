/// question -> design a class called university and maintain all the activities and the combinations of various departments by using inheritance.
# include <iostream>
# include <string>

/// class for university
class University
{
protected:
	std::string name;
	int established_year;
public:
	University(std::string name, int year) :name(name), established_year(year) {}
	void Display_name()
	{
		std::cout << "Welcome to " << name << std::endl << "Established in year" << established_year << std::endl;
	}

};

/// class for University activities
class Activities :public University
{
private:
	int activity_count;
public:
	Activities(std::string name, int year) :University(name, year)
	{
		activity_count = 0;
	}
	std::string array_of_activities[10];
	void get_activity()
	{
		if (activity_count <= 9)
		{
			std::cin >> array_of_activities[activity_count];
			activity_count++;
		}

	}
};

///class for Departments
class Department : public University
{
private:
	std::string name_of_department;
public:
	Department(std::string name, std::string name_of_university, int age) :name_of_department(name), University(name_of_university, age)
	{

	}
	void displayDepartment()
	{
		Display_name();
		std::cout << "Welcome to " << name_of_department << std::endl;
	}
};

///class for departmental activities
class Department_activities : public Department
{
private:
	int activity_count;
public:
	std::string activity_string[10];
	Department_activities( std::string Department_name, std::string University_name, int age) : Department(Department_name, University_name, age)
	{
		activity_count = 0;
	}
	void getActivity()
	{
		std::cin >> activity_string[activity_count];
		activity_count++;
	}
	void Display_activity()
	{
		displayDepartment();
		for (int i = 0; i < activity_count; i++)
		{
			std::cout << activity_string[i] << std::endl;
		}
	}
};

int main()
{
	Department_activities sports("Computer Science", "NIT", 1989);
	sports.getActivity();
	sports.Display_activity();
}
