# include <stdio.h>
# include <stdlib.h>
int Add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int x = 2, y = 4;
    int z = Add(x,y);
    printf("Sum = %d\n",z);
}
