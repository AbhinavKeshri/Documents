# include <iostream>
using namespace std;
template<class type1 = string, class type2 = int> class myclass
{
    type1 p1;
    type2 p2;
public:
    myclass(type1 x, type2 y)
    {
        p1 = x;
        p2 = y;
    }
    void whatyougot()
    {
        cout << "i got " << p1 << " and " <<p2 << endl;
    }
};
int main()
{
    myclass <> obj1("anil", 24);
    myclass <float> obj2(23.36,55);
    myclass<int , string> obj3(21, "anjali");
    obj1.whatyougot();
    obj2.whatyougot();
    obj3.whatyougot();
}
