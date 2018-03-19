#include<stdio.h>
#include<conio.h>
int max(int a,int b)
{if(a>b)
return a;
else
return b;
}
int min(int a,int b)
{if(a>b)
return b;
	else
		return a;
}
float med(int a[],int b[], int n)
{float m1,m2;
m1=(a[n/2]+a[(n-1)/2])/2.0;m2=(b[n/2]+b[(n-1)/2])/2.0;
if(n==2)
return ((max(a[0],b[0])+min(a[1],b[1]))/2.0);
if(m1==m2)
return m1;
else if(m1>m2)
return (med(a,&b[n/2],(n+1)/2));
else
return (med(&a[n/2],b,(n+1)/2));
}
main()
{int i,n,a1[20],a2[20];
 printf("enter size of array");
 scanf("%d",&n);
 printf("enter elements of first array");
  for(i=0;i<n;i++)
    {scanf("%d",&a1[i]);}
printf("enter elements of second array");
  for(i=0;i<n;i++)
    {scanf("%d",&a2[i]);}
printf("median of 2 merged arrays = %f",med(a1,a2,n));    
getch();
}
