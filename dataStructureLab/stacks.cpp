# include <iostream>
using namespace std;
int top = -1;
void push(int stack[], int x, int n)
{
    if(top == n-1 )
    {
        cout << "Stack is full " << endl;
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
bool isEmpty()
{
    if(top == -1)
        return true;
    else
        return false;
}
void pop(int stack[])
{
    if(isEmpty())
    {
        cout << "Stack is empty. Underflow condition!" << endl;
    }
    else
    {
        top = top -1;
    }
}

int topElement(int stack[])
{
    return stack[top];
}

int size2()
{
    return top + 1;
}
int main()
{
    cout << "Enter the size of stack" << endl;
    int size;
    cin >> size;
    int stack1[size];
    for(;;)
    {
        int option;
        cout << "Choose Option :\n1.Pop\n2.push\n3.size\n4.topElement"<< endl;
        cin >> option;
        switch(option)
        {
        case 1:
            pop(stack1);
            break;
        case 2:
            cout << "Enter the element to be Pushed" << endl;
            int x;
            cin >> x;
            push(stack1,x,size);
            break;
        case 3:
            cout << size2() << endl;
            break;
        case 4:
            cout << topElement(stack1) << endl;

        }
    }

}
