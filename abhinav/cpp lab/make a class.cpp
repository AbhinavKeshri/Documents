# include <iostream>
# include <string>

using namespace std;
class student{
private:
    int roll;
    string name;
public:
    student(int ro , string na)
    {
        roll = ro;
        name = na;
    }
    void display()
    {
        cout << "roll = " << roll <<endl << "name = " << name<<endl;
    }
};
class marks
{
public:
    int physics;
    int math;
    int chemistry;
public:
    marks(int a=100 ,int b=100, int c=100)
    {
        physics =  a;
        math = b;
        chemistry = c;
    }
    void display();
};

void marks::display()
    {
        cout<< "physics " << physics <<endl;
        cout<< "math void display()
    {
        cout<< "physics " << physics <<endl;
        cout<< "math " << math <<endl;
    }" << math <<endl;
    }

int main()
{
    student Abhinav(45, "abhinav keshri");
    Abhinav.display();
    marks abhi;
    abhi.display();


}
