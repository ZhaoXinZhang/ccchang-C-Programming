#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    
    int sum=0;
    int sum2=0;
    srand(time(NULL));
    sum=rollDice();
    if(sum==7 || sum==11){
        printf("Player wins");
    }
    else if(sum==2 || sum==3 || sum==12){
        printf("Player loses");
    }
    else {
        printf("Point is %d\n",sum);
        for(int i=0;i<1000;i++){
            sum2=rollDice();
            if(sum2==sum){
                printf("Player wins");
                break;
            }
            if(sum2==7){
                printf("Player lose");
                break;
            } 
        }
        
    }
    
}

int rollDice(void){
    int die1= (rand()%6)+1;
    int die2= (rand()%6)+1;
    printf("Play rolled %d + %d = %d \n",die1,die2,die1+die2);
    return (die1+die2);
}