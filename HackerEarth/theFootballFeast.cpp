/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
int num;
cin >> num;										// Reading input from STDIN
cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
# include <iostream>
using namespace std;
long int arr[1000000];
int top = -1;
void push(int);
void pop();
int a=2;
int main()
{
	int testCase, n, current,flag = 0;
	char option;
	cin >> testCase;
	while (testCase--)
	{
		top = -1;
		flag = 0;
		cin >> n  ;
        cin >>current;
		push(current);
		for (int i = 0; i < n; i++)
		{
			cin >> option;
			if (option == 'P')
			{

				cin >> current;
				push(current);
			}
			else if(option=='B'&&flag == 0)
			{

				pop();
				flag++;

			}
			else if(option=='B'&&flag ==1)
            {
                top++;
                flag =0;
            }
		}
		cout << "Player " << arr[top];

	}
}
void push(int a)
{
	top++;
	arr[top] = a;

}
inline void pop()
{
	top--;

}
