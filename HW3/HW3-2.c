#include<stdio.h>

int main(){
    int input=0;
    printf("輸入一個數字: ");
    scanf("%d",&input);
    if(input==1 || input==2){
        printf("1");
    }
    int nm[1000]={1,1};
    if(input>=3)
    {
        printf("%d\n",nm[0]);
        printf("%d\n",nm[1]);
    }
    for(int i = 2 ; i < input ; i++)
    {
        nm[i]=nm[i-1]+nm[i-2];
        printf("%d\n",nm[i]);
    }
    return 0;
}


