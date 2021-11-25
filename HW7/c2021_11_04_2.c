

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void greater(int[]);
int x;
int cont = 0;

int main()
{
    int mat[SIZE] = {};
    int rank[SIZE] = {};

    for (int c = 1; c <= SIZE; c++)
    {
        printf("number: %d:", c);
        scanf("%d", &mat[c-1]);
    }

    printf("\n");

    for (int c = 0; c < SIZE; c++){
        printf("number : %d\t", mat[c]);
    }


    int matCopy[SIZE];

    for (int i = 0; i < SIZE; i++){
        matCopy[i] = mat[i];
    }

    for (int c = 0; c < SIZE; c++)
    {
        greater(matCopy);
        rank[x] = c + 1;
    }

    printf("\n");
    for (int c = 0; c < SIZE; c++){
        printf("rank : %d\t", rank[c]);
    }

    return 0;
}


void greater(int v[])
{
    int greater = -9999;

    for (int c = 0; c < SIZE; c++)
    {
        if (v[c] > greater)
        {
            greater = v[c];
            x = c;
        }

    }
    v[x] = 0;
}