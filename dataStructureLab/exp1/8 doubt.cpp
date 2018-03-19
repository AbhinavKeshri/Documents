#include<stdio.h>
main()
{
int a[50],i,j,n;
printf("the size of the array is\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("non repeated elements are:");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;)
{
	if(a[i]!=a[j])
	j++;
	else
	continue;
}
	if(j==n)
	printf("%d\n",a[i]);
}
}
