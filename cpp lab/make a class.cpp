# include <iostream>
using namespace std;
class student
{
private:
    int phy;
    int chem;
public:
    student(int a, int b)///constructor
    {
        phy = a;
        chem = b;
    }

    void display()///member function
    {
        cout << "Physics " << phy << endl;
        cout << "Chemistry " << chem << endl;
    }
};
main()
{

    student milan(0,4);
    student abhinav(100,100);
    milan.display();
    abhinav.display();
}
