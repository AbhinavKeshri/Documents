#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{	
	top=-1;
	printf("\n Enter the size of stack[max=100]:");
	scanf("%d",&n);
	printf("\n STACK OPERATIONS USING ARRAY");
	printf("\n 1.push\n 2.pop\n 3.display\n 4.exit");
do
{
	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			printf("exit point");
			break;
		}
		default:
		{
			printf("\n Please enter valid choice[1/2/3/4]");
		}		
	}
}
while(choice!=4);	
}
void push()
{
	if(top>=n-1)
	{
		printf("\n stack is overflow");
	}
	else
	{
		printf("enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<0)
	{
		printf("\n stack is underflow");
	}
	else
	{
		printf("\n the poped elements is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n the elements in stack\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
		printf("press next choice");
	}
	else
	{
		printf("stack is empty");
	}
}
