#include<stdio.h>
#define SIZE 20

size_t linearSearch(const int array[],int key ,int i);

int main(void){
    int Solution[SIZE] = { 1,2,3,3,4,2,3,1,2,3,4,4,2,1,1,3,3,1,2,3 };
    int a[SIZE]={};
    int c=0,f=0;
    for(int i=0;i<SIZE;i++){
        printf("Enter enter answer(1~4): ");
        int ans;
        scanf("%d",&ans);
        a[i]=ans;
        size_t index = linearSearch(Solution,ans,i);
        if (index != -1){
            c++;
        }
        else{
            f++;
        }
        // puts("Value not found ");
    }
    printf("\nSolution: ");
    for(int i=0;i<SIZE;i++){
        printf("%d ",Solution[i]);
    }
    printf("\nAns:      ");
    for(int i=0;i<SIZE;i++){
        printf("%d ",a[i]);
    }
    printf("\nCorrect: %d\n",c);
    printf("False: %d\n",f);

}

size_t linearSearch(const int array[],int key ,int i){
    
        if (array[i]==key)
        {
            return i;
        }
        
    
    return -1;
}
