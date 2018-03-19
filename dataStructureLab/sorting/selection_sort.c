# include <stdio.h>
# define n 10
void swap(int *a,int  small,int  selected_place)
{
    int temp ;
    temp = a[selected_place];
    a[selected_place] = a[small];
    a[small] = temp;
}
int a[] = {10,7,8,3,5,2,1,4,6,9};
void main()
{
    int i , j , small , selected_place = 0,k = 0, small_manager=0;
    for(i = 0 ;i < n ; i++ )
    {
        small = small_manager++;                                    /// It is important to have small incremented after one of the element have been placed at its place.
        for(j = i ; j < n ; j++)
        {
             if(a[small] > a[j])
                small = j;
        }
        swap(a, small, selected_place++);
         for(k = 0; k < n ; k++)
            {
                printf("%4d" , a[k]);
            }                                                                        /// in selection sort it is important to have only one swap in an iteration.
            printf("\n");
    }
    for(i = 0; i < n ; i ++)
    {
        printf("%10d" , a[i]);
    }
}
