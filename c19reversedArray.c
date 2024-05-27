#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Enter the size u want: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the ints with a space after each one: ");

    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("ur array is: ");
    for (int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }

    int x;
    for (int i = 0; i < n / 2; i++){
        x = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = x;
    }

    printf("\nthe reversed array is: ");
    for (int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }

}