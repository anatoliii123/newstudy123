#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char *randstring(size_t length) {
    time_t t;
    srand((unsigned) time(&t));
    static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";        
    char *randomString = NULL;

    if (length) {
        randomString = malloc(sizeof(char) * (length +1));

        if (randomString) {            
            for (int n = 0;n < length;n++) {            
                int key = rand() % (int)(sizeof(charset) -1);
                randomString[n] = charset[key];
            }

            randomString[length] = '\0';
        }
    }

    return randomString;
}

int main()
{
    int tempint = 10;
    char *newchar = randstring(tempint);
    char check_for_privatekey[11];
    char *text_to_encrypt[20];
    printf("Enter text to encrypt: ");
    if (fgets(text_to_encrypt, 20, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    // START PROCCESS
    printf("Encrypting string->%s\n", text_to_encrypt);
    puts("This is where private_key is assigned");
    printf("Your private key is:%s\n", newchar);
    // "Encrypted with private key"

    while(1)
    {
    printf("Enter private key: \n");
     if (fgets(check_for_privatekey, 20, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    if (strncmp(check_for_privatekey, newchar, 10) == 0)
    {
        printf("String decrypted\n ##%s\n", text_to_encrypt);
    }
    else
    {
        printf("Invalid key\n");
    }
    
    
    }
    
    return 0;
}
