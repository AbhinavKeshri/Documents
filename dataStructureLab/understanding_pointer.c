# include <stdio.h>
int main()
{
    int a[] = {0,1,2,3,4};
    int *p[] = {a, a+1 ,a+2, a+3, a+4 };
    int **ptr = p;
    p = p+1;
    printf("%u\n",ptr);
    printf("%u\n", p);
    printf("%u\n",&a);
}
