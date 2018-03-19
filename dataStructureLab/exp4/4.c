#include<stdio.h>
main()
{	
	int i,j,a[6][6],n;
		printf("enter order of matrix\n");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	printf("lower left triangle in rmo form:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n");
	printf("lower left triangle in cmo form:\n");
	
		for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)	
		{
			if(i>j)
			printf("%d\t",a[i][j]);
		}
	}
}
