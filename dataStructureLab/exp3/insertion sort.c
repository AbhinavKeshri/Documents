#include<stdio.h>
main()
{
    int i,n,j,a[20];
    printf("enter no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("after sorting elements are:\n");
    for(i=1;i<=(n-1);i++)
        {
        	for(j=i;j>0;j--)
        {
        	if(a[j-1]>a[j])
        {
            a[j]=a[j]+a[j-1];
            a[j-1]=a[j]-a[j-1];
            a[j]=a[j]-a[j-1];
        }
		}
		}
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
