# include <stdio.h>
# define n 10

int a[] = {10, 9, 8 , 7 , 6, 5, 4, 3, 2, 1};
int main()
{
    int i , j, temp;
    for( i =0; i < n ; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    for(i = 1; i < n ; i++)
    {
        for(j = i ; j > 0 && a[j] < a[j-1]; j--)
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;


        }
    }
    for( i =0; i < n ; i++)
    {
        printf("%3d", a[i]);
    }
}
