# include <iostream>
template<typename generic_name> // you could have used class instead of typename
class vector
{
	int size;
	generic_name *ptr;
public:
	vector(int size)
	{
		ptr = new generic_name[this->size = size];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = 0;
		}
	}

	vector(generic_name *p)
	{
		for (int i = 0; i < size; i++)
		{
			ptr[i] = p[i];
		}
		std::cout << "assignment" << std::endl;
	}
	generic_name operator*(vector &a)
	{
		generic_name sum = 0;
		for (int i = 0; i < size; i++)
			sum += this->ptr[i] * a.ptr[i];
		return sum;
	}
};
int main()
{
	vector <float> abc(3);
	vector <float> adc(3);
	float p[3] = { 1,2,3 };N
	float a[3] = { 1,2,3 };
	abc = a;
	adc = p;

}
