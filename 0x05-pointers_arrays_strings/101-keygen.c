#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * PasswordGeneration : generates a password
 * @n: parameter
 * Returns: void
 */

void PasswordGeneration(int n)
{
    int i = 0;
    
  
    char numbers[] = "0123456789";
    
    char capitalLetters[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    
    char smallLetters[] = "abcdefghijklmnoqprstuvwyzx";
  
    char symbols[] = "!@#$^&*?";
  
 
    char password[n];
    int randomChar = 0;

    srand((unsigned int)(time(NULL))); 
    
    randomChar = rand() % 4;
  
    for (i = 0; i < n; i++) {
  
        if (randomChar == 1) {
            password[i] = numbers[rand() % 10];
            randomChar = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomChar == 2) {
            password[i] = symbols[rand() % 8];
            randomChar = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomChar == 3) {
            password[i] = capitalLetters[rand() % 26];
            randomChar = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = smallLetters[rand() % 26];
            randomChar = rand() % 4;
            printf("%c", password[i]);
        }
    }
}

int main()
{
    
    int n = 8;
  
    
    PasswordGeneration(n);
  
    return 0;
}

