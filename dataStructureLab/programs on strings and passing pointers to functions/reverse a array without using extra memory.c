# include <stdio.h>
void swapIntArr(int * a, int size)
{
	int i = 0;
	while (i < size/2)
	{
		a[i] = a[i] + a[size-i-1];
		a[size-i-1] = a[i] -
		b[i] = temp;
		i++;
	}
}
int main()
{

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 11, 12, 13, 14, 15, 16, 17 , 18 , 19 ,20 };
	swapIntArr(a, b, 10);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d %d \n", a[i], b[i]);
	}
}
