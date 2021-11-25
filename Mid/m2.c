#include<stdio.h>
void main(){
    int a,b,c,temp1,temp2,temp3;
    printf("請輸入三個數字\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    printf("排序前數字:a=%d b=%d,c=%d\n",a,b,c);
    
    if(a>b&&a>c){
        temp1=a;
    }
    if(b>a&&b>c){
        temp1=b;
    }
    if(c>a&&c>b){
        temp1=c;
    }
//---
    if(b>a&&b<c){
        temp2=b;
    }
    if(b>c&&b<a){
        temp2=b;
    }
    if(a<b&&a>c){
        temp2=a;
    }
    if(a<c&&a>b){
        temp2=a;
    }
    if(c<a&&c>b){
        temp2=c;
    }
    if(c<b&&c>a){
        temp2=c;
    }
//---
    if(a<b&&a<c){
        temp3=a;
    }
    if(b<a&&b<c){
        temp3=b;
    }
    if(c<a&&c<b){
        temp3=c;
    }
    printf("排序後數字:a=%d b=%d,c=%d",temp1,temp2,temp3);


}