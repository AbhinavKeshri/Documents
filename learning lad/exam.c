# include <stdio.h>
int main()
{
    int a[2][3][2] = {2,4,7,8,3,4,2,2,2,3,8,4};
    printf("%u %u %u %d\n", a , *a , **a, ***a);
    printf("%u %u %u %d\n", a+1 , *a+1, **a+1, **(*(a+1)+1+1));
}
