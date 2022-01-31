#include<stdio.h>

int attempt();
char Ly[7][4];

void main(){
attempt();

char Lx[7][4]={
    {'*',' ',' ',' '},
    {'*',' ',' ',' '},
    {'*',' ',' ',' '},
    {'*',' ',' ',' '},
    {'*',' ',' ',' '},
    {'*',' ',' ',' '},
    {'*','*','*','*'}};

 int mark = 0;
 int row,col;
    for( row=0;row<7;row++){

            for( col=0;col<4;col++){

                    if(Lx[row][col]==Ly[row][col]){
                        mark++;
                    }
            }
    }

    float percentage = (mark*100)/6 ;

    printf(" your mark is %.2f",percentage);

}

int row,col;
int attempt(){
for( row=0;row<7;row++){

    for(col=0;col<4;col++){
            scanf("%c", &Ly[row][col]);
            }
    }
    printf("%c", Ly[row][col]);
}
