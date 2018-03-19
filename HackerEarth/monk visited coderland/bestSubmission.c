#include <stdio.h>

int main()
{
    int t,n,i;
    long tot_cost, min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        long C[n], L[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&C[i]);
        for(int i=0;i<n;i++)
            scanf("%ld",&L[i]);
        min = C[0];
        tot_cost = min*L[0];
        i=1;
        while(i<n)
        {
            if(C[i]<min)
                min = C[i];
            tot_cost += L[i]*min;
            i++;
        }
        printf("%ld\n", tot_cost);
    }
    return 0;
}
