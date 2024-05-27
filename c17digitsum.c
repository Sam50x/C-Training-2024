#include <stdio.h>

int main(void){
    int x, digit;
    int sum = 0;
    printf("Enter a number that includes some digits, big time: ");
    scanf("\n%d", &x);
    while(x !=0){
        digit = x % 10;
        sum = sum + digit;
        x /= 10;
    } 
    printf("The sum of the digits is: %d\n", sum);
}