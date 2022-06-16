#include <stdio.h>
#include <stdlib.h>


    double fahrenheit;
    double celsius;


double celsius_to_fahrenheit(double a)
{
fahrenheit = celsius*(9/5)+32;
}
double fahrenheit_to_celsius(double a)
{

}


int main()
{
    int tempint;
    double tempint2;
printf("Choose[1-4]=C->F[1]__F->C[2]__C->K[3]__F->K[4]");
if(1!=scanf("%d", &tempint))
{
    return 1;
}
switch (tempint)
{
    case 1:
    printf("Value: ");
    if(1!=(scanf("%lf", &celsius)))
    {
        return 1;
    }
    tempint2 = celsius_to_fahrenheit(celsius);
    printf("%lf\n", tempint2);
    break;
}
}