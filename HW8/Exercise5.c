#include<stdio.h>
void main(){
    int input1,input2,Gcd=1,Lcm;
    int i=2;
    printf("輸入兩數: ");
    scanf("%d%d",&input1,&input2);
    int a=input1,b=input2;
    //a,b皆大於等於2時，開始質因數分解 
    while( input1>=i && input2>=i ) 
    { 
        //餘數皆為0時，2開始質因數分解，若皆被2分完，則陸續增加為3、4、5…… 
        while( input1%i==0 && input2%i==0 ) 
        { 
            Gcd = Gcd * i; 
            input1 /= i; 
            input2 /= i; 
        } 
        i++; 
    } 
    // printf("%d",Gcd); 
    Lcm=(a*b)/Gcd;
    printf("Gcd:%d\nLcm:%d",Gcd,Lcm);
}