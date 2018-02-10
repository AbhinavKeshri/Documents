# include <iostream>
using namespace std;
int sum = 0;
int min1=0;
class monk
{
private:
    int top;

public:
    monk()
    {
        top = -1;
    }
    void pushl()
    {
        top++;

    }
    void popl()
    {
        top--;
    }
    int sizel()
    {
        return top+1;
    }
};
class charecter
{
public:
    int *p;
    int top ;
public:
    charecter(int a)
    {
        p = new int[a];
        top = a-1;
    }

    void push(int x)
    {
        p[top]= x;
        top--;
    }
    void push()
    {
        top++;
    }
    void pop()
    {
        top += 1;
    }

};
int main()
{
    int a,b;
    cin >> a;
    charecter Harry(a);
    monk Monk;
    for(int i = 0; i < a; i++)
    {
        cin >> b;
        Harry.push(b);
    }
    int no_of_inst;
    cin >> no_of_inst;
    int req_amt;
    cin >> req_amt;
    for(int i =0; i < no_of_inst; i++)
    {
        string abh;
        cin >> abh;
        int k;
        if(abh == "Harry")
            k = 1;
        if(abh == "Remove")
            k  = 2;
        switch(k)
        {
        case 1:
            Harry.pop();
            Monk.pushl();
            sum += Harry.p[Harry.top];
            if(sum<=req_amt)
                min1++;
            break;

        case 2:
           Monk.popl();
           sum -= Harry.p[Harry.top];
           if(sum<=req_amt)
            min1--;
        }

    }
    cout << min1;


}
