# include <iostream>
class Student {
protected:
	unsigned int roll_no;
public:
	void displayRollNo()
	{
		std::cout << "Roll no - " << roll_no << std::endl;
	}
};
class Test: virtual public Student
{
protected:
	int test1, test2;
public:
	void setMarks(int a, int b)
	{
		test1 = a;
		test2 = b;
	}
	void displayTestMarks()
	{
		std::cout << "Test 1 = " << test1 << "\nTest2 = " << test2 << std::endl;
	}

};

class Sports :virtual public Student
{
protected:
	int sportsMarks;
public:
	void setMarks(int a)
	{
		sportsMarks = a;
	}
	void displayMarks()
	{
		std::cout << "Sports Marks = " << sportsMarks << std:: endl;
	}
};

class Result : public Sports, public Test
{
private:
	int totalMarks;
public:
	void GetMarks(int test1, int test2, int sports)
	{
		Test::setMarks(test1, test2);
		Sports::setMarks(sports);
		totalMarks = test1 + test2 + sports;
	}

	void displayResult()
	{
		std::cout << "Roll No - " << roll_no << std::endl;

		displayTestMarks();
		displayMarks();
		std::cout << "Total Marks =  " << totalMarks << std::endl;
	}
	void setRollNo(int &a)
	{
	    roll_no = a;
	}


};

int main()
{
    int a  = 12323;
	Result abhinav;
	abhinav.setRollNo(a);
	abhinav.GetMarks(45, 44, 43);
	abhinav.displayResult();
}
