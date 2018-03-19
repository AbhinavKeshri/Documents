# include <stdio.h>
# include <stdlib.h>
struct Node
{
	int data;
	struct Node * next_node;

};
struct Node * top = NULL;
struct Node * rear = NULL;
void push()
{
	int a;
	printf("Enter Integer : ");
	scanf_s("%d", &a);
	if (rear != NULL)
	{
		struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
		rear->next_node = newNode;
		rear = newNode;
		rear->data = a;
		rear->next_node = NULL;
	}
	else
	{
		struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
		top = newNode;
		rear = newNode;
		rear->data = a;
		rear->next_node = NULL;
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
			temp = temp->next_node;
		}
	}
}

void pop()
{
    struct Node* ptr = top->next_node;
    free(top);
    top = ptr;
}

int main()
{
	int option;
	while (1)
	{
		scanf_s("%d", &option);
		switch (option)
		{
		case 1:

			push();
			break;
		case 2:
			pop();
			break;
		case 3:
		    display();

		}

	}
}

