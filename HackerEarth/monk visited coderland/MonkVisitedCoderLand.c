# include <stdio.h>
# include <stdlib.h>
int* rankIt(int * C, int N)
{
	int i,j;
	int *rankList = (int *)malloc(N * sizeof(int));
	for (i = 0; i < N; i++)
	{
		rankList[i] = 0;
		for (j = 0; j < N; j++)
		{
			if (C[i] > C[j])
			{
				rankList[i]++;
			}
		}
	}
	return rankList;
}
int findNextMin(int * rankList, int i, int N)
{
	int j = i;
		while(j <= N)
		{
			if (j == N-1)
			{
				return N;
			}
			if (rankList[j] <= rankList[j - 1] && rankList[j] <= rankList[j + 1])
			{
				return j;
			}
			j++;
		}
}
int greedy(int *C, int *L, int N)
{
	int costSum = 0, i=0,  nextMin,  fuelReq=0,j;
	int *rankList = rankIt(C, N);
	while (i < N)
	{
		if (rankList[i] != 0)
		{
			nextMin = findNextMin(rankList, i, N);
			for (j = i; j < nextMin; j++)
			{
				costSum += L[j] * C[j];
			}
			i = nextMin;
		}
		else
		{
			for (j = i; j < N; j++)
			{
				fuelReq += L[j];
				costSum += fuelReq * C[i];
			}
		}
	}
	return costSum;
}
int main()
{
	int T;
	scanf_s("%d", &T);
	for (T; T > 0; T--)
	{
		int N,i;
		scanf_s("%d", &N);
		int* C = (int *)malloc(N * sizeof(int));
		int* L = (int *)malloc(N * sizeof(int));
		for (i = 0; i < N; i++)
		{
			scanf_s("%d", &C[i]);
		}
		for (i = 0; i < N; i++)
		{
			scanf_s("%d", &L[i]);
		}
		printf("%d", greedy(C, L, N));

	}
}
