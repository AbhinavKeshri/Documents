# include <iostream>
using namespace std;
class Stack
{
private:
    char data_[10];
    int top_;
public:
    Stack():top_(-1){}
    void init()
    {
        top_ = -1;
    }
    int empty()
    {
        return (top_ == -1);
    }
    void push(char x)
    {
        data_[++top_] = x;
    }
    void pop()
    {
        --top_;
    }
    char top()
    {
        return data_[top_];
    }
};
int main()
{
    char str[10] = "ABCDE";

    Stack s;
    ///s.init(); ///clean initialization

    for (int i = 0; i< 5; i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
