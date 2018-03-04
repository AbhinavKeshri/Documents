# include <stdio.h>

int Search(int city1, int city2,int n,int Link[][n],int visited[])
{
    int i =0;

    int result=0;
    if(Link[city1][city2])
        return 1;
    visited[city1] = 1;
    {
        for(i=0; i< n ; i++)
        {
        if(!visited[i]&&search(i,city1,n,Link,visited))
        {

            result = Search(i,city2,n,Link,visited);
            printf("Searching between city: %d city: %d \n",i+1,city2+1);
            visited[i]=1;
            if(result)
            {
               printf("Found Searching between city: %d city: %d \n ",i+1,city2+1);
                return result;
            }
        }
        }
        return 0;
    }
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
            Search(--city1,--city2,n,Link,visited)?printf("Yes! There is a indirect link\n") : printf("No ! There is no indirect link\n");
            for(i=0;i<n; i++)
            {
                visited[i]= 0;
            }

        }
    }while(1);
}
