# include <iostream>
///# include <string>
template<typename T> /// you can also use class instead of typename.
void Print(T value)
{
    std::cout << value << std::endl;
}
int main()
{
    Print<int>(5);
    Print<std::string>("Hello");
    Print(5.5f);

}
