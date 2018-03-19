# include <stdio.h>
# include <stdlib.h>
int row_size, col_size ,total_entry=0;
struct node{
int col;
int row;
int value;
struct node * ptr_next;
};
struct node * top = NULL;
struct node * old_ptr = NULL;

void display()
{
    struct node * iterator = top;
    while(iterator!=NULL)
    {
        printf("row = %d col = %d value = %d\n ",iterator->row, iterator->col, iterator->value);
        iterator = iterator->ptr_next;
    }
}
int main()
{
    int iterator1, iterator2, entry;
    printf("Enter the size of row and column\n");
    scanf("%d %d", &row_size, &col_size);
    printf("Enter entries of matrix 'row wise'\n");
    for(iterator1 =0 ;  iterator1<row_size; iterator1++)
        for(iterator2=0 ; iterator2<col_size; iterator2++)
        {
            scanf("%d",&entry );
            if(entry)
            {
                struct node * newPtr = (struct node *)malloc(sizeof(struct node));
                total_entry++;
                if(total_entry==1)
                {
                    top = newPtr;
                    old_ptr = top;
                }

                newPtr->row = iterator1;
                newPtr->col = iterator2;
                newPtr->value = entry;
                old_ptr->ptr_next = newPtr;
                old_ptr = newPtr;
                newPtr->ptr_next = NULL;
            }
        }
        display();
}
