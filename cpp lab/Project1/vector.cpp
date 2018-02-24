# include <iostream>
# include <string>
using namespace std;
struct Vector2
{
	float x, y;

};

int main()
{
	Vector2 ab = { 1,2 };
	Vector2 ac = ab;
	ac.x = 34;
	ac.y = 54;
	cout << ac.x << " " << ac.y << endl;
	cout << ab.x << " " << ab.y << endl;
	Vector2 *ar = new Vector2();
	Vector2 *b = ar;




}
