# include <stdio.h>
void swap(int * c, int l, int r)
{
	int temp = c[l];
	c[l] = c[r];
	c[r] = temp;
}
void quick(int X[], int l, int r)
{
	int i, j, pivot, t, k;
	if (l < r)
	{
		i = l - 1;
		j = l;
		pivot = X[r];
		while ( j <= r)
		{
			if (X[j]<= pivot)
			{
				i++;
				swap(X, i, j);

			}
			j++;
		}
		swap(X, r, i + 1);
		quick(X, l, i-1);
		quick(X, ++i, r);
	}
}

int X[] = {5,4,3,2,1 };
int main()
{
	int l, r, i, j;
	l = 0;
	r = 5;
	printf("\n \t\t Unsorted Data \n");
	for (i = 0; i <r; i++)
		printf("%3d", X[i]);
	printf("\n");
	quick(X, l, r-1);
	printf("\n\t\t Sorted Data  \n");
	for (i = 0; i < r; i++)
		printf("%3d", X[i]);
	printf("\n");

}


























