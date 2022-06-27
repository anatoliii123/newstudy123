#include <stdio.h>
int i;
int main()
{

int var = 1;
int var1 = 1;

int var2 = var+var1; // 2;
printf("%d\n", var2);

int var3 = var2+var1; // 3
printf("%d\n", var3);


int var4 = var3+var2; // 5;
printf("%d\n", var4);

int var5 = var4+var3; // 2;
printf("%d\n", var5);

int var6 = var5+var4; // 3
printf("%d\n", var6);


int var7 = var6+var5; // 5;
printf("%d\n", var7);

int var8 = var7+var6; // 2;
printf("%d\n", var2);

int var9 = var8+var7; // 3
printf("%d\n", var3);


int var10 = var9+var8; // 5;
printf("%d\n", var4);

int var11 = var10+var9; // 2;
printf("%d\n", var5);

int var12 = var11+var10; // 3
printf("%d\n", var6);


int var13 = var12+var11; // 5;
printf("%d\n", var7);

int var14 = var13+var12; // 2;
printf("%d\n", var8);

int var15 = var14+var13; // 3
printf("%d\n", var9);


int var16 = var15+var14; // 5;
printf("%d\n", var10);

int var17 = var16+var15; // 2;
printf("%d\n", var11);

int var18 = var17+var16; // 3
printf("%d\n", var12);


int var19 = var18+var17; // 5;
printf("%d\n", var13);


}
