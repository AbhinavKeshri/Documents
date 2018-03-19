#include<stdio.h>
#include<string.h>
char* strndel(char *a, int s, int l);
main()
{
    char a[20];
    int start,length;
    scanf("%s%d%d",a,&start,&length);
    char*p=strndel(a,start,length);
    printf("%s",p);
}
char* strndel(char *a, int s, int l)
{
    int i=0;
        if(l>strlen(a)-s)
            printf("Invalid Length\n");
        else
            for(i=s+l;i<strlen(a);i++)
                a[i]='\0';
    return (a+s);
}
