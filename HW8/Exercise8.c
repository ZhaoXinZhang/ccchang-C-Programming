#include<stdio.h>
void main(){
    int n,k,p,c=1;
    int temp1=1,temp2=1,temp3=1;
    while(1){
        printf("請輸入n,k:");
        scanf("%d%d",&n,&k);
        if(n<k){
        printf("n必須大於等於k，請重新輸入。");
    }
    if(n>k){
        for(int i=1;i<=n;i++){
            temp1=temp1*i;
        }
        for(int i=1;i<=(n-k);i++){
            temp2=temp2*i;
        }
        for(int i=1;i<=k;i++){
            temp3=temp3*i;
        }
        p=temp1/temp2;
        c=temp1/(temp2*temp3);
        printf("P(%d,%d)=%d\n",n,k,p);
        printf("C(%d,%d)=%d\n",n,k,c);
        break;
    }
    }
    

}