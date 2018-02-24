# include <iostream>
using namespace std;
int front = -1, rear = -1;
int  sizeOfQueue;
void Inqueue(int * ptr, int& a)
{
	if (front - rear == 1)
	{
		cout << "Queue is full." << endl << endl;
	}
	else if (rear == sizeOfQueue - 1 && front != 0)
	{
		rear = -1;
		Inqueue(ptr, a);
	}
	else if (front == 0 && rear == sizeOfQueue - 1)
	{
		cout << "Queue is full." << endl;
	}
	else if (rear - front == sizeOfQueue)
	{
		cout << "Queue is full." << endl;
	}
	else
	{
		ptr[++rear] = a;
	}
}
void Dequeue(int * ptr)
{
	if (front == sizeOfQueue - 1 && rear!=0)
	{
		front == -1;
		Dequeue(ptr);
	}
	else if (rear ==front )
	{
		cout << "Empty Queue" << endl;
	}
	else if(1)
	{
		cout << "Dequeued " <<ptr[++front] << endl;
	}
}
void FrontElement(int*ptr)
{
	cout << ptr[front];
}
int main()
{

	int choice, entry;
	cout << "Enter the size of Queue" << endl;
	cin >> sizeOfQueue;
	int* arr = new int[sizeOfQueue];
	for (;;)
	{
		cout << "Enter \n1.Inqueue \n2.Dequeue" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter Element to be inQueued " << endl;
			cin >> entry;
			Inqueue(arr,entry);
			break;
		case 2:
			Dequeue(arr);
			break;
		}
		cout << "front = " << front << " back = " << rear << endl;
	}
}
