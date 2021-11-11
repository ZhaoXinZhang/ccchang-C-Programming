#include<stdio.h>
int main(){
    int n=0,b=0;
    printf("列印出n*n的西洋棋盤:n=");
    scanf("%d",&n);
    b=n*n;
    if(n%2==1){
        for(int k=1;k<=b;k++){
            if(k%2==0){
                printf("▉▉  ");                
            }
            if(k%2==1){
                printf("  ▉▉");
            }
            if(k%n==0){
                printf("\n");
            }
        }
    }
    if(n%2==0){
        for(int k=1;k<=n/2;k++){
        for(int i=1;i<=n/2;i++){
            printf("▉▉  ");                
        }
        printf("\n");
        for (int j = 1; j <= n/2; j++)
        {
            printf("  ▉▉");
        }
        printf("\n");
    }
    }
    

}

