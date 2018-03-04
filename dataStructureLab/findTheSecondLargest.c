# include <stdio.h>
void swap(int *max, int *secondMax)
{
    int temp ;
    temp = *max;
    *max = *secondMax;
    *secondMax = * max;
}
int main()
{

    printf("Enter the number of input ");
    int n;
    scanf("%d", &n);
    int max,secondMax;
    scanf("%d %d",&max, &secondMax);
    if(max<secondMax)
        swap(&max, &secondMax);
    int i,input;
    for(i=0 ; i< n-2; i++)
    {
        scanf("%d", &input);
        {
            if(input > max)
            {
                secondMax = max;
                max = input;
            }
            else if(input> secondMax)
            {
                secondMax = input;
            }
        }
    }
    printf("Max = %d secondMax = %d", max , secondMax);
}
