# include <stdio.h>
int main()
{
    int i=0;
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
        if(data[iter1][iter2])
        {
            size++;
        }
    }
    int compact_data[3][size];
    for(iter1=0;iter1<row_size;iter1++)
        for(iter2 = 0; iter2<column_size;iter2++)
    {
       if(data[iter1][iter2])
       {
           compact_data[0][i] = iter1;
           compact_data[1][i] = iter2;
           compact_data[2][i] = data[iter1][iter2];
           i++;
       }
    }
    printf("compact matrix is\n");
    for(iter1=0 ; iter1 < 3; iter1++)
    {
        for(iter2 =0; iter2 < i; iter2++)
        {
            printf("%d ",compact_data[iter1][iter2]);
        }
        printf("\n");
    }

}
