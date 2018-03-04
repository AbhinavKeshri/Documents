# include <stdio.h>
int max(int a, int b)
{
    return a>b?a:b;
}
int min(int a, int b)
{
    return a<b?a:b;
}
int main()
{
    int n, i=0;
    printf("Enter the number of input.\n");
    scanf("%d", &n);
    int arr[2*n];
    for(i = n; i < 2*n ; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(i = 2*n-2; i > 1; i= i-2)
    {
        arr[i/2] = max(arr[i], arr[i+1]);
    }
    for(i = 1; i< 2*n ; i++)
    {
        printf("%d  " ,arr[i]);
    }
    ///For second Largest
    i = 2;
    int second;

    while(i < 2*n-1)
    {
        second = max(arr[i] , arr[i+1]);
        if(arr[i]>arr[i+1])
        {
            i = i;
        }
        else{ i = i++;}
        i *=2;

    }
    printf("\nsecond = %d", second);

}
