# include <stdio.h>
# include <stdlib.h>
char *strdel(char* ptr, char a)
{
    int i ;
    for(i =0; ptr[i]!='\0'; i++)
    {
        if(ptr[i]==a)
        {
            break;
        }
    }
    for(i; ptr[i]!='\0'; i++)
    {
        ptr[i] = ptr[i+1];
    }
    return ptr;
}
int main()
{
    printf("Enter the string.\n");
    char * ptr= (char *)malloc(100* sizeof(char));
    scanf("%s", ptr);
    printf("You entered %s\n", ptr);
    printf("Enter the charecter to be deleted\n");
    char a ;
    a = getche();
    printf("\n");
    ptr = strdel(ptr, a);
    printf("The resultant string is = %s",ptr );



}
