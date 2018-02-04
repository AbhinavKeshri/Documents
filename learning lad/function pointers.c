# include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int (*fptr)(int x, int y);
    fptr = &add;
    int a;

    a= fptr(23,43);
    printf("%d",a);

}
