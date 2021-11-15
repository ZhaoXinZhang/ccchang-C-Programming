#include<stdio.h>
int main(){
    char table[17]="0123456789ABCDEF";
    int a,b;
    char s[33];
    printf("請輸入轉換前進制:");
    scanf("%d",&a);
    printf("請輸數字:");
    scanf("%s",s,sizeof(s));
    printf("請輸入轉換後進制:");
    scanf("%d",&b);
    int num=0;
    for(int i =0 ;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
            num=num*a+s[i]-'0';
        }else{
            num=num*a+s[i]-'A'+10;
        }
    }
    int digit[32],cnt=0;
    do{
        digit[cnt++]=num%b;
        printf("%d/%d  %d\n",num,b,num%b);
        num=num/b;
        
    }
    while (num!=0);
    for(int i=cnt-1;i>=0;i--){
        printf("%c",table[digit[i]]);
    }
    printf("\n");
    
}