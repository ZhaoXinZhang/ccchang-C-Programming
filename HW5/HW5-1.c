#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rd=0;
    int input=0;
    int down=1;
    int up=100;
    srand(time(NULL));
    rd=(rand()%100)+1;
    // printf("The Random Number is %d .\n", rd);
    for(int i=0;i<10000;i++){
        printf("猜第%d次,請輸入%d~%d的數: ==> ",i,down,up);
        scanf("%d",&input);
        if(input==rd){
            printf("答對囉");
            break;
        }
        else if(input!=rd){
            printf("答錯囉\n");
            if(input>rd){
                up=input;
            }
            if(input<rd){
                down=input;
            }
        }
    }
}