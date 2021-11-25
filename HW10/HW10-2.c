#include<stdio.h>
#include<time.h>
void mode(unsigned int freq[],const unsigned int answer[],int n);
void main(){
    srand(time(NULL));
    printf("Plz enter how many times do u want to roll: ");
    int t=0;
    scanf("%d",&t);
    int face[9999]={};
    unsigned int frequency[6]={};
    for(int i=0 ;i<t;i++){
        face[i]=1+rand()%6;
    }

    for(int i=0;i<t;i++)
        printf("%d ",face[i]);    
    printf("\n");
    mode(frequency,face,t);
}
void mode(unsigned int freq[],const unsigned int answer[],int n){
    printf("********\n");
    printf("Mode\n");
    printf("********\n");
    for(size_t rating =1;rating<=6;++rating)
        freq[rating]=0;
    for(size_t j=0;j<n;++j)
        {
            ++freq[answer[j]];
        }
    // printf("%s%11s%20s\n\n%55s\n%56s\n\n",
    //        "Response", " Frequency","Histogram",
    //        "1    1    2    2", "5   0    5    0   5");
    printf("Response     Frequency       Histogram\n");
    printf("                                     1    1    2    2\n");
    printf("                                5    0    5    0    5\n");
    unsigned int largest=0;
    unsigned int modeValue=0;
    for(size_t rating =1;rating<=6;++rating){
        printf("%8u%11u         ",rating,freq[rating]);
        if (freq[rating]>largest)
        {
            largest=freq[rating];
            modeValue=rating;
        }

        for(unsigned int h=1;h<=freq[rating];++h){
            printf("%s","*");
        }

        puts("");
    }
    printf("\nThe mode is the most frequent value.\n"
           "For this run the mode is %u which occurred"
           " %u times.\n",modeValue,largest);
}