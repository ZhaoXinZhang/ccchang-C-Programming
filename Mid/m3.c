#include<stdio.h>
void main(){
    int n;
    while (n%2==0)
    {
        printf("plz enter an odd integer:");
        scanf("%d",&n);
    }
    
    
    for(int i=0;i<=n/2;i++){
        Space(n/2-i);
        List(2*i+1);
    }

    for(int i=1;i<=n/2;i++){
        Space(i);
        List(n-2*i);
    }
}

void List(int l){
    for(int i=1;i<=l;i++){
        printf("*");
    }
    printf("\n");
}

void Space(int l){
    for(int i=1;i<=l;i++){
        printf(" ");
    }
}
