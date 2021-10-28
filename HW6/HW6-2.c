#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define face 6
void main(){
    int frequency[face]={};
    int num=0;
    int times=0;
    srand(time(NULL));
    printf("Please enter how many times do you want to roll: ");
    scanf("%d",&times);
    for(int i =1 ;i <=times ; i++){
        num=rollDice();
        switch (num)
        {
        case 1:
            frequency[0]++;
            break;
        case 2:
            frequency[1]++;
            break;
        case 3:
            frequency[2]++;
            break;
        case 4:
            frequency[3]++;
            break;
        case 5:
            frequency[4]++;
            break;
        case 6:
            frequency[5]++;
            break;
        default:
            break;
        }
    }
    int length = sizeof(frequency)/sizeof(frequency[0]);
    printf("Face    Frequency\n");
    for(int j=0 ; j<length ;j++){
        printf("  %d        %d\n",j+1,frequency[j]);
    }
    
}
int rollDice(void){
    int die1= (rand()%6)+1;
    return (die1);
}