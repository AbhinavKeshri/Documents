
# include <stdlib.h>
# include <stdio.h>

struct Node
{
	int data;
	struct Node * ptr_next;

};
struct Node * top = NULL;
void push(int a)
{
	{
		struct Node * newNode = (Node *)malloc(sizeof(Node));
		newNode->ptr_next = top;
		top = newNode;
		top->data = a;
	}

}

void display()
{
	if (top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		struct Node* temp;
		temp = top;
		while (temp != NULL)
		{
			printf("Data is = %d\n", temp->data);
			temp = temp->ptr_next;
		}
	}
}

void pop()
{
	if (top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		struct Node * temp = top->ptr_next;
		free(top);
		top = temp;
	}
}

int main()
{
	int option, input ;
	while (1)
	{
		scanf_s("%d", &option);
		switch (option)
		{
		case 1:
			printf("Enter the input : ");
			scanf_s("%d", &input);
			push(input);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();

		}

	}
}
