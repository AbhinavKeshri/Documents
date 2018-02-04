# include <iostream>
# include <stdlib.h>

using namespace std;
int peak(int* ptr, int start , int end1);
int main()
{
    int* p ;
    int j = 0;
    p = new int[1];
    for(int i= 1 ; i>0;)
    {
        cin >> i;
        p[j]= i;
        j++;
        p =(int *)realloc(p, (j*sizeof(int)));
    }
    cout << "peak is at " << p[(int)peak(p,0,j-1)];

}
int peak(int * ptr, int start , int end1)
{
    static int a = 0;
    a++;
    cout << a << endl;
    if(ptr[(start+ end1)/2]<ptr[((start+end1)/2)-1]&&ptr[(start+ end1)/2]>=ptr[((start+end1)/2)+1])
        return (int)(start+end1)/2;
    else
        return peak(ptr,start, (start+end1)/2);
}
