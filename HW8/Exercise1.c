#include <stdio.h>

int main() {
    int input, rev = 0, remainder;
    printf("plz enter number:");
    scanf("%d",&input);
    while (input != 0) {
        remainder = input % 10;
        rev = rev * 10 + remainder;
        input /= 10;
    }
    printf("The opposite number is :%d", rev);
    return 0;
}
