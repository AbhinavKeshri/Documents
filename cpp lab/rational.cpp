# include <iostream>
using namespace std;
int commonFactor(int a, int b)
{
	if (a%b == 0)
		return b;
	else
		return commonFactor(b, a%b);
}
class rational
{
	int Numerator;
	int Denominator;
public:
	rational(int x, int y)			/// constructor with arguments
	{
		Numerator = x;
		Denominator = y;
		cout << "Constructor with two arguments is called .\n";
	}
	rational()							/// default constructor
	{
		Numerator = 0;
		Denominator = 1;
		cout << "Default constructor is called.\n";
	}
	rational(rational& obj):            ///copy constructor
		Numerator(obj.Numerator),Denominator(obj.Denominator)
	{

		cout << "Copy constructor called" << endl;
	}
	void reduce()
	{
		Numerator = Numerator / commonFactor(Numerator, Denominator);
		Denominator = Denominator / commonFactor(Denominator, Numerator);
	}

	rational operator+(rational other)
	{
		rational Temp;
		Temp.Denominator = Denominator * other.Denominator;
		Temp.Numerator = (Numerator*other.Denominator) + (other.Numerator*Denominator);
		return Temp;
	}
	friend ostream & operator<<(ostream& stream, rational& obj);
	friend istream& operator >>(istream & stream, rational &obj);

	~rational() { cout << "destroyed\n"; }
};
ostream& operator<<(ostream& stream, rational& obj)
{
	stream << "Numerator = " << obj.Numerator << " Denominator = " << obj.Denominator << endl;
	return stream;
}
istream& operator >>(istream & stream, rational &obj)
{
	cout << "Enter Numerator and Denominator" << endl;
	stream >> obj.Numerator >> obj.Denominator;
	return stream;
}
int main()
{
	rational a;
	cin >> a;
	cout << a;
	rational b  =a;

	cout << b;

}
