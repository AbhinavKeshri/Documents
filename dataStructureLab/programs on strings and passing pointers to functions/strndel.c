# include <stdio.h>
# include <stdlib.h>
char *Strndel(char * p, int start, int length)
{
    int i =0, j = start+length;
    char * returnStr = (char *)malloc(100*sizeof(char));
    while(i != start)
    {
        returnStr[i]= p[i];
        i++;
    }
    while(p[j]!='\0')
    {
        returnStr[i]=p[j];
        j++;
        i++;
    }
    returnStr[i] = '\0';
    return returnStr;
}
int main()
{
    printf("Enter a string");
    char *ptr = (char *)malloc(100* sizeof(char));
    scanf("%s",ptr);
    printf("Enter Start and Length");
    int start , length;
    scanf("%d%d", &start, &length);
    ptr = Strndel(ptr,start,length);
    printf("%s", ptr);

}
