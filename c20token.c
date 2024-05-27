#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",&string);
    char *token = strtok(string," ");
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL," ");
    }
}