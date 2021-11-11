#include<stdio.h>

void main(){
    int sc1,sc2,sc3=0;
    float ave=0.0;
    char gr;
    printf("Plz enter ur Score : ");
    scanf("%d%d%d",&sc1,&sc2,&sc3);
    ave=(sc1+sc2+sc3)/3.;
    printf("Score_1 Score_2 Score_3 Average Grade\n");
    if(ave>=60){
        gr='A';
    }
    if(ave<60){
        gr='B';
    }
    printf("%7d %7d %7d %7f %5c",sc1,sc2,sc3,ave,gr);
}