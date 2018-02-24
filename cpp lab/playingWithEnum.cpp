# include <iostream>
using namespace std;
char monthNames[][4] = {"jan","feb","mar","apr","may", "jun", "jul","aug","sep","oct", "nov", "dec"};
enum Month {january=1  , february, march, april , may , june , july  ,august , september , october ,november , december};
int main()
{
    Month abhinav = october;
    cout <<monthNames[january ] << endl;
    cout <<monthNames[abhinav ];
}
