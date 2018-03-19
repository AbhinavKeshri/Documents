#include<stdio.h>
main()
{
    int i,n,j,a[20];
    printf("enter no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("after sorting elements are:\n");
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        if(a[i]>a[j])
        {
            a[j]=a[j]+a[i];
            a[i]=a[j]-a[i];
            a[j]=a[j]-a[i];
        }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
