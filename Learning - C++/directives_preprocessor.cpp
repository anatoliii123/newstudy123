/* not my first program in c++ */
#include <iostream>

/* Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor.
 They are special lines interpreted before the compilation of the program itself begins. 
 In this case, the directive #include <iostream>,
  instructs the preprocessor to include a section of standard C++ code, known as header iostream,
   that allows to perform standard input and output operations, such as writing the output of this program 
   (Hello World) to the screen */

#define PI (3.14) 
/* #undef PI (WE CAN NO LONGER USE PI) */

#define E (2.7) // we have a mathematical constant "you can define it use it and then #undef even inside main"

#define STRNG "I'm a string *_*"

#define ARR_SIZE (128)

#define square(a) a * a

#define TRIGGER

#define COND1

#define COND2

#pragma once // if you want a header file to be included only once doesn't go in main

int main()
{
int temp;
std::cout << "Press 1 to use #define pi (3.14) and #define strng i'm a string";
cin >> temp;
switch (temp)
{
    case 1:
    std::cout << pi << std::endl; // #DEFINE PI (3.14)
    std::cout << strng << std::endl; // #DEFINE STRNG "I'M A STRING *_*"
}

int tempv;
std::cout << "Press 1 to use #definse ARR_SIZE (128)"
cin >> tempv;
switch(tempv)
{
    case 1:
    int arr[ARR_SIZE]; // #DEFINE ARR_SIZE (128)
    for (int i = 0; i < ARR_SIZE; ++i) // #DEFINE ARR_SIZE (128)
    {
       std::cout << arr[i];
    }
}

int tempvar;
std::cout << "Press 1 to use #define square(a) a * a function \n";
cin >> tempvar
switch (tempvar)
{
    case 1:
    std::cout << square(5) << std::endl;
}
int tempint;
std::cout << "Press 1 to use #define TRIGGER and #ifdef TRIGGER: \n";
cin >> tempint;
switch (tempint)
{
    case 1:
    #ifdef TRIGGER // you can also use ifndef to see if IT'S NOT DEFINED
    std::cout << "TRIGGER is defined";
    #endif
}

int tempinty;
std::cout << "Press 1 to use";
cin >> tempinty;
switch (tempinty)
{
    case 1:
}



}