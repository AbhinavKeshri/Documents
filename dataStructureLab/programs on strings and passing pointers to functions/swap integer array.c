# include <stdio.h>
void swapIntArr(int * a, int * b, int size)
{
	int i = 0, temp;
	while (i < size)
	{
		temp = a[i];
		a[i] = b[i];
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
