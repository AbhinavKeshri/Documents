# include <stdio.h>
# include <stdlib.h>
# define MALLOC(p,s) if(!((p)=(struct listNode*)malloc(s))){printf("Error While allocating memory.\n");}
# define IS_EMPTY(first) (!(first))
typedef struct listNode *listPointer;
typedef struct
{
    char data[4];
    listPointer link;

}listNode;
int main()
{
    listPointer first = NULL;
    MALLOC(first,sizeof(*first));

    scanf("%s", &first->data);
    first->link = NULL;
    printf("%s",first->data);

}
