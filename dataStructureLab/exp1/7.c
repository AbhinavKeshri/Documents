#include<stdio.h>


main()
{
    int i;
    int *a=malloc(10*sizeof(char));
    int *b=malloc(10*sizeof(char));
    scanf("%s%s",a,b);
    int *t=a;
    a=b;
    b=t;
    printf("%s\n%s",a,b);

}
