# include <stdio.h>
# define SIZE 10
int arr[SIZE]={10,9,8,7,6,5,4,3,2,1};
void mergesort(int A[],int i ,int j)
{
    int mid;
    if(i >= j) return;
    {
        int mid = (i+j)/2;
        mergesort(A,i,mid);
        mergesort(A,mid+1,j);
        merge(A,i,j);
    }
}
void merge(int A[],int i ,int j)
{
     int k, b[100],mid, l,start;

     start = i;
     mid = (i + j)/2;
     k = mid + 1;
     l = i;
     while(i <=mid && k <= j)
     {
         if(a[i]>=a[k])
            b[l++] = a[i++];
         else
            b[l++] = a[k++];
     }
     if(i > mid)
        for(;k<= j; ) b[l++] = a[k++];
     else
}
int main()
{
    int data[100], i, j, n, temp;

    printf("Give n : ");
    scanf("%d", &n);
    printf(" n = %d \n",n);
    for(i =0; i< n ; i++)
        scanf("%d",data+i);
    printf("\n NUmber read are : ")
    for(i = 0; i< n ; i++)
    {
        printf("%d ",*(data + i));
    }
    printf("\n");
    mergesort(data, 0, n-1);
    printf("\n Sorted numebrs ae : ");
    for(i = 0; i< n ; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

