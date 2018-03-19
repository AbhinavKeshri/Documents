#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;
void push(int);
void pop();
void display();
int main()
{
	int choice, value;
	printf("stack using linked list");
	while (1)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("enter value to be inserted");
			scanf_s("%d", &value);
			push(value);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("wrong selection of choice");
		}
	}
}
void push(int value)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = value;
	if (top == NULL)
		newnode->next = NULL;
	else
		newnode->next = top;
	top = newnode;
	printf("insertion success\n");
}
void pop()
{
	if (top == NULL)
		printf("\n stack is empty");
	else
	{
		struct node *temp = top;
		printf("deleted element:%d", temp->data);
		top = temp->next;
		free(temp);
	}
}
void display()
{
	if (top == NULL)
		printf("\n stack is empty\n");
	else
	{
		struct node *temp = top;
		while (temp->next != NULL)
		{
			printf("%d-->", temp->data);
			temp = temp->next;
		}
		printf("%d-->NULL", temp->data);
	}
}
