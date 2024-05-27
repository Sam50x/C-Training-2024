#include <stdio.h>

int main (void){
    int x;
    float temp;
    float conv;

    printf("Welcome to the temperature converter\nPress 1 to convert Celsius to Fahrenheit\nPress 2 to convert Fahrenheit to Celsius\nChoose the option u want : ");
    scanf("%d",&x);

    if (x == 1){
        printf("Enter da temperature in Celsius : ");
        scanf("%f",&temp);
        conv = (temp * 9/5)+ 32;
        printf("%.2f in Celsius = %.2f in Fahrenheit\n", temp, conv);

    } else if (x == 2){
        printf("Enter da temperature in Fahrenheit : ");
        scanf("%f", &temp);
        conv = ( temp - 32) * 5/9;
        printf("%.2f in Fahrenheit = %.2f in Celsius\n", temp, conv);

    } else {
        printf("Invalid");
    }
}