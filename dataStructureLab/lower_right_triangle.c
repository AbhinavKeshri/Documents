# include <stdio.h>
int main()
{

    int size=0;
    int row_size;
    int column_size;
    printf("Enter no of rows\n");
    scanf("%d",&row_size);
    printf("Enter no of column\n");
    scanf("%d",&column_size);
    int data[row_size][column_size];
    int iter1, iter2;
    printf("Enter the matrix\n");
    for(iter1=0;iter1<row_size;iter1++)
        for(iter2 = 0; iter2<column_size;iter2++)
    {
        scanf("%d",&data[iter1][iter2]);
    }
    ///till now i have stored the matrix.



}

