# include <iostream>
struct entity
{
    static int x, y;
    static void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }

};
int entity::x=0;
int entity::y;
int main()
{
    entity e;
    e.x = 2;
    e.y = 3;
    entity e1;
    e1.x = 4;
    e1.y = 5;
    entity::x = 7;
    entity::y = 8;
    e.Print();
    e1.Print();
    entity::Print();///static members can access static variable.

}
