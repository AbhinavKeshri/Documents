#include<stdio.h>
main()
{
    int a[20],i,n;
    printf("enter length of an array[maxsize=20]");
    scanf("%d",&n);
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    
    	for (i=0;i<n/2;i++)
    	{
    		a[i]=a[i]+a[n-1-i];
            a[n-1-i]=a[i]-a[n-1-i];
       	    a[i]=a[i]-a[n-1-i];
       	}
	
    for (i=0;i<n;i++)
       printf("%d",a[i]);

}
