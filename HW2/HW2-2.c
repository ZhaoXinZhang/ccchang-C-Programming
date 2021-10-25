#include<stdio.h>

int main(void){
    int input,tt;
    printf("請輸入數字:");
    scanf("%d", &input);
    for(int i=0;i<=input;i++){
        if(i%2==1){
            tt=tt+i;
        }
    }
    printf("奇數總和為:%d",tt);
}