#include <stdio.h>

// globals
int count_to_thousand;
int sum;

//main
int main()
{
    for(count_to_thousand=0; count_to_thousand<1000; count_to_thousand++)
    {
        if(!(count_to_thousand%3))
        {
            sum = sum+count_to_thousand;
            printf("%d\n", sum);
        }

        if(!(count_to_thousand%5))
        {
            sum = sum+count_to_thousand;
            printf("%d\n", sum);
        }
    }
    printf("%d\n", sum);
}