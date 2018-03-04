# include <stdio.h>
void merge(int a[],int b[], int start, int end)
{
    int check;
    for(check = 0;check <= end; check++)
        printf("%d ",b[check]);
    printf("\n");
    int middle = (start+end)/2;
    int i=start, j = middle+1,k = 0,t;
    while(i<=middle&&j<=end)
    {
        if(a[i]<= a[j])
        {
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }

    }
    if(i>middle)
    {
        for(t = j; t <=end; t++)
        {
            b[k++] = a[t];
        }
    }
    else
    {
        for(t = i;t<=middle;t++ )
            b[k++]=a[t];
    }
}

void mergeSort(int A[], int B[], int start , int end)
{
    if(start>= end)
    {
        return;
    }
    mergeSort(A,B,start,(start+end)/2);
    mergeSort(A,B,((start+end)/2)+1, end);
    merge(A,B,start,end);
}

int main()
{
    int initList[]={12,12,3,4,45,0,1,89,90,3};
    int result[10];
    mergeSort(initList,result,0,9);
    int i;
    for(i =0 ; i< 10 ; i++)
        printf("%d ",result[i]);
}
