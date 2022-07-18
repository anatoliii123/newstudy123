#include <iostream>
#include <string>

template<typename T>
T max(T a, T b)
{
    return b < a ? a : b;
}

int main()
{
    int firstnum;
    std::cout<<"Enter a number: ";
    std::cin>>firstnum;
    
    int secondnum;
    std::cout<<"Enter a number: ";
    std::cin>>secondnum;

    std::cout<<"Biggest of the two numbers is "<<max(firstnum, secondnum);
}