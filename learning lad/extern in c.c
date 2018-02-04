# include <stdio.h>
int z = 1;

int i = 10;

int main()
{
    //int i =3;
    {
        //int i = 0;/// either you remove this
        extern int i; /// or you remove this for your program to compile.
        printf("%d\n",i);
        i = 2;
        z = 2; /// why does it change the value of z
        printf("%d\n",z );
    }
    printf("%d\n",i);
    printf("%d\n",z );/// why is the value changed
}

/*"extern" changes the linkage. With the keyword, the function / variable is assumed to be available somewhere else and
the resolving is deferred to the linker.
There's a difference between "extern" on functions and on variables: on variables it doesn't instantiate the variable itself,
i.e. doesn't allocate any memory. This needs to be done somewhere else.
Thus it's important if you want to import the variable from somewhere else.
For functions, this only tells the compiler that linkage is extern.
As this is the default (you use the keyword "static" to indicate that a function is not bound using extern linkage) you don't need to use it explicitly.
*/
