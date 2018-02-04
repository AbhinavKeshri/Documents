# include <iostream>
using namespace std;
int main()
{
    int *p;
    p = (int *)malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
        cin >> p[i];
    for(int i = 0; i<5; i++)
        cout << p[i] << endl;
    free(p);
}
