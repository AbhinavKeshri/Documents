# include <iostream>
using namespace std;
class Box
{
private:
    int l , b, h;
public:
    void setDimensions(int l, int b , int h)
    {
        this->l = l ;
        this->b = b ;
        h = h ;

    }
    void display()
    {
        cout << "l = " << l<< " b = " << b << " c = " << h << endl;
    }
};
using namespace std;
void print( char * p)
{
    cout << p  << endl;
}
int main()
{
    Box smallBox;
    smallBox.setDimensions(12,13,14);
    smallBox.display();
    const char * p = "Abhianv keshri";
    print(const_cast<char *>(p));
    ///print(p);
    int num1 = 10, num2 = 20;
    const int * ptr  =  & num1;
    num1  = num1 + 2;

}
