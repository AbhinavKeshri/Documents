# include <stdio.h>
void a()
{
    printf("hello");
}
void B(void (*ptr)())
{
    ptr();
}
int main()
{
  B(a);
}
