/*AUTHOR ANATOLII123*/
/* ---->Use on unix compiler for best results<-----*/
/* EX: https://www.onlinegdb.com/online_c_compiler */

#include <stdio.h>
#include <unistd.h>
unsigned short int minute;
unsigned short int second;
unsigned short int hour;
int main()
{
    while(1)
    {
        while(hour==0)
        {
printf("Enter seconds: ");
scanf("%hu", &second);
fflush(stdout);

printf("Enter minute: ");
scanf("%hu", &minute);
fflush(stdout);

printf("Enter hour: ");
scanf("%hu", &hour);
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