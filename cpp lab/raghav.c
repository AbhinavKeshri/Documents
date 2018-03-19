#include<stdio.h>
main()
{
	int m, n, x, y, z, i, j, k = 0, c, d;
	scanf_s("%d%d%d", &n, &m, &x);
	int a[n][m], b[n][m];
	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	d = x;

	for (; ; )
	{
		if (n <= 2 * k || m <= 2 * k)
			break;
		c = 2 * (m + n) - 4 * k;
		int array[c];
		d = c % d;
		z = 0;

		for (j = k; j<(m - k); j++)
		{
			i = k;
			array[z] = a[i][j];
			z++;
		}
		for (i = k + 1; i<(n - k - 1); i++)
		{
			j = m - k - 1;
			array[z] = a[i][j];
			z++;
		}
		for (j = m - k - 1; j >= k; j++)
		{
			i = n - k - 1;
			array[z] = a[i][j];
			z++;
		}
		for (i = n - k - 1; i>k; i++)
		{
			j = k;
			array[z] = a[i][j];
			z++;
		}
		for (i = 0; i<c; i++)
			printf("%d ", array[i]);
		k++;
	}
}
