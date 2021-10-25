#include<stdio.h>

int main(void){
    int a,b,c;
    int temp;
    printf("請輸入三個數字\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    int input[3]={a,b,c};

    for(int i = 0; i < 3; i++) {
        for(int j = i; j < 3; j++) {
            if( input[j] > input[i] ) {
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++ ) {
        if(i==0){
            printf("a=%d ", input[i]);
        }
        if(i==1){
            printf("b=%d ", input[i]);
        }
        if(i==2){
            printf("c=%d ", input[i]);
        }
    }
}