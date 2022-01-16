#include<stdio.h>
#include<stdlib.h>


struct student
{
    long id;
    char Name[10];
    int subject1;
    int subject2;
    int subject3;
};
void swap(struct student *s1,struct student *s2);
void printscore(struct student *sn);

int main(){
    struct student st1={107318024,"學生1",60,70,80};
    struct student st2={107318033,"學生2",90,80,70};
    printf("交換前\n");
    printscore(&st1);
    printscore(&st2);
    swap(&st1,&st2);
    printf("交換後\n");
    printscore(&st1);
    printscore(&st2);
    system("PAUSE");
    return 0;
}
void swap(struct student *s1,struct student *s2){
    struct student temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}

void printscore(struct student *sn){
    printf("%d %s\n",sn->id,sn->Name);
    printf(" 科目1成績:%d\n",sn->subject1);
    printf(" 科目2成績:%d\n",sn->subject2);
    printf(" 科目3成績:%d\n",sn->subject3);
}


