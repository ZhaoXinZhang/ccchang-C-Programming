#include<stdio.h>
void Value(int x,int y);
void Reference(int* x,int* y);
void main(){
    int num1=0,num2=0;
    printf("Plz Enter Two Number : \n");
    printf("num1 = ");
    scanf("%d",&num1);
    printf("num2 = ");
    scanf("%d",&num2);

    printf("after swap: num1=%d,num2=%d\n",num2,num1);
    Value(num1,num2);
    printf("call by value :num1=%d,num2=%d\n\n",num1,num2);

    printf("after swap: num1=%d,num2=%d\n",num2,num1);
    Reference(&num1,&num2);
    printf("call by reference :num1=%d,num2=%d\n",num1,num2);
}

void Value(int x,int y ){
    int t=0;
    t=x;
    x=y;
    y=t;
    // printf("num1=%d,num2=%d\n",x,y);
}

void Reference(int* x,int* y ){
    int t=0;
    t=*x;
    *x=*y;
    *y=t;
}

