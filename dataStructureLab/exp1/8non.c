#include<stdio.h>
main()
{
    int i,j,sum=0,t,n;
    int a[20];
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        t=0;
            for(j=0;j<n;j++)
                if(i!=j)
                    if(a[i]==a[j])
                        t='^';
        if(t!='^') 
		sum++;

    }
    printf("Total non repeated elements are %d",sum);
}
