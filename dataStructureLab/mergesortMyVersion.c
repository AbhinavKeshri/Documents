# include <stdio.h>
void merge(int a[],int b[],int start,int end)
{
    int mid = (start+end)/2;
    int i , j ;
    while( start <=mid && k <= end)
    {
        b[]
    }
}
void mergesort(int A[] , int start , int end ,int B[])
{
    if(start >=end)
    {
        return;
    }
    mergesort(A,start, (start+end)/2,B);
    mergesort(A,((end+start)/2)+1, end,B);
    merge()
}

int main()
{
	int size =0,i;
	scanf("%d",&size);
	int arr[size];
	for ( i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n",arr[i]);
	}

}
