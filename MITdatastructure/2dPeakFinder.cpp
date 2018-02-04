# include <iostream>
using namespace std;

int main()
{
    int a[6][6]={0,0,0,0,0,0,0,1,2,3,4,0,0,5,6,7,8,0,0,9,10,11,12,0,0,13,14,15,16,0,0,0,0,0,0,0} ;
    for(int i =1; i<5; i++)
    {
        for(int j = 1; j<5 ; j++)
        {
            if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
            {
                cout << "peak is at " << a[i][j];
            }
        }
    }

    return 0;
}
