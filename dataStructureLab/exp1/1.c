#include<stdio.h>
#include<string.h>
main()
{
    int i,j,sum=1;
    char a[20];
    printf("enter the string\t");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')
            continue;
        sum=1;
        for(j=i+1;j<strlen(a);j++)
            if(a[i]==a[j])
        {
            sum++;
            a[j]='0';
        }
        printf("frequency of %c = %d\n",a[i],sum);
    }

}
