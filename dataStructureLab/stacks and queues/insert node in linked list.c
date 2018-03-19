# include <stdio.h>
# include <stdlib.h>
//Linked list
struct node
{
	int data;
	struct node * next_ptr;
};

struct node * top =NULL;

void push()
{
	int data_to_be_inserted;
	printf("\nEnter data to be inserted\n");
	scanf_s("%d", &data_to_be_inserted);
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	temp->next_ptr = top;
	top = temp;
	top->data = data_to_be_inserted;
}

void pop()
{
	struct node * temp = top;
	if (temp == NULL)
	{
		printf("you are an idiot\n");
		return;
	}
	printf("\nnode to be deleted contains data\n%d\n", temp->data);
	top = temp->next_ptr;
	free(temp);
}


void insert_node()
{
	printf("\nEnter index at which you want to enter the node\n");
	int index;
	scanf_s("%d", &index);
	struct node * temp = top;
	while (--index)
	{
		temp = temp->next_ptr;
	}
	struct node * new_node = (struct node *)malloc(sizeof(struct node));
	new_node->next_ptr = temp->next_ptr;
	temp->next_ptr = new_node;
	printf("\n Enter data for the node to be inserted\n");
	int data;
	scanf_s("%d", &data);
	new_node->data = data;

}


int main()
{
	while (1)
	{
		printf("\t\tEnter choice\n1.to push\n2.to pop \n3.to insert node\n");
		int option;
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
			insert_node();
			break;
		default:
			exit(0);
			break;
		}
	}

}
