# include <iostream>
# include <vector>
/// you can pass function as a parameter to another function.
void HelloWorld()
{

    std::cout << "Hello World!" << std::endl;
}
void HelloWorld1(int a)
{

    std::cout << "Hello World! value : " << a<<std::endl;
}
///aut
int main()
{

    HelloWorld();
    auto function_variable = &HelloWorld;///can avoid &    ///We are getting memory address of the function Helloworld.
    function_variable();
    void(*function_var)(/*parameter*/) = HelloWorld;
    function_var();
    typedef void(*HelloWorld1Function)(int a); /// you can skip a
    HelloWorld1Function function1 = HelloWorld1;
    function1(8);
}
