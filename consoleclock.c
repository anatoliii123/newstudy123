#include <stdio.h>
#include <unistd.h>
int minute;
int second;
int hour;
int main()
{
    while(1)
    {
while(second!=60)
{ 
printf("Seconds %d", second);
printf("\r");
fflush(stdout);
second++;
sleep(1);
}
if (second == 60)
{
    second = 1;
    minute++;
    printf("Minute %d", minute);
    printf("\r");
}
if (minute == 60)
{
    hour++;
    printf("%d", hour);
    printf("\r");
}
}
}