#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++) {               //i for da rows
        for(int j=0;j<len;j++) {           //j for da columns
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;//ternary operation takes da first if true, da second if false 
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
