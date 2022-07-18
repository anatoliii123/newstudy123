/*AUTHOR ANATOLII123
  6/18/2022 */
#include <stdio.h>
#include <unistd.h>
int main()
{
    
while(1)
// while loop for custom input
{
    
// declare input variable and take input
int age;
printf("Whats your age?: ");
if(1!=(scanf("%d", &age)))
{
    return 1;
}

/*IMPERATIVE STYLE MONTHS,DAYS,HOURS,MINUTES,SECONDS*/
int months = age*12;
printf("months = %d\n", months);

int days = months*30;
printf("days = %d\n", days);

int hours = days*24;
printf("hours = %d\n", hours);

int minutes = hours*60;
printf("minutes = %d\n", minutes);

int seconds = minutes*60;
printf("seconds = %d\n", seconds);

//simple feature
puts("###############");
}

}