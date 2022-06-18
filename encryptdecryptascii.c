#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void generate_a_key(char a)
{
    
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    srand(time(0));
    int number1 = rand();
    char letter1 = letters[number1];
    a = letter1;

}

int main()
{
    char check_for_privatekey;
    char private_key;
    char text_to_encrypt[20];
    printf("Enter text to encrypt: ");
    if (fgets(text_to_encrypt, 20, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    // START PROCCESS
    printf("Encrypting string...%s\n", text_to_encrypt);
    generate_a_key(private_key);
    printf("Your private key is:%c", private_key);
    // "Encrypted with private key"
    printf("")
    
    
    return 0;
}