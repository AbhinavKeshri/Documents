# include <stdio.h>
# include <stdlib.h>
int main()
{
    int i = 0;
    char *p = (char *)malloc(sizeof(char));
    char *q = (char *)malloc(sizeof(char));
    printf("Enter two strings\n");
    char a;
    do{
    scanf("%c",&a);
    p[i] =  a;
    i++;
    p = (char *)realloc(p, i*sizeof(char));

    }while(a!='\0');
    printf("%s", p);
}
