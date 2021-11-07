#include<stdio.h>
#include<stdlib.h>


int main(){
    int a = 0;
    int b = 0;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}
void swap(int* x,int* y){
    int temp = *x ; 
    *x = *y;
    *y = temp;
}