#include <stdio.h>
void swap(int x[],int y[]);
main()
{
    int a[5],b[5],i;
    for (i=0;i<5;i++)
        scanf("%d",&a[i]);
    for (i=0;i<5;i++)
        scanf("%d",&b[i]);
    swap(a,b);
    for (i=0;i<5;i++)
        printf("%d\t%d\n",a[i],b[i]);
}
void swap(int x[],int y[])
{
    int i;
    for(i=0;i<5;i++)
    {
       x[i]=x[i]+y[i];
       y[i]=x[i]-y[i];
       x[i]=x[i]-y[i];
    }
}
