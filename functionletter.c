#include<stdio.h>
#include<time.h>
int i,j,k;
int finalscore;
time_t starttime,endtime,timetaken=0;

void enterT(char t[7][5]){
   printf(" _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[0][0],t[0][1],t[0][2],t[0][3],t[0][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[1][0],t[1][1],t[1][2],t[1][3],t[1][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[2][0],t[2][1],t[2][2],t[2][3],t[2][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[3][0],t[3][1],t[3][2],t[3][3],t[3][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[4][0],t[4][1],t[4][2],t[4][3],t[4][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[5][0],t[5][1],t[5][2],t[5][3],t[5][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",t[6][0],t[6][1],t[6][2],t[6][3],t[6][4]);
   printf("|_____|_____|_____|_____|_____|\n");
}
void enterV(char v[4][7]){
 printf(" _____ _____ _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",v[0][0],v[0][1],v[0][2],v[0][3],v[0][4],v[0][5],v[0][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",v[1][0],v[1][1],v[1][2],v[1][3],v[1][4],v[1][5],v[1][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",v[2][0],v[2][1],v[2][2],v[2][3],v[2][4],v[2][5],v[2][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",v[3][0],v[3][1],v[3][2],v[3][3],v[3][4],v[3][5],v[3][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");

}
void enterW(char w[3][7]){
   printf(" _____ _____ _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",w[0][0],w[0][1],w[0][2],w[0][3],w[0][4],w[0][5],w[0][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",w[1][0],w[1][1],w[1][2],w[1][3],w[1][4],w[1][5],w[1][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",w[2][0],w[2][1],w[2][2],w[2][3],w[2][4],w[2][5],w[2][6]);
   printf("|_____|_____|_____|_____|_____|_____|_____|\n");
}

void enterX(char x[5][5]){
   printf(" _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",x[0][0],x[0][1],x[0][2],x[0][3],x[0][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",x[1][0],x[1][1],x[1][2],x[1][3],x[1][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",x[2][0],x[2][1],x[2][2],x[2][3],x[2][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",x[3][0],x[3][1],x[3][2],x[3][3],x[3][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",x[4][0],x[4][1],x[4][2],x[4][3],x[4][4]);
   printf("|_____|_____|_____|_____|_____|\n");
}
void enterY(char y[7][5]){
   printf(" _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[0][0],y[0][1],y[0][2],y[0][3],y[0][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[1][0],y[1][1],y[1][2],y[1][3],y[1][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[2][0],y[2][1],y[2][2],y[2][3],y[2][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[3][0],y[3][1],y[3][2],y[3][3],y[3][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[4][0],y[4][1],y[4][2],y[4][3],y[4][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[5][0],y[5][1],y[5][2],y[5][3],y[5][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",y[6][0],y[6][1],y[6][2],y[6][3],y[6][4]);
   printf("|_____|_____|_____|_____|_____|\n");
}

void enterZ(char z[5][5]){
   printf(" _____ _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",z[0][0],z[0][1],z[0][2],z[0][3],z[0][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",z[1][0],z[1][1],z[1][2],z[1][3],z[1][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",z[2][0],z[2][1],z[2][2],z[2][3],z[2][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",z[3][0],z[3][1],z[3][2],z[3][3],z[3][4]);
   printf("|_____|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |  %c  |\n",z[4][0],z[4][1],z[4][2],z[4][3],z[4][4]);
   printf("|_____|_____|_____|_____|_____|\n");
}

void enter( char k[7][4])
{






   printf(" _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[0][0],k[0][1],k[0][2],k[0][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[1][0],k[1][1],k[1][2],k[1][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[2][0],k[2][1],k[2][2],k[2][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[3][0],k[3][1],k[3][2],k[3][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[4][0],k[4][1],k[4][2],k[4][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[5][0],k[5][1],k[5][2],k[5][3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",k[6][0],k[6][1],k[6][2],k[6][3]);
   printf("|_____|_____|_____|_____|\n");

}



void N(){
	char N[7][4]={
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*','*',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ','*','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
			};

			 char m[7][4]={
   	    {'1','0','0','1' },
		{'1','0','0','1' },
		{'1','1','0','1' },
		{'1','0','0','1' },
		{'1','0','1','1' },
		{'1','0','0','1' },
		{'1','0','0','1' }
    };
    char ans[7][4];

             starttime=time(NULL);
             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }

			 for( i=0;i<7;++i)
{

for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}

   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);

}
void O(){
		char N[7][4]={
		{' ','*','*',' ' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{' ','*','*',' ' },
			};

					 char m[7][4]={
   	    {'0','1','1','0' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'0','1','1','0' }
    };
    char ans[7][4];

    starttime=time(NULL);

             int i,j;


             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}
void p(){
	char N[7][4]={
		{'*','*','*',' ' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*','*','*',' ' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
			};

   char m[7][4]={
   	    {'1','1','1','0' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','1','1','0' },
		{'1','0','0','0' },
		{'1','0','0','0' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }

   for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}


   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);




}
void Q(){
	char N[7][4]={
		{' ','*','*',' ' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{' ','*','*',' ' },
		{' ',' ',' ','*' },
			};

			 char m[7][4]={
   	    {'0','1','1','0' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'0','1','1','0' },
		{'0','0','0','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);


}
void U(){
		char N[7][4]={
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{' ','*','*',' ' },
			};

					 char m[7][4]={
   	    {'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'0','1','1','0' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;


             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the score of the student is: %\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void F(){

		char N[7][4]={
		{'*','*','*','*' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{'*','*','*','*' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
			};

			 char m[7][4]={
   	    {'1','1','1','1' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','1','1','1' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;


             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;


}

}
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void B(){
	int score=0;
	int c,d;
      char B[7][4]={
		{'*','*','*',' ' },
		{'*',' ',' ','*' },
		{'*',' ','*',' ' },
		{'*','*',' ',' ' },
		{'*',' ','*',' ' },
		{'*',' ',' ','*' },
		{'*','*','*',' ' },
			};

         char m2[7][4]={
   	    {'1','1','1','0' },
		{'1','0','0','1' },
		{'1','0','1','0' },
		{'1','1','0','0' },
		{'1','0','1','0' },
		{'1','0','0','1' },
		{'1','1','1','0' }
    };
    char ans2[7][4];
    starttime=time(NULL);
             for(c=0;c<7;c++){
             	for(d=0;d<4;d++){
             		printf(" %c", B[c][d]);
				 }
				 printf("\n");
			 }
              for( c=0;c<7;++c){
              for( d=0;d<4;d++){
        printf("Enter 0 or 1 at position ans[%d][%d]:",c,d);
        scanf("%s",&ans2[c][d]);}
        }
        endtime=time(NULL);
        enter( ans2);
    for(c=0;c<7;c++){
	for(d=0;d<4;d++){
		if(ans2[c][d]==m2[c][d])
          score++ ;  }
          }
printf(" the score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void D(){
	int e,f;
	int score=0;
	char D[7][4]={
		{'*','*',' ',' ' },
		{'*',' ','*',' ' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ',' ','*' },
		{'*',' ','*',' ' },
		{'*','*',' ',' ' },
			};
			char m3[7][4]={
   	    {'1','1','0','0' },
		{'1','0','1','0' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','1','0' },
		{'1','1','0','0' }
    };
    char ans3[7][4];
    starttime=time(NULL);
             for(e=0;e<7;e++){
             	for(f=0;f<4;f++){
             		printf(" %c", D[e][f]);
				 }
				 printf("\n");
			 }
			 for( e=0;e<7;++e){
             for( f=0;f<4;f++){
        printf("Enter 0 or 1 at position ans[%d][%d]:",e,f);
        scanf("%s",&ans3[e][f]);}
        }
        endtime=time(NULL);
        enter( ans3);
        for(e=0;e<7;e++){
	for(f=0;f<4;f++){
		if(ans3[e][f]==m3[e][f])
          score++ ;  }
          }
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void E(){
	int g,h;
	int score=0;
	 char E[7][4]={
		{'*','*','*','*' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{'*','*','*','*' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{'*','*','*','*' },
			};
            char m4[7][4]={
   	    {'1','1','1','1' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','1','1','1' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','1','1','1' }
    };
    char ans4[7][4];
    starttime=time(NULL);
             for(g=0;g<7;g++){
             for(h=0;h<4;h++){
             		printf(" %c", E[g][h]);
				 }
				 printf("\n");
			 }
			 for( g=0;g<7;++g){
             for( h=0;h<4;h++){
        printf("Enter 0 or 1 at position ans[%d][%d]:",g,h);
        scanf("%s",&ans4[g][h]);}
        }
        endtime=time(NULL);
        enter( ans4);
        for(g=0;g<7;g++){
	    for(h=0;h<4;h++){
		if(ans4[g][h]==m4[g][h])
          score++ ;  }
          }
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void C(){
	int a,b;
	int score=0;
		char C[7][4]={
		{' ',' ','*','*' },
		{' ','*',' ',' ' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{' ','*',' ',' ' },
		{' ',' ','*','*' },
			};
            char m1[7][4]={
   	    {'0','0','1','1' },
		{'0','1','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'0','1','0','0' },
		{'0','0','1','1' }
    };
    char ans1[7][4];
    starttime=time(NULL);
           for(a=0;a<7;++a){
            for( b=0;b<4;b++){
            printf(" %c", C[a][b]);
				 }
				 printf("\n");
			 }
             for( a=0;a<7;++a){
             for( b=0;b<4;b++){
        printf("Enter 0 or 1 at position ans[%d][%d]:",a,b);
        scanf("%s",&ans1[a][b]);}
        }
        endtime=time(NULL);
        enter( ans1);
for(a=0;a<7;a++){
	for(b=0;b<4;b++){
		if(ans1[a][b]==m1[a][b])
          score++ ;  }
          }
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken+=(endtime-starttime);
}

void G(){
	char N[7][4]={
		{' ',' ','*','*'},

		{' ','*',' ',' '},

		{'*',' ',' ',' ' },

		{'*',' ','*','*' },

		{'*',' ',' ','*' },

		{' ','*',' ','*' },

		{' ',' ','*','*' }
			};

			 char m[7][4]={
   	    {'0','0','1','1' },
		{'0','1','0','0' },
		{'1','0','0','0' },
		{'1','0','1','1' },
		{'1','0','0','1' },
		{'0','1','0','1' },
		{'0','0','1','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
}
}
printf(" the  score of the student is: %d\n\n",score);
finalscore +=score;
timetaken +=(endtime-starttime);
		}

void H(){
	char N[7][4]={
		{'*',' ',' ','*' },

		{'*',' ',' ','*' },

		{'*',' ',' ','*' },

		{'*','*','*','*' },

		{'*',' ',' ','*' },

		{'*',' ',' ','*' },

		{'*',' ',' ','*' },
			};

			 char m[7][4]={
   	    {'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','1','1','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
					}
				}

		printf(" the  score of the student is: %d\n\n",score);
		finalscore +=score;
		timetaken+=(endtime-starttime);
}

void I(){
	char N[7][4]={
		{'*','*','*','*' },

		{' ','*','*',' ' },

		{' ','*','*',' ' },

		{' ','*','*',' ' },

		{' ','*','*',' ' },

		{' ','*','*',' ' },

		{'*','*','*','*' },
			};

			 char m[7][4]={
   	    {'1','1','1','1' },
		{'1','1','1','1' },
		{'0','1','1','0' },
		{'0','1','1','0' },
		{'0','1','1','0' },
		{'1','1','1','1' },
		{'1','1','1','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
				}
		}

	printf(" the  score of the student is: %d\n\n",score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
}

void J(){
	char N[7][4]={
		 {'*','*','*','*' },

		{' ',' ',' ','*' },

		{' ',' ',' ','*' },

		{'*',' ',' ','*' },

		{'*',' ',' ','*' },

		{'*',' ',' ','*' },

		{' ','*','*',' ' },
			};

			 char m[7][4]={
   	    {'1','1','1','1' },
		{'0','0','0','1' },
		{'0','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'1','0','0','1' },
		{'0','1','1','0' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
   endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
					}
			}
		printf(" the  score of the student is: %\n\n",score);
		finalscore +=score;
		timetaken+=(endtime-starttime);
}

void K(){
	char N[7][4]={
		{'*',' ',' ','*' },

		{'*',' ','*',' ' },

		{'*','*',' ',' ' },

		{'*','*',' ',' ' },

		{'*',' ','*',' ' },

		{'*',' ','*',' ' },

		{'*',' ',' ','*' },
			};

			 char m[7][4]={
   	    {'1','0','0','1' },
		{'1','0','1','0' },
		{'1','1','0','0' },
		{'1','1','0','0' },
		{'1','1','0','0' },
		{'1','0','1','0' },
		{'1','0','0','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
  endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
				}
		}
	printf(" the  score of the student is: %d\n\n",score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
}

void L(){
	char N[7][4]={
		{'*',' ',' ',' ' },

		{'*',' ',' ',' ' },

		{'*',' ',' ',' ' },

		{'*',' ',' ',' ' },

		{'*',' ',' ',' ' },

		{'*',' ',' ',' ' },

		{'*','*','*','*' },
			};

			 char m[7][4]={
   	    {'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'1','1','1','1' }
    };
    char ans[7][4];
    starttime=time(NULL);


             int i,j;
             for(i=0;i<7;i++){
             	for(j=0;j<4;j++){
             		printf(" %c", N[i][j]);
				 }
				 printf("\n");
			 }
			 for( i=0;i<7;++i)


   {
for( j=0;j<4;j++){

   printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
   scanf("%s",&ans[i][j]);

}
   }
  endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==m[i][j])
          score++ ;
				}
		}
	printf(" the  score of the student is: %d\n\n",score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
}
 void S(){
 	 char S[7][4] = {
        {' ','*','*','*' },
		{'*',' ',' ',' ' },
		{'*',' ',' ',' ' },
		{' ','*','*',' ' },
		{' ',' ',' ','*' },
		{' ',' ',' ','*' },
		{'*','*','*',' ' },
			};

    char letter_S[7][4]={
   	    {'0','1','1','1' },
		{'1','0','0','0' },
		{'1','0','0','0' },
		{'0','1','1','0' },
		{'0','0','0','1' },
		{'0','0','0','1' },
		{'1','1','1','0' }
    };

    char ans[7][4];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 7; i++){
        for(j = 0; j < 4; j++){
            printf(" %c", S[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 7; ++i){
        for(j = 0; j < 4; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enter(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 4; j++){
            if(ans[i][j] == letter_S[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
 	finalscore+=score;
 	timetaken+=(endtime-starttime);
 }

 void T(){
 	char T[7][5] = {
        {'*','*','*','*','*' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
			};

    char letter_T[7][5]={
   	    {'1','1','1','1','1' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' }
    };

    char ans[7][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 7; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", T[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 7; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enterT(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == letter_T[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
	finalscore +=score;
    timetaken+=(endtime-starttime);
 }



 void V(){
 	char V[4][7] = {
        {'*',' ',' ',' ',' ',' ','*' },
		{' ','*',' ',' ',' ','*',' ' },
		{' ',' ','*',' ','*',' ',' ' },
		{' ',' ',' ','*',' ',' ',' ' },

			};

    char letter_V[4][7]={
   	    {'1','0','0','0','0','0','1' },
		{'0','1','0','0','0','1','0' },
		{'0','0','1','0','1','0','0' },
		{'0','0','0','1','0','0','0' },

    };

    char ans[4][7];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
            printf(" %c", V[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; ++i){
        for(j = 0; j < 7; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enterV(ans);

    int score = 0;
    for(i = 0; i < 4; i++){
        for(j = 0;j < 7; j++){
            if(ans[i][j] == letter_V[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
 }
  void W(){
  	char W[3][7] = {
        {'*',' ',' ',' ',' ',' ','*' },
		{' ','*',' ','*',' ','*',' ' },
		{' ',' ','*',' ','*',' ',' ' }


			};

    char letter_W[3][7]={
   	    {'1','0','0','0','0','0','1' },
		{'0','1','0','1','0','1','0' },
		{'0','0','1','0','1','0','0' }


    };

    char ans[3][7];
    starttime=time(NULL);

    for(i = 0; i < 3; i++){
        for(j = 0; j < 7; j++){
            printf(" %c", W[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 7; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);


        }
    }
    endtime=time(NULL);
    enterW(ans);

    int score = 0;
    for(i = 0; i < 3; i++){
        for(j = 0;j < 7; j++){
            if(ans[i][j] == letter_W[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
    finalscore +=score;
    timetaken+=(endtime-starttime);
  }

  void X(){
  	    char X[5][5] = {
        {'*',' ',' ',' ','*' },
		{' ','*',' ','*',' ' },
		{' ',' ','*',' ',' ' },
		{' ','*',' ','*',' ' },
		{'*',' ',' ',' ','*' }
			};

    char letter_X[5][5]={
   	    {'1','0','0','0','1' },
		{'0','1','0','1','0' },
		{'0','0','1','0','0' },
		{'0','1','0','1','0' },
		{'1','0','0','0','1' }

    };

    char ans[5][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", X[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enterX(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == letter_X[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
  }

  void Y(){
  	char Y[7][5] = {
        {'*',' ',' ',' ','*' },
		{' ','*',' ','*',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
		{' ',' ','*',' ',' ' },
			};

    char letter_Y[7][5]={
   	    {'1','0','0','0','1' },
		{'0','1','0','1','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' },
		{'0','0','1','0','0' }
    };

    char ans[7][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 7; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", Y[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 7; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enterY(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == letter_Y[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
  }

  void Z(){
  	char Z[5][5] = {
        {'*','*','*','*','*' },
		{' ',' ',' ','*',' ' },
		{' ',' ','*',' ',' ' },
		{' ','*',' ',' ',' ' },
		{'*','*','*','*','*' }
			};

    char letter_Z[5][5]={
   	    {'1','1','1','1','1' },
		{'0','0','0','1','0' },
		{'0','0','1','0','0' },
		{'0','1','0','0','0' },
		{'1','1','1','1','1' }

    };

    char ans[5][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", Z[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d];",i,j);
            scanf("%s", &ans[i][j]);
        }
    }
    endtime=time(NULL);
    enterZ(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == letter_Z[i][j])
                score++;

        }
    }
	printf("The  score of the student is: %d\n\n", score);
	finalscore +=score;
	timetaken+=(endtime-starttime);
  }
