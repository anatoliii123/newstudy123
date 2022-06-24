#include <stdio.h>
int count;
char fizz_buzz[20] = {"Fizz", "Buzz", "FizzBuzz"};

int main()
{
for(count=0; count<100; count++)
{
    int var_for_switch;
    printf("Press 1 to continue: ");
    fgets(var_for_switch, 1, stdin);
    if(var_for_switch==1)
    {
        printf("%d", count);
    }

}
}