# include <iostream>
enum weekDays
{
    sunday, monday, tuesday, wednesday , thursday , friday , saturday
};
bool operator==(weekDays w1, weekDays w2)
{
    if (w1 - w2==0)
        return 1;
    else
        return 0;
}

int  main()
{
    weekDays q, w;
    q = monday;
    w = sunday;
    if(q==w)
        std::cout << "yes" << std::endl;
    return 0;
}
