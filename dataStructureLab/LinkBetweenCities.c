# include <stdio.h>
# include <stdlib.h>

int *Search(int city1,int n,int Link[][n])
{
    int i=0,j=0;
    int *linked = (int *)malloc(n*sizeof(int));
    for(i; i<n;i++)
    {
        linked[i]=0;
    }
    {
       for(i=0; i <n ;i++)
       {
           if(Link[i][city1])
           {
               linked[i]=1;
               for(j =0;j<n;j++)
               {
                   if(Link[i][j])
                    linked[j]=1;
               }
           }
       }
    }
    return linked;
}
int main()
{
    int n;
    printf("How many cities are there\n");
    scanf("%d",&n);
    int visited[n];
    int i,j;
    for(i =0; i<n; i++)
        visited[i]=0;
    int Link[n][n];
    for(i = 0;i<n;i++)
    {
        for(j =0 ; j< n; j++)
        {
            Link[i][j]=0;
        }
    }
    for(i = 0;i<n;i++)
    {
        for(j =0 ; j< n; j++)
        {
            if(i==j)
            {
                Link[i][j]=1;
                continue;
            }
            if(!Link[i][j])
            {

            printf("\nIs there a link from city: %d to city: %d --",i+1 ,j+1);
            scanf("%d" , &Link[i][j]);
            Link[j][i]=1;
            }
        }
    }
    /* For Debugging */

    int city1,city2;
    int *ptr[n];
    for(i=0;i<n;i++)
    {
        ptr[i] = Search(i,n,Link);
    }
    int option;
    do
    {
        printf("Choose option\n1.To Find Direct Link Between cities\n2.To find alternate link between cities\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\nEnter two cities");
            scanf("%d %d", &city1,&city2);
            Link[--city1][--city2]?printf("Yes! There is a direct link\n") : printf("No ! There is no direct link\n");
            break;
        case 2:
            printf("\nEnter two cities");
            scanf("%d %d", &city1,&city2);
            for(i=0;i<n; i++)
            {
                if(ptr[city1-1][i]==city2-1)
                {
                    printf("Yes there is Alternate route!\n");
                }
            }

        }
    }while(1);
}
