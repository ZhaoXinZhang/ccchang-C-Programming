#include<stdio.h>
#include <stdlib.h> 
#include<math.h>

void textFile(FILE* readPtr);


int main(){
    char name[100];
    char t[100];
    int score[100][100],temp[100][100];
    float tavg[100],avg[100],aa,ba,ca,da,am,bm,cm,dm,aaa=0,bba=0,cca=0,dda=0;
    int a[100],b[100],c[100],d[100],total[100];
    FILE *fp;
    int ch;
    
    if((fp=fopen("Book1.txt","r"))==NULL){
        printf("open file error!!\n");
        system("PAUSE");
        exit(0);
    }    
    for(int i=0;i<20;i++){
        fscanf(fp, "%c %d %d %d %d\n",&name[i], &score[i][0], &score[i][1], &score[i][2],&score[i][3]); 
        score[i][4]=score[i][0]+score[i][1]+score[i][2]+score[i][3];
        avg[i]=score[i][4]/4.;    
    }
    for(int i=0;i<20;i++){
        
        aa+=score[i][0];
        ba+=score[i][1];
        ca+=score[i][2];
        da+=score[i][3];
        aaa=aaa+score[i][0]*score[i][0];
        bba=bba+score[i][1]*score[i][1];
        cca=cca+score[i][2]*score[i][2];
        dda=dda+score[i][3]*score[i][3];
    }

    // printf("%d,%d\n\n\n",score[0][4],score[1][4]);
    for(int i=0 ;i<20;i++){
        for(int j=0 ;j<i;j++){
            if(score[j][4]<score[i][4]){
                for(int k=0;k<5;k++){
                    temp[i][k]=score[j][k];
                    score[j][k]=score[i][k];
                    score[i][k]=temp[i][k];
                }
                t[i]=name[j];
                name[j]=name[i];
                name[i]=t[i];

                tavg[i]=avg[i];
                avg[i]=avg[j];
                avg[j]=tavg[i];
            }
                // printf("i=%d,j=%d\n",i,j);
        }
    }

    aa=aa/20;
    ba=ba/20;
    ca=ca/20;
    da=da/20;
    aaa=sqrt(abs((aa*aa)-(aaa/20)));
    bba=sqrt(abs((ba*ba)-(bba/20)));
    cca=sqrt(abs((ca*ca)-(cca/20)));
    dda=sqrt(abs((da*da)-(dda/20)));

    printf("%s%10s%10s%10s%10s%10s%10s%10s\n","名次","姓名","分數1","分數2","分數3","分數4","總分","平均");

    for(int i=0;i<20;i++){
        printf("%2d %8c %7d %7d %7d %7d %7d %12f \n",i+1,name[i],score[i][0],score[i][1],score[i][2],score[i][3],score[i][4],avg[i]);
    }
    printf("\n平均   %f   %f  %f  %f\n",aa,ba,ca,da);
    printf("均方差  %f    %f   %f   %f",aaa,bba,cca,dda);


    fclose(fp);

    FILE* writePtr;
    int Value=fopen_s(&writePtr,"grade.txt","w");
    if(Value!=0)
        puts("File coule not be oppened. ");
    else{
        fprintf(writePtr,"%s%10s%10s%10s%10s%10s%10s%10s\n","名次","姓名","分數1","分數2","分數3","分數4","總分","平均");
        
        for(int i=0;i<20;i++){
            fprintf(writePtr,"%c %10d %10d %d %d %d %f \n",name[i],score[i][0],score[i][1],score[i][2],score[i][3],score[i][4],avg[i]);
        }
        fprintf(writePtr,"平均   %f   %f  %f  %f\n",aa,ba,ca,da);
        fprintf(writePtr,"均方差  %f    %f   %f   %f",aaa,bba,cca,dda);
        }

    fclose(writePtr);
    // system("PAUSE");
    return 0;
}
