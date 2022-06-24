#include <stdio.h>
int count;
char *fizz_buzz[20] = {"Fizz", "Buzz", "FizzBuzz"};
int divisible_num1 = 3; int divisible_num2 = 5; int divisible_num3 = 15;
int main()
{
for(count=0; count<100; count++)
{
    int var_for_switch;
    printf("Press 1 to continue: ");
    scanf("%d", &var_for_switch);
    if(var_for_switch==1)
    {
        printf("%d\n", count);
        if(!(count%divisible_num1))
        {
            printf("%s\n", fizz_buzz[0]);
        }
        
        else if(!(count%divisible_num2))
        {
            printf("%s\n", fizz_buzz[1]);
        }
        
        else if(!(count%divisible_num3))
        {
            printf("%s\n", fizz_buzz[2]);
        }
    }

}
}