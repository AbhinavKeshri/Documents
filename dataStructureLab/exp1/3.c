#include<stdio.h>
#include<string.h>
main()
{
    char a[10],c;
    int i;
    printf("enter a string\t");
    scanf("%s",a);
    int l=strlen(a);
    printf("enter a character\t");
    getche(c);
    for(i=0;i<l;i++)
    {
    	if(a[i]==c)
    	{
    		a[i]=a[i+1];
			break;
		}
	}
    printf("\n %s",a);    
}
