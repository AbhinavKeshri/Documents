# include <iostream>
class abc
{
public:

    static int counting;
     abc()
     {
         counting++;
     }
};
int main()
{

    abc a,b , c;
    std::cout << a.counting ;
}
