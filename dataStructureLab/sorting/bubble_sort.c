# include <stdio.h>
# define n 10
int a[] = {10, 9, 8 , 7  , 6, 5, 4, 3, 2, 1};
void swap(int * c, int a, int b)
{
    int temp ;
    temp  = c[a];
    c[a] = c[b];
    c[b] = temp;
}
int main()
{
    int i , j ;
    for(i = 0; i < n ; i++)
    {
        for(j  =  0 ; j < n-i - 1 ; j++)                ///Task to rewrite this program for descending order.
        {
            if( a[j] > a[j+1])
            swap(a, j , j+1);
        }
    }

    for(i = 0 ; i < n ; i++)
    {
        printf("%d  " ,a[i]);
    }
}
