#include<stdio.h>
void main(){
    int input=0,input2=0;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int arr2[10]={11,11,11,11,11,11,11,11,11,11};
    // printf("%c",arr[0]);
    // printf("■ ■ ■ ■ ■ ■ ■ ■ ■ ■")
    while(1){
        for (int i = 0; i < 10; i++)
        {
            if(arr2[i]==11){
                printf(" ■ ");
            }
            if(arr2[i]!=11){
                printf(" %d ",arr2[i]);
            }
        }
        printf("\n(1)翻開 (2)覆蓋 (3)結束\n");
        scanf("%d",&input);
        if (input==1)
        {
            printf("請輸入欲翻開的數字 : ");
            scanf("%d",&input2);
            arr2[input2]=input2;
        }
        if (input==2)
        {
            printf("請輸入欲覆蓋的數字 : ");
            scanf("%d",&input2);
            arr2[input2]=11;
        }
        if (input==3)
        {
            break;
        }
    }
    
    
    
    
}