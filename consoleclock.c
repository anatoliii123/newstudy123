#include <stdio.h>
#include <unistd.h>
int minute;
int second;
int hour;
int main()
{
    while(1)
    {
        while(hour==0)
        {
printf("Enter seconds: ");
scanf("%d", &second);
fflush(stdout);
printf("Enter minute: ");
scanf("%d", &minute);
fflush(stdout);
printf("Enter hour: ");
scanf("%d", &hour);
}
while(second!=60)
{ 
printf("\rSeconds %d", second);
printf(" ");
printf("Minute %d", minute);
printf(" ");
printf("Hour %d", hour);
fflush(stdout);
second++;
sleep(1);
}
if (second == 60)
{
    second = 1;
    minute++;
}
if (minute == 60)
{
    hour++;
}
}
}