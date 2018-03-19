# include <stdio.h>
# include <stdlib.h>
# define max 100
int arr[max];
int top = -1;
int main()
{
    while(1)
    {
        printf("Enter \n1. to convert binary to decimal \n2. to exit\n");
        int option;
        scanf("%d", &option);
        if(option==1)
        {
            printf("Enter the decimal to be converted into binary\n");
            int decimal;
            scanf("%d", &decimal);
            for(;decimal; decimal/=2)
            {
                top++;
                arr[top] = decimal%2;
            }
            printf("\n\n\nBinary of the entered decimal is\n");
            while(top!=-1)
            {
                printf("%d",arr[top]);
                top--;
            }
            printf("\n\n\n\n");

        }
        else
            exit(0);
    }
}
