#include<stdio.h>

void main(){
    int n,k,p,c,an=1,ak=1,ank=1;
    while(n<k){
        printf("n必須大於等於k\n");
        printf("請輸入n,k:");
        scanf("%d%d",&n,&k);
    }
    for(int i=1;i<=n;i++){
        an=an*i;
    }
    for(int i=1;i<=k;i++){
        ak=ak*i;
    }
    for(int i=1;i<=(n-k);i++){
        ank=ank*i;
    }
    p=an/ank;
    c=an/(ak*ank);
    printf("P(%d,%d)=%d\nC(%d,%d)=%d",n,k,p,n,k,c);
}