#include<stdio.h>
void main(){
    int a,n,b1=0,b2=0,b3=0,b4=0;
    while (1)
    {
        printf("請點餐(1)炸機<$10> (2)漢堡<$20> (3)薯條<$30> (4)熱狗<$90> (5)結束 :");
        scanf("%d",&a);
        if(a==5)
            break;
        printf("請輸入數量:");
        scanf("%d",&n);
        if(a==1)
            b1=b1+n;
        if(a==2)
            b2=b2+n;
        if(a==3)
            b3=b3+n;
        if(a==4)
            b4=b4+n;
    }
    int total=b1*10+b2*20+b3*30+b4*90;
    printf("--------------------------------------------------");
    printf("總金額為%d元\n\n",total);
    printf("炸機 : %d 個\n",b1);
    printf("漢堡 : %d 個\n",b2);
    printf("薯條 : %d 個\n",b3);
    printf("熱狗 : %d 個\n",b4);

    printf("--------------------------------------------------");

    
    
}