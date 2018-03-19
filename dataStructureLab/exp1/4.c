#include<stdio.h>
void swap(int &y,int &z)
{
	int c;
	c=y;
	y=z;
	z=c;
};
void main()
{
	int a=5,b=6;
	swap(a,b);
	printf("after swapping a=%d\nb=%d",a,b);
}
