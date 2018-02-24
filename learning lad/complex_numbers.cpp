# include <iostream>

using namespace std;
class complex
{
private:
	float real;
	float imag;
public:
	complex()
	{
		real = 0;
		imag = 0;
		cout << "Default constructor called."<< endl;
	}
	complex(float x, float y)
	{
		real = x;
		imag = y;
		cout <<  "Parameterized constructor called." << endl;
	}
	complex(complex& obj)
	{
	    real = obj.real;
	    imag = obj.imag;
	    cout << "Copy constructor called" << endl;
	}
	complex& operator=(complex& a)
	{
	    real = a.real;
	    imag  = a.imag;
	    cout << "Assingnment Operator Function called\n";

	}
	void dispaly()
	{
		cout << real << " + I " << imag << endl;
	}
	~complex()
	{
	    cout << "Destroid" << endl;
	}
};

int main()
{
	complex a = {1,2};
    complex b;
	a.dispaly();
	b = a;
	b.dispaly();
	int z;
	cin >> z;
	return 0;
}
