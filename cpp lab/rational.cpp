# include <iostream>
using namespace std;
int hcf( int a , int b)
{
	if(a%b==0)
	{
		return b;
	}
	else return hcf(b,a%b);
}
class rational
{
private:
    double numerator;
    double denominator;
public:
    rational()
    {
    	numerator = 0;
    	denominator = 1;
	}
    rational(double a, double b)
    {
        numerator = a;
        denominator = b;
    }
    void display();
    /*void display()
    {
    	cout << "numerator is " << numerator << " denominator is " << denominator << endl;
	}
	*/
    void reduce()
    {
		numerator /= hcf(numerator, denominator);
		denominator /= hcf(numerator , denominator);
    }
    rational operator+(rational a);
    /*{
    	rational temp;
    	temp.numerator = numerator*a.denominator + a.numerator*denominator;
    	temp.denominator = denominator*a.denominator;
    	return temp;
	}*/
};
rational rational:: operator+(rational a)
    {
    	rational temp;
    	temp.numerator = numerator*a.denominator + a.numerator*denominator;
    	temp.denominator = denominator*a.denominator;
    	return temp;
	}
void rational :: display()
	{
	   cout << "numerator is " << numerator << " denominator is " << denominator << endl;
	}
int main()
{
	rational a(1,2), b(2,3);
	rational c = a+b;
	c.display();

	c.display();
	a.display();

}
