#include <stdio.h>
void swap(int *x, int *y);
main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d\n%d",a,b);
}
void swap(int *x, int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
