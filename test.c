#include <stdio.h>

int main() {

    int a=123;
    int *b=&a;
    int *c;
    int d=456;
    *b=10;
    c=&d;
    c=b;
    // printf("%d %d %d %d\n",&a,a,b,*b);
    // printf("%d %d",*b,*c);
    printf("%d",a);
return 0;
}  