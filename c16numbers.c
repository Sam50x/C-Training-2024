#include <stdio.h>

int main (void){

    int x;
    printf("Enter a number from 1 to 9: ");
    scanf("\n%d", &x);

    switch (x)
    {
    case 1:
        printf("one\n");
        break;

    case 2:
        printf("two\n");
        break;

    case 3:
        printf("three\n");
        break;

    case 4:
        printf("four\n");
        break;

    case 5:
        printf("five\n");
        break;

    case 6:
        printf("six\n");
        break;

    case 7:
        printf("seven\n");
        break;

    case 8:
        printf("eight\n");
        break;

    case 9:
        printf("nine\n");
        break;
    
    default:
        break;

    } if (x > 9){
        printf("greater than 9, nigga\n");
    } else if (x < 1) {
        printf("lower than 1, nigga\n");
    }
}