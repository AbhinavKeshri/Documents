# inlcude <iostream>
# include<stdio.h>
# inlcude <stdlib.h>
using namespace std;
int main()
{
    int *p = (int *)malloc(sizeof(int));
    int j =0;
    for(int i = 1; i!=0 ; )
    {

        cin>> i;
        p[j] = i;
        j++;
        p =(int *)realloc(p,(j+1)*sizeof(int));
    }
    for(i =0 ; i!= j; i++)
    {
        cout <<p[i] << endl;
    }
}
