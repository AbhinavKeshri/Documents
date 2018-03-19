#include<stdio.h>
void swap(int &y,int &z)
{
	int c;
	c=y;
	y=z;
	z=c;
};
void main()
{   int i;
	int a[10]={1,5,6,3,5,6,3,5,4,6};
	int b[10]={3,6,4,5,6,2,5,8,9,4};
	for(i=0;i<10;i++)
	{
		swap(a[i],b[i]);
	}
	printf("after swapping two arrays are\na=");
	for(i=0;i<10;i++)
	{
		printf("%d,"a[i]);
	}
	printf("b=");
	for(i=0;i<10;i++)
	{
		printf("%d,"b[i]);
	}
}
