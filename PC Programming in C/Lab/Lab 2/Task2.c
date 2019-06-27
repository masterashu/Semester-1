/*
        ASHUTOSH CHAUHAN
        S20180010017
*/

#include <conio.h>

int main(){
    int sumOfDigits = 0;
    char character;
    int i = 1;
    // scan the first charcter /digit
    scanf("%c", &character);
    // check if its not the end of string or not a number from 0 to 9
    while(character != '\n' && character >= '0' && character <= '9'){
        if(i % 2 == 1){
            sumOfDigits += character - 48;  // get value of number through ASCII codes
        }
        // printf("Current Sum: %d\n", sumOfDigits); // for checking each step
        i++;
        scanf("%c", &character);
    }
    printf("Sum of Odd digits is: %d", sumOfDigits);
    return 0;
}
