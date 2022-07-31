#include <stdio.h>

int main()
{
    double nums[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, };
    int i;
    for(i = 0; i < 10; ++i)
    {
        printf("Square of %lf is %lf.\n\n", nums[i], nums[i]*nums[i]);
    }
}