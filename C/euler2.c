#include <stdio.h>
int var = 1;
int var1 = 2;
int main()
{
while (var<100)
{
    var+=var1;
    var1+= var;
printf("%d\n", var);
}

}
