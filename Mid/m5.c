#include<stdio.h>
void main(){
    int input,guess=73,up=100,down=1;
    for(int i=1;i<=100;i++){
        printf("猜第%d次，請輸入%d~%d的數:",i,down,up);
        scanf("%d",&input);
        if(input==guess)
            break;
        
        if(input<=up&&input>guess)
            up=input-1;
        if(input>=down&&input<guess)
            down=input+1;
    }
    printf("恭喜答對!");
}