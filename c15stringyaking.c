#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

    char ch;
    char s[100];
    char sen[100];

    printf("Enter a char : ");
    scanf("%c", &ch);
    printf("Enter a string : ");
    scanf("%s", &s);
    printf("Enter a sentence : ");
    scanf("\n%[^\n]%*c", &sen);

    printf("char is : %c\nstring is : %s\nsentence is : %s",ch, s, sen);
}