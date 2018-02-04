# include <iostream>
using namespace std;
class TOLL_BOOTH
{
private:
    unsigned int cars;
    double collection;
public:
    TOLL_BOOTH(unsigned int a =0, double b = 0)
    {
        cars = a;
        collection = b;
    }
    void payingCar()
    {
        cars += 1;
        collection += 2.50;
    }
    void noPaying()
    {

        cars += 1;

    }
    void display()
    {
        cout << "no of cars = " << cars << " total collection = " << collection<<endl;
    }
};
int main()
{
    TOLL_BOOTH delhi;03

    int a;
    while(1)
    {
        cin >> a;
        switch(a)
        {
        case 1:
            {
                delhi.payingCar();
                cout << "added paying car" <<endl;
                break;
            }
        case 2:
            {
                delhi.noPaying();
                cout <<"added non paying" <<endl;
                break;

            }
        case 3:
            {
                delhi.display();

                break;
            }
        default:{
            cout<< "press 1 to add paying car\npress 2 to add nonpaying car \npress 3 to display" <<endl;
        }
        }

    }
    return 0;
}
