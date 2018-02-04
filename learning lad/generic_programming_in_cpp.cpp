# include <iostream>
using namespace std;
/// Use of same code for different data type
int max(int x, int y)
{
    return (x>y)?x:y;
}
float max(float x, float y)
{
    return (x>y)?x:y;
}
///the template below is going to take only one argument.
template <typename identifier> void display(identifier x){
	cout << "you have passed " << x << endl;
} /// either class or typename both are going to do the same thing.
template <class T, class p> T shitty_name(T a, p b)
{
    return a;
}
///template can save us from writing same code for different data type, i.e. overloading the function.
/// through a generic function a function can be applied to a wide range of data type.
int main()
{
    cout << max(45,40)<<endl;
    cout << shitty_name(67.3, 89)<<endl;
    display(10);
    return 0;
}
