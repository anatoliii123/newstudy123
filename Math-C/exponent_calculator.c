// C program to illustrate
// power function
#include <math.h>
#include <stdio.h>
double one, two, three, four, five, six, seven, eight, nine, ten;
double expone, exptwo, exptree, expfour, expfive, expsix, expseven, expeight, expnine, expten, result, result1, total;
int main()
{
    int array_size;
    printf("How many exponents?: ");
    scanf("%d", &array_size);
    switch (array_size)
    {
        case 1:
        printf("Enter a value: ");
        scanf("%lf", &one);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expone);
        
        result = pow(one, expone);
        
        printf("%lf", result);
        break;
        
        case 2:
        printf("Enter a value: ");
        scanf("%lf", &one);
        
        printf("Enter a value: ");
        scanf("%lf", &expone);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &exptwo);
        
        result = pow(one, expone) + pow(two, exptwo);
        
        printf("%lf", result);
        
        break;
        
        case 3:
        printf("Enter a value: ");
        scanf("%lf", &one);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expone);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        break;
        
        case 4:
        printf("Enter a value: ");
        scanf("%lf", &one);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expone);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        break;
        
        case 5:
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        break;
        
        case 6:
        printf("Enter a value: ");
        scanf("%lf", &one);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expone);
        
        printf("Enter a value: ");
        scanf("%lf", &two);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &exptwo);
        
        printf("Enter a value: ");
        scanf("%lf", &three);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &exptree);
        
        printf("Enter a value: ");
        scanf("%lf", &four);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expfour);
        
        printf("Enter a value: ");
        scanf("%lf", &five);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expfive);
        
        printf("Enter a value: ");
        scanf("%lf", &six);
        
        printf("Enter exponent for that value: ");
        scanf("%lf", &expsix);
        
        result = pow(one, expone) + pow(two, exptwo) + pow(three, exptree);
        result1 = pow(four, expfour) + pow(five, expfive) + pow(six, expsix);
        total = result + result1;
        
        printf("%lf", total);
        break;
        
        case 7:
        break;
        
        case 8:
        break;
        
        case 9:
        break;
        
        case 10:
        break;
    }
    
    return 0;
}