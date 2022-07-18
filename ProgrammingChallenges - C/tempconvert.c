/* AUTHOR ANATOLII123 */
/* 06/16/2022 */

#include <stdio.h>
#include <stdlib.h>


    double fahrenheit;
    double celsius;
    double kevin;


double celsius_to_fahrenheit(double a) /* C->F[1] */
{
 fahrenheit = 9.0/5.0*celsius+32;
}

/*--------------->BREAK<-------------*/


double fahrenheit_to_celsius(double a)
{
celsius = (fahrenheit - 32) * 5/9;
}

/*--------------->BREAK<-------------*/

double celsius_to_kevin(double a)
{
kevin = celsius + 273.15;
}

/*--------------->BREAK<-------------*/

double kevin_to_celsius(double a)
{
celsius = kevin-273.15;
}



/*--------------->BREAK<-------------*/
int main()
{
    /*TEMPORARY VALUES*/
    int tempint;
    double tempint2;
    double tempint3;
    double tempint4;
    double tempint5;
    
    /*USER INTERACTION*/
printf("Choose[1-4]=C->F[1]__F->C[2]__C->K[3]__F->K[4]");
if(1!=scanf("%d", &tempint))
{
    return 1;
}

/* USER CHOICE HANDLE */
switch (tempint)
{
    case 1:
    printf("Value: ");
    if(1!=scanf("%lf", &celsius))
    {
        return 1;
    }
    tempint2 = celsius_to_fahrenheit(celsius);
    printf("%lf\n", tempint2);
    break;
    
    /*--------------->BREAK<-------------*/
    
    case 2:
    printf("Value: ");
    if(1!=scanf("%lf", &fahrenheit))
    {
        return 1;
    }
    tempint3 = fahrenheit_to_celsius(fahrenheit);
    printf("%lf\n", tempint3);
    break;
    
    
    /*--------------->BREAK<-------------*/
    
    
    case 3:
    printf("Value: ");
    if(1!=scanf("%lf", &celsius))
    {
        return 1;
    }
    tempint4 = celsius_to_kevin(celsius);
    printf("%lf\n", tempint4);
    break;
    
    
    
    /*--------------->BREAK<-------------*/
    
    
    case 4:
    printf("Value: ");
    if(1!=scanf("%lf", &celsius))
    {
        return 1;
    }
    tempint5 = kevin_to_celsius(celsius);
    printf("%lf\n", tempint5);
    break;
}
}