# include <stdio.h>
# include <stdlib.h>
int peak_finder(int *p, int start, int end);
int main()
{
    int *p = (int *)malloc(sizeof(int));
    int j =0,i;
    p[j]=0;
    j++;
    for(i = 1; i!=0 ; )
    {
        scanf("%d",&i);
        p[j] = i;
        j++;
        p =(int *)realloc(p,(j+1)*sizeof(int));
    }
    printf("the array you inserted is\n");
    for(i =0 ; i!= j; i++)
    {
        printf("%d\t",p[i]);
    }
    for(i = 1; i<j-1; i++)
    {
        if(p[i]>=p[i-1]&&p[i]>=p[i+1])
        {
            printf("\npeak at %d\n",p[i]);
            break;
        }
    }
    printf("peak is at %d", p[peak_finder(p,0,j)]);

}
int peak_finder(int *p, int start, int end)                 /// complexity of this algorithm is log n to the base 2
{
    if(p[(start+ end)/2]<p[(start + end)/2 - 1])
    {
        return peak_finder(p, start, (start+end)/2);
    }
    else if(p[(start+ end)/2]<p[(start + end)/2 + 1])
    {
        return peak_finder(p, (start+ end)/2, end);
    }
    else
    {
        return (start+ end)/2;
    }
}
