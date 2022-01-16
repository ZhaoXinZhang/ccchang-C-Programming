#include<stdio.h>
#include<stdlib.h>
struct Check{
    int odd ;
    struct Check *next;
};
typedef struct Check *check;

int DisplayBits(check *sPtr,unsigned int value);
int isEmpty(check sPtr);
void insert(check *sPtr,int Value);
void printList(check currentPtr,int Value);

int main(void){
    check Odd=NULL;
    int Value=0;
    printf("Plz enter a number(0~127):");
    scanf("%d",&Value);
    puts("");

    int Judge=DisplayBits(&Odd,Value);
    printList(Odd,Value);
    
    if(Judge%2!=0)
        insert(&Odd,0);
    else
        insert(&Odd,1);
    printList(Odd,Value);
}
void insert(check *sPtr,int Value){
    check newOdd=(check)malloc(sizeof(check));

    if(newOdd!=NULL){
        newOdd->odd=Value;
        newOdd->next=NULL;
        
        check previousPtr=NULL;
        check currentPtr=*sPtr;

        while(currentPtr!=NULL){
            previousPtr=currentPtr;
            currentPtr=currentPtr->next;
        }
        if (previousPtr==NULL)
        {
            newOdd->next=*sPtr;
            *sPtr=newOdd;
        }else{
            previousPtr->next=newOdd;
            newOdd->next=currentPtr;
        }
    }
    else{
        printf("Value not inserted. No memory avaiable.\n");
    }
}

void printList(check currentPtr,int Value){
    int count=0;

    if(isEmpty(currentPtr)){
        puts("List is empty\n");
    }
    else{
        while (currentPtr!=NULL)
        {
            printf("%d-->",currentPtr->odd);
            currentPtr=currentPtr->next;
        }
        puts("NULL\n");
    }
}

int DisplayBits(check *sPtr,unsigned int Value){
    int displayMask=1<<7,count=0,res=0;

    for(unsigned int i=0;i<8;i++){
        if(Value & displayMask){
            count++;
            res=1;
        }else{
            count+=0;
            res=0;
        }
        insert(sPtr,res);
        Value<<=1;
    }
    return count;
}
int isEmpty(check sPtr){
    return sPtr==NULL;
}