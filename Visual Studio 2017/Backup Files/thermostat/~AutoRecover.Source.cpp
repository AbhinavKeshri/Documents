# include <stdio.h>
# include <stdlib.h>
// Double linked list
struct node
{
	struct node * ptr_prev;
	int data;
	struct node * ptr_next;

};
int number_of_nodes=0;
struct node* top = NULL;
void push()
{
	if (number_of_nodes != 0)
	{
		struct node * newnode = (struct node *)malloc(sizeof(struct node));
		newnode->ptr_prev = top;
		top = 
	}
}