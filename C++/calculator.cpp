/* AUTHOR ANATOLII123 - 6/20/2022 */

#include <iostream>

void add(float a, float b)
{
float tempfloat;
tempfloat = a+b;
std::cout<<a<<" + "<<b<<" = "<<tempfloat<<"\n";
}


void substract(float a, float b)
{
float tempfloat1;
tempfloat1 = a-b;
std::cout<<a<<" - "<<b<<" = "<<tempfloat1<<"\n";
}


void multiply(float a, float b)
{
float tempfloat2;
tempfloat2 = a*b;
std::cout<<a<<" * "<<b<<" = "<<tempfloat2<<"\n";
}


void divide(float a, float b)
{
float tempfloat3;
tempfloat3 = a/b;
std::cout<<a<<" / "<<b<<" = "<<tempfloat3<<"\n";
}


int main()
{
    float a;
    std::cout<<"Enter number 1/2: ";
    std::cin>>a;

    float b;
    std::cout<<"Enter number 2/2: ";
    std::cin>>b;
    
    int tempint1;
    std::cout<<"Choose 1 for addition\nChoose 2 for substraction\n";
    std::cout<<"Choose 3 for multiplication\nChoose 4 for division\n";
    std::cout<<"Choose: ";
    std::cin>>tempint1;
    
    switch(tempint1)
    {
        case 1:
        add(a, b);
        break;
        
        case 2:
        substract(a, b);
        break;
        
        case 3:
        multiply(a, b);
        break;
        
        case 4:
        divide(a, b);
        break;
    }
    return 0;
}