# include <stdio.h>
int main()
{
    int i = 0;

    int n;

    printf("Enter no of rows\n");
    scanf("%d",&n);
    printf("Enter no of column\n");
    scanf("%d",&n);
    int data[n][n];
    int iter1, iter2;
    printf("Enter the matrix\n");
    for(iter1=0;iter1<n;iter1++)
        for(iter2 = 0; iter2<n;iter2++)
    {
        scanf("%d",&data[iter1][iter2]);
    }
    ///till now i have stored the matrix.
    int linear_array1[(n*n)-((n-1)*(n))/2];
    int linear_array2[(n*n)-((n-1)*(n))/2];
    for(iter1=0;iter1<n;iter1++)
        for(iter2 = 0; iter2<n;iter2++)
    {
        if(data[iter1][iter2])
        {
            linear_array1[i]= data[iter1][iter2];
            i++;
        }
    }
    i = 0;
    for(iter1=0;iter1<n;iter1++)
        for(iter2 = 0; iter2<n;iter2++)
    {
        if(data[iter1][iter2])
        {
            linear_array2[i] = data[iter2][iter1];
            i++;
        }
    }

    for(i=0; i<(n*n)-((n-1)*(n))/2;i++)
    {
        printf("%d ", linear_array1[i]);
    }
    printf("\n");
    for(i=0; i<(n*n)-((n-1)*(n))/2;i++)
    {
        printf("%d ", linear_array2[i]);
    }

}

