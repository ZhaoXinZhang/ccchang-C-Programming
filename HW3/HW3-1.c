#include<stdio.h>
void main(){
    int order1,order1_num=0;
    int chicken=0,ham=0,fried=0,hotdog=0;
    for(int i=0 ;i<1000;i++){
        printf("請點餐  (1)炸機<$10> (2)漢堡<$20> (3)薯條<$30> (4)熱狗<$90> (5)結束 :");
        scanf("%d",&order1);
        if(order1>5){
            printf("輸入錯誤數字\n");
            break;
        }
        if(order1==5){
            break;
        }
        printf("請輸入數量 : ");
        scanf("%d",&order1_num);
        if(order1==1){
            chicken=chicken+order1_num;
        }
        if(order1==2){
            ham=ham+order1_num;
        }
        if(order1==3){
            fried=fried+order1_num;
        }
        if(order1==4){
            hotdog=hotdog+order1_num;
        }
    }
    printf("炸機 : %d 個\n",chicken);
    printf("漢堡 : %d 個\n",ham);
    printf("薯條 : %d 個\n",fried);
    printf("熱狗 : %d 個\n",hotdog);
    printf("總金額 :%d 元",(chicken*10+ham*20+fried*30+hotdog*90));
}