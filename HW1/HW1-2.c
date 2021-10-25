#include <stdio.h>

int main(void) {
    int input1;
    int input2;
    int result;

    printf("輸入第一個大於0的整數：");
    scanf("%d", &input1);
    printf("\n輸入第二個大於0的整數：");
    scanf("%d", &input2);
    
    result=input1+input2;
    printf("\n%d+%d=%d\n",input1,input2,result);

    if(result%2==0){
        printf("%d是2的倍數\n",result);
    }
    if(result%3==0){
        printf("\n%d是3的倍數\n",result);
    }
    if(result%5==0){
        printf("\n%d是5的倍數\n",result);
    }
    if(result%2!=0 && result%3!=0 && result%5!=0){
        printf("\n%d不是2、3、5的倍數\n",result);
    }
    return 0;
}