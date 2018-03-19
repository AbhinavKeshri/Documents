#include<stdio.h>
#include<string.h>
main()
{
    int i,j,sum=0,t;
    char a[20];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        t=0;
            for(j=0;j<strlen(a);j++)
                if(i!=j)
                    if(a[i]==a[j])
                        t=1;
        if(t!=1) sum++;

    }
    printf("Total single occurring elements are %d",sum);
}
