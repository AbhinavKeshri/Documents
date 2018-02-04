# include <stdio.h>
int compare(int a, int b)
{
    if (a > b)return -1;
    else return +1;
}
void BubbleSort(int *a, int n,int (*compare)(int ,int))
{
    int j,i,temp;
    for(i=0;i<n;i++)
        for(j =0; j<n-1;j++)
        {
            if(compare(a[j],a[j+1])>0)
            {
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
}
int main()
{
    int i , a[] = {1 ,5 ,0,8,5 };
    BubbleSort(a,5,compare);
    for(i =0; i<5; i++)
    printf("%d ",a[i]);
}
