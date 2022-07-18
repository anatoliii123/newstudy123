/*AUTHOR ANATOLII123 */
/* 06/17/2022 */
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int headsortails;
    int userinput;
    while(1)
    {
        printf("Generate heads or tails: ");
        if(1!=scanf("%d", &userinput))
        {
            return 1;
        }
        switch(userinput)
        {
            case 1:
    srand(time(0));
    headsortails = rand() % 2;
    
    if (headsortails==0)
    {
        puts("Heads");
    }
    
    if (headsortails==1)
    {
        puts("Tails");
    }
    break;
        }
    
    }
    
    return 0;
}