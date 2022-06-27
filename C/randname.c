#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char cast1;
    int cast2;
    printf("Choose array length: ");
    scanf("%c", &cast1);
    cast2 = atoi(&cast1);
    char parr1[cast2];
    for(i=0; i<cast1; i++)
    {
        char tempchar;
        printf("Name to insert to array: ");
        scanf("%s", &tempchar);
        parr1[i] = tempchar;
    }
    
    int tempint;
    int logic;
    char answer;
    printf("Would you like to generate a new name?[y1/n2]: ");
    scanf("%d", &logic);
    if(logic==1)
    {
        answer='y';
    }
    else if(logic==2)
    {
        answer='n';
    }
    while(answer=='y')
    {
        tempint = rand()%range;
        printf("%c", parr1[tempint]);
    }
}