#include<stdio.h>
struct Data{
    int Character=0;
    int Newline=0;
    int Space=0;
}Data;
void textFile(FILE* readPtr);

int main(void){
    FILE* cfPtr;
    int Value=fopen_s(&cfPtr,"Test2.txt","r");

    if(Value!=0)
        puts("File coule not be oppened. ");
    else
    {
        while (!feof(cfPtr))
        {
            char Ch;
            fscanf(cfPtr,"%c",&Ch);
            if (Ch==' ')
                Data.Space++;
            else if(Ch =='\n')
                Data.Newline++;
            else
                Data.Character++;
        }
        textFile(cfPtr);
    }
    fclose(cfPtr);
    printf("存取成功。\n");
}

void textFile(FILE* readPtr){
    FILE* writePtr;
    int Value=fopen_s(&writePtr,"Result.txt","w");

    if(Value!=0)
        puts("File coule not be oppened. ");
    else{
        fseek(readPtr,0,SEEK_SET);
        fprintf(writePtr,"%10s%10s%10s\n","Character","Newline","Space");
        fprintf(writePtr,"%10d%10d%10d\n",Data.Character,Data.Newline,Data.Space);

    }
}