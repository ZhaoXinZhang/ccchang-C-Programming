#include<stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
void main(){
    int frequency[FREQUENCY_SIZE];
    int responses[RESPONSES_SIZE];
    int input=0;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
    for(int i=1; i<=10 ; i++){
    printf("Please enter response %d \n",i);
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        a1=a1+1;
        break;
    case 2:
        a2=a2+1;
        break;
    case 3:
        a3=a3+1;
        break;
    case 4:
        a4=a4+1;
        break;
    case 5:
        a5=a5+1;
        break;
    case 6:
        a6=a6+1;
        break;
    case 7:
        a7=a7+1;
        break;
    case 8:
        a8=a8+1;
        break;
    case 9:
        a9=a9+1;
        break;
    case 10:
        a10=a10+1;
        break;
    default:
        i=i-1;
        break;
    }
    }
    printf("Rating    Frequency\n");
    printf("  1         %d\n",a1);
    printf("  2         %d\n",a2);
    printf("  3         %d\n",a3);
    printf("  4         %d\n",a4);
    printf("  5         %d\n",a5);
    printf("  6         %d\n",a6);
    printf("  7         %d\n",a7);
    printf("  8         %d\n",a8);
    printf("  9         %d\n",a9);
    printf(" 10         %d\n",a10);
    
}