/*header files */
#include <stdio.h>

int i;
/* INPUT a STRING and save it in a VARIABLE */
int main() {                                                                                                                                                                            
  char stringinput[]; 
  printf("Enter a input: ");                                                                                                                                                                
  scanf("%s", stringinput);   
  fflush(stdout);
  int repeatingkey[];
  printf("Enter a XOR value: ");                                                                                                                                                                
  scanf("%d", repeatingkey);   
  fflush(stdout);
/* XOR  every byte of INPUTTED STRING VARIABLE */
char output;
  for (i=0; i<strlen(stringinput); i++)
  {
    char temp = repeatingkey[i] ^ stringinput[i];
    output[i] = temp;
  }


/* print the XORRED INPUTTED STRING VARIABLE */
 output[i] = '\0';
  printf("%s", output);


/*give user an option D/E(Decrypt existing/Encrypt a new)



/*if Encrypt a new make a new variable and take a new input and perform line 3 to 7 again*/



/*if Decrypt existing use the repeating key 11110011 to decrypt*/



/*print out DECRYPTED INPUTTED VARIABLE*/
return 0;
}