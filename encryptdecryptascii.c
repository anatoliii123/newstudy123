#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char private_key[20] = {"key"};
    char check_for_privatekey[20];
    char text_to_encrypt[20];
    printf("Enter text to encrypt: ");
    if (fgets(text_to_encrypt, 20, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    // START PROCCESS
    printf("Encrypting string->%s\n", text_to_encrypt);
    puts("This is where private_key is assigned");
    printf("Your private key is:%s\n", private_key);
    // "Encrypted with private key"
    printf("Enter private key: ");
     if (fgets(check_for_privatekey,20,stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    if (strcmp(private_key, check_for_privatekey) == 0)
    {
        printf("String decrypted\n %c", private_key);
    }
    else
    {
        printf("Invalid key");
    }
    
    
    return 0;
}
