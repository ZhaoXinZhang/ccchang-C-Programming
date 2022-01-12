#include<stdio.h>

void displayBoard(char board[]);
bool rangeCorrect(int cell);
bool cellsEmpty(int cell,char board[]);
void changeTurn(char& turn);
bool three(char turn,char board[]);
bool threeInRow(char turn,char board[]);
bool threeInColumn(char turn,char board[]);
bool threeInDiagonal(char turn,char board[]);

struct Node
{
    int moveNumber;
    char board[9];
    Node* nextPtr;
};

void displayList(Node* head);

int main(){
    char board[9];
    for(int i=0;i<9;i++)
        board[i]=' ';

    Node* head=NULL;
    Node* tempPtr;
    
    int moveNumber=0;
    char turn='X';
    int cell=0;
    displayBoard(board);
    while(moveNumber<9){
        displayList(head);
        printf("****************************\n");
        printf("Move number: %d\n",moveNumber);
        printf("TURN: %c make your move: ",turn);
        scanf("%d",&cell);

        if(rangeCorrect(cell)){
            if(cellsEmpty(cell -1 ,board)){
                board[cell -1]=turn;
                if(three(turn,board)){
                    displayBoard(board);
                    printf("Congratulations player %c ,You win!!",turn);
                    scanf("%d");
                    return 1;
                }

                tempPtr=new Node;

                tempPtr->moveNumber=moveNumber;
                for(int i=0;i<9;i++)
                    tempPtr->board[i]=board[i];
                tempPtr->nextPtr=head;
                head=tempPtr;
                moveNumber++;
                changeTurn(turn);

            }
            else{
                printf("Sorry...cell %d has already been used,try again: ",cell);
            }
        }
        else{
            printf("Sorry...cell %d is outside the range 1-9,try again: ",cell);
        }
    }
    printf("Game Ended: No Winners");
    scanf("%d",&cell);
    return 1;
}
void displayList(Node* head){
    Node * tempPtr=head;
    printf("\n List contains: \n");
    while(tempPtr!=NULL){
        displayBoard(tempPtr->board);
        printf("Move Number: %d\n",tempPtr->moveNumber);
        tempPtr=tempPtr->nextPtr;
    }
    printf("\n\n");
}

void displayBoard(char board[]){
    printf("   ___   ___   ___\n");
    printf(" |  %c | | %c | | %c |\n",board[0],board[1],board[2]);
    printf("   ___   ___   ___\n");
    printf(" |  %c | | %c | | %c |\n",board[3],board[4],board[5]);
    printf("   ___   ___   ___\n");
    printf(" |  %c | | %c | | %c |\n",board[6],board[7],board[8]);
    printf("   ___   ___   ___\n");
}
bool rangeCorrect(int cell){
    if(cell>=1&&cell<=9)
        return true;
    else
        return false;
}

bool cellsEmpty(int cell,char board[]){
    if(board[cell]!=' ')
        return false;
    else
        return true;
}

void changeTurn(char& turn){
    if (turn=='X')
        turn='0';
    else
        turn='X';
}

bool three(char turn,char board[]){
    if(threeInRow(turn,board)||threeInColumn(turn,board)||threeInDiagonal(turn,board))
        return true;
    else
        return false;
}

bool threeInRow(char turn,char board[]){
    if( (board[0]==turn&&board[1]==turn&&board[2]==turn)||
        (board[3]==turn&&board[4]==turn&&board[5]==turn)||
        (board[6]==turn&&board[7]==turn&&board[8]==turn))
        return true;
    else
        return false;
}
bool threeInColumn(char turn,char board[]){
    if( (board[0]==turn&&board[3]==turn&&board[6]==turn)||
        (board[1]==turn&&board[4]==turn&&board[7]==turn)||
        (board[2]==turn&&board[5]==turn&&board[8]==turn))
        return true;
    else
        return false;
}
bool threeInDiagonal(char turn,char board[]){
    if( (board[0]==turn&&board[4]==turn&&board[8]==turn)||
        (board[2]==turn&&board[4]==turn&&board[6]==turn))
        return true;
    else
        return false;
}



