# include <iostream>
class Space
{
    int mcount;
public:
    Space()
    {
        mcount  = 0;
    }
    operator++()        ///prefix
    {
        ++mcount;
    }
    void display()
    {
        std::cout << mcount << std::endl;
    }
};
int main()
{
    Space a;
    ++a;
    a.display();
}
