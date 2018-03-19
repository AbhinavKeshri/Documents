# include <stdio.h>
# include <stdlib.h>
int main()
{
    printf("Enter Range\n");
    int range;
    scanf("%d", & range);
    printf("Enter the number of inputs\n");
    int n;
    scanf("%d", &n);
    int i;
    int arr[n];
    int * ptr = (int *)calloc(range,sizeof(int));
    for(i = 0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
        ptr[arr[i]]++;
    }
    for(i = 0; i < range ; i++)
    {
        if(ptr[i]==0)
        {
            printf("Found missing Number %d\n", i);
        }
    }
}
