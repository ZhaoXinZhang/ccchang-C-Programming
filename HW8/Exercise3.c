#include<stdio.h>

void main(){
    int number=0;
    while (1)
    {
        printf("plz enter an odd integer : ");
        scanf("%d",&number);
        if (number%2==0)
        {
            printf("%d is not an odd integer! \n",number);
        }
        if(number%2!=0){
            for (int i = 0; i <= number/2; i++)
            {
                Space(number/2-i);
                List(i*2+1);
            }
            for (int j = 1; j <= number/2; j++)
            {
                Space(j);
                List(number-j*2);
            }
            break;
        }
    }
    
   
    
    
}

void Space(int count){
    for(int i=1;i<=count;i++){
        printf(" ");
    }
    
}

void List(int count){
    for(int i=1;i<=count;i++){
            printf("*");
    }
    printf("\n");

}