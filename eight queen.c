#include <stdio.h>
#include <stdlib.h>

int sum=0;

void eqproblem(int num,int board[8][8],int set[8]){
    int i,j;
    int tmp;
    if(num==8){
        for (i=0; i!=8; i++) {
            printf("%d ",set[i]);
        }
        printf("\n");
        sum++;

    }
    else{
        for (i=0; i!=8; i++) {
            
            if(board[num][i]!=0) {
                continue;
            }
            
            set[num]=i;
            
            for (j=0; j!=8; j++) {
                board[j][i]++;
            }
            for (j=0; j!=8; j++) {
                board[num][j]++;
            }
            tmp=num;
            for (j=i; j!=8; j++) {
                board[tmp][j]++;
                tmp++;
                if(tmp>7)break;
            }
            tmp=num;
            for (j=i; j!=-1; j--) {
                board[tmp][j]++;
                tmp--;
                if(tmp<0)break;
            }
            tmp=num;
            for (j=i; j!=-1; j++) {
                board[tmp][j]++;
                tmp--;
                if(tmp<0)break;
            }
            tmp=num;
            for (j=i; j!=-1; j--) {
                board[tmp][j]++;
                tmp++;
                if(tmp>7)break;
            }
            
            eqproblem(num+1,board,set);
            
            for (j=0; j!=8; j++) {
                board[j][i]--;
            }
            for (j=0; j!=8; j++) {
                board[num][j]--;
            }
            tmp=num;
            for (j=i; j!=8; j++) {
                board[tmp][j]--;
                tmp++;
                if(tmp>7)break;
            }
            tmp=num;
            for (j=i; j!=-1; j--) {
                board[tmp][j]--;
                tmp--;
                if(tmp<0)break;
            }
            tmp=num;
            for (j=i; j!=-1; j++) {
                board[tmp][j]--;
                tmp--;
                if(tmp<0)break;
            }
            tmp=num;
            for (j=i; j!=-1; j--) {
                board[tmp][j]--;
                tmp++;
                if(tmp>7)break;
            }
        }
    }
}

int main() {
    int board[8][8]={0};
    int set[8]={0};
    eqproblem(0,board,set);
    printf("%d",sum);
    system("pause");
    return 0;

}
