# include <stdio.h>
# include <stdlib.h>
int main()
{
    char * ptr;
    int i = 0;
    char a = 'a';
    ptr = (char *)malloc(sizeof(char));
    for(;a!='z';)
    {

        a  = getchar();
        ptr[i]=a;
        i++;
        realloc(ptr,(i+1)+sizeof(char));
    }
    int iter;
    for(iter = 0; iter< i; iter++)
    {
        printf("%c",ptr[iter]);
    }
    free(ptr);
}

/// it prints in the same way i input enter is treated as \n
/// if i input large number of character then it crashes.
