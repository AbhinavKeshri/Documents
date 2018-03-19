#include<stdio.h>
main()
{
	int a[50],f[50],i,j,cnt,n;
printf("the size of the array is\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	f[i]=-1;
}
for(i=0;i<n;i++)
{cnt=1;
for(j=i+1;j<n;j++)
{
	if(a[i]==a[j])
	{
		cnt++;
		f[j]=0;
	}
}
	if(f[i]!=0)
	{
		f[i]=cnt++;
	}
}
	
printf("the non repeated elements of array\n");
for(i=0;i<n;i++)
{
if(f[i]==1)
{
	printf("%d\n",a[i]);
}
}
}
