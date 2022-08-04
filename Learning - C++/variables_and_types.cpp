#include <iostream>

int main()
{
  int a, b;
  int result;

a = 5;
b = 2;
a = a + 1;
result = a - b;
std::cout << result << std::endl;

// CHAR TYPES BELOW
char ch; //Exactly one byte in size. At least 8 bits.
char16_t char_sixteen_tee; // Not smaller than char. At least 16 bits.
char32_t char_thirytwo_tee; // Not smaller than char16_t. At least 32 bits.
wchar_t wchar_tee = "Anton Ivanov Tonchev DOB JAN 28 1998"; // Can represent the largest supported character set
std::cout << wchar_tee << std::endl;

// INTEGER TYPES BELOW (SIGNED)  values between -32768 and 32767
signed char signed_char; // Same size as char. At least 8 bits.
signed short int signed_short_int; // 	Not smaller than char. At least 16 bits.
signed int signed_int; // 	Not smaller than short. At least 16 bits
signed long int signed_long_int; // Not smaller than int. At least 32 bits.
signed long long int signed_long_long_int; // Not smaller than long. At least 64 bits.

/*
Note that the range of positive values is approximately halved in signed types compared to unsigned types,
 due to the fact that one of the 16 bits is used for the sign; 
 this is a relatively modest difference in range, 
 and seldom justifies the use of unsigned types based purely on the range of positive values they can represent.

*/


// INTEGER TYPES BELOW (UNSIGNED) values in the range 0 to 65535
unsigned char signed_char;
unsigned short int signed_short_int;
unsigned int signed_int; // (same size as their signed counterparts)
unsigned long int signed_long_int;
unsigned long long int signed_long_long_int;

// FLOATING-POINT TYPES 
/*For floating-point types, the size affects their precision, 
by having more or less bits for their significant and exponent. */
float fl; 
double db;
long double long_db;

// BOOLEAN TYPE
bool true_false;

//VOID TYPE 
void vooid; // no storage

// NULL POINTER 
decltype(nullptr)

// continue https://cplusplus.com/doc/tutorial/variables/->Fundamental data types
}