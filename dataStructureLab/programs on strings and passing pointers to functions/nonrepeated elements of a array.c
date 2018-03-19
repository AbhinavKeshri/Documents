# include <stdio.h>
int main()
{
    printf("Enter a string\n");
    char String[100];
    int frequency[27];
    scanf("%s", String);
    int i;
    for(i = 1; i<27; i ++)
    {
        frequency[i]= 0;
    }
    for(i =0; String[i]!='\0'; i++)
    {
        frequency[String[i]-96]++;
    }
    for(i = 1; i<27; i ++)
    {
        if(frequency[i]==1)
        {
            printf("non repeated char = %c\n",96+i);
        }
    }

}
