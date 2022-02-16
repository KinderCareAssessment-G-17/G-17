#include<stdio.h>
#include<time.h>
int i,j,k;
int finalscore;
time_t starttime,endtime,timetaken=0;

/*void timing(char *end_time )
{

    //while(1)
    //{
            //delay(1);
           // system("cls");

         char str_deadline[9];

                strcpy(str_deadline, end_time);

                char str_deadlline_mins[5] , str_deadlline_hrs[5], str_deadlline_secs[5];
                int  mins_now, mins_future,mins_rem, hrs_now, hrs_future,hrs_rem,secs_now,  secs_future, secs_rem;

                int a = 0, b= 0, c = 0, i = 0;

                 for(i = 0; i < 9; i++)
                {

                     if (i == 0 || i ==1)
                        str_deadlline_hrs[a++] = str_deadline[i];

                     if (i == 3 || i ==4)
                        str_deadlline_mins[b++] = str_deadline[i];

                     if (i == 6 || i ==7)
                        str_deadlline_secs[c++] = str_deadline[i];

                     else
                        continue;

                }

                hrs_future = atoi(str_deadlline_hrs);
                mins_future = atoi(str_deadlline_mins);
                secs_future = atoi(str_deadlline_secs);

                 struct tm *current_time ;
                time_t  time_now = time(NULL);
                 current_time = localtime(&time_now);

                 hrs_now = current_time->tm_hour;
                 mins_now =current_time->tm_min;
                 secs_now = current_time->tm_sec;

                if( secs_future - secs_now >= 0 )
                secs_rem = secs_future - secs_now;

                else if ( mins_future - mins_now  >=  0 )
                {
                     secs_rem = (secs_future + 60 )- secs_now;
                    --mins_future;
                }


                else
                {

                    secs_rem = (secs_future + 60 )- secs_now;
                    --hrs_future;
                    mins_future += 59;
                }



                    if( mins_future - mins_now  >=  0 )
                        mins_rem = mins_future - mins_now;
                    else
                    {
                        mins_rem = (mins_future + 60) - mins_now;
                        --hrs_future;
                    }


                        hrs_rem = hrs_future - hrs_now;


                        printf("%d hrs %d mins %d secs.\n\n", hrs_rem, mins_rem, secs_rem);

   // }


}*/

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
printf("print letter N:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}

   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the score of the student is: %d \n\n",percentage);
finalscore += percentage;
timetaken+=(endtime-starttime);

}
void O(){
    printf("Enter letter O:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}
void p(){
    printf("print letter P:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}


   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);




}
void Q(){
    printf("print letter Q:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);


}
void U(){
    printf("print letter U:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the score of the student is: %\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void F(){
printf("print letter F:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;


}

}
int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void B(){
    printf("print letter B:\n");
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
        scanf("%s",&ans2[c][d]);

        if(ans2[c][d]=='1'){
    ans2[c][d]='*';

   }else if(ans2[c][d]=='0'){
   ans2[c][d]=' ';
   }}
        }
        endtime=time(NULL);
        enter( ans2);
    for(c=0;c<7;c++){
	for(d=0;d<4;d++){
		if(ans2[c][d]==B[c][d])
          score++ ;  }
          }
          int percentage= (score *100)/28 ;
printf(" the score of the student is: %d\n\n",percentage);

finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void D(){
    printf("print letter D:\n");
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
        scanf("%s",&ans3[e][f]);

        if(ans3[e][f]=='1'){
    ans3[e][f]='*';

   }else if(ans3[e][f]=='0'){
   ans3[e][f]=' ';
   }
			 }
        }
        endtime=time(NULL);
        enter( ans3);
        for(e=0;e<7;e++){
	for(f=0;f<4;f++){
		if(ans3[e][f]==D[e][f])
          score++ ;  }
          }
          int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void E(){
    printf("print letter E:\n");
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
        scanf("%s",&ans4[g][h]);
        if(ans4[g][h]=='1'){
    ans4[g][h]='*';

   }else if(ans4[g][h]=='0'){
   ans4[g][h]=' ';
   }

        }
        }
        endtime=time(NULL);
        enter( ans4);
        for(g=0;g<7;g++){
	    for(h=0;h<4;h++){
		if(ans4[g][h]==E[g][h])
          score++ ;  }
          }
          int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void C(){
    printf("print letter c:\n");
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
        scanf("%s",&ans1[a][b]);
        if(ans1[a][b]=='1'){
    ans1[a][b]='*';

   }else if(ans1[a][b]=='0'){
   ans1[a][b]=' ';
   }

        }
        }
        endtime=time(NULL);
        enter( ans1);
for(a=0;a<7;a++){
	for(b=0;b<4;b++){
		if(ans1[a][b]==C[a][b])
          score++ ;  }
          }
          int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken+=(endtime-starttime);
}

void G(){
    printf("Enter letter G:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
}
}
int percentage= (score *100)/28 ;
printf(" the  score of the student is: %d\n\n",percentage);
finalscore +=percentage;
timetaken +=(endtime-starttime);
		}

void H(){
    printf("enter letter H:\n");
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
   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
					}
				}
int percentage= (score *100)/28 ;
		printf(" the  score of the student is: %d\n\n",percentage);
		finalscore +=percentage;
		timetaken+=(endtime-starttime);
}

void I(){
    printf("enter letter I:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
				}
		}
    int percentage= (score *100)/28 ;
	printf(" the  score of the student is: %d\n\n",percentage);
	finalscore +=percentage;
	timetaken+=(endtime-starttime);
}

void J(){
    printf("enter letter J:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
   endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
					}
			}
			int percentage= (score *100)/28 ;
		printf(" the  score of the student is: %\n\n",percentage);
		finalscore +=percentage;
		timetaken+=(endtime-starttime);
}

void K(){
    printf("enter letter K:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
  endtime=time(NULL);
  enter( ans);


int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
				}
		}
		int percentage= (score *100)/28 ;
	printf(" the  score of the student is: %d\n\n",percentage);
	finalscore +=percentage;
	timetaken+=(endtime-starttime);
}

void L(){
    printf("enter letter L:\n");
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

   if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }

}
   }
  endtime=time(NULL);
  enter( ans);

int score=0;
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
		if(ans[i][j]==N[i][j])
          score++ ;
				}
		}
		int percentage= (score *100)/28 ;
	printf(" the  score of the student is: %d\n\n",percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);
}
 void S(){
     printf("enter letter S:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enter(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 4; j++){
            if(ans[i][j] == S[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
 	finalscore += percentage;
 	timetaken+=(endtime-starttime);
 }

 void T(){
     printf("enter letter T:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterT(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == T[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
    timetaken+=(endtime-starttime);
 }



 void V(){
     printf("enter letter V:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterV(ans);

    int score = 0;
    for(i = 0; i < 4; i++){
        for(j = 0;j < 7; j++){
            if(ans[i][j] == V[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);
 }
  void W(){
      printf("enter letter W:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }


        }
    }
    endtime=time(NULL);
    enterW(ans);

    int score = 0;
    for(i = 0; i < 3; i++){
        for(j = 0;j < 7; j++){
            if(ans[i][j] == W[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
    finalscore += percentage;
    timetaken+=(endtime-starttime);
  }

  void X(){
      printf("enter letter X:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterX(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] == X[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);
  }

  void Y(){
      printf("enter letter Y:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterY(ans);

    int score = 0;
    for(i = 0; i < 7; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] ==Y[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore +=percentage;
	timetaken+=(endtime-starttime);
  }

  void Z(){
      printf("enter letter Z:\n");
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
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterZ(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] ==Z[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);
  }
  void R(){
      printf("enter letter R:\n");

	char R[5][5]={
		{'*','*','*','*',' ' },
        {'*',' ',' ','*',' ' },
		{'*','*','*',' ',' ' },
		{'*',' ',' ','*',' ' },
		{'*',' ',' ',' ','*' },
			};

			 char letter_R[5][5]={
   	    {'1','1','1','1','0' },
		{'1','0','0','1','0' },
		{'1','1','1','0','0' },
		{'1','0','0','1','0' },
		{'1','0','0','0','1' },
		};


    char ans[5][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", R[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterX(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] ==R[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);

  }
  void A(){
         printf("enter letter A:\n");


	char A[4][7]={
		{' ',' ',' ','*',' ',' ',' ' },
		{' ',' ','*',' ','*',' ',' ' },
		{' ','*','*','*','*','*',' ' },
		{'*',' ',' ',' ',' ',' ','*' },
			};


			 char letter_A[4][7]={
        {'0','0','0','1','0','0','0' },
		{'0','0','1','0','1','0','0' },
		{'0','1','1','1','1','1','0' },
		{'1','0','0','0','0','0','1' },
		};
    char ans[4][7];

    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
            printf(" %c", A[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; ++i){
        for(j = 0; j < 7; j++){
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterV(ans);

    int score = 0;
    for(i = 0; i < 4; i++){
        for(j = 0;j < 7; j++){
            if(ans[i][j] == A[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);
 }


  void M(){
          printf("enter letter M:\n");

	char M[5][5]={
		{'*',' ',' ',' ','*' },
        {'*','*',' ','*','*' },
		{'*',' ','*',' ','*' },
		{'*',' ',' ',' ','*' },
		{'*',' ',' ',' ','*' },
			};

			 char letter_M[5][5]={
   	    {'1','0','0','0','1' },
		{'1','1','0','1','1' },
		{'1','0','1','0','1' },
		{'1','0','0','0','1' },
		{'1','0','0','0','1' },
		};


    char ans[5][5];
    starttime=time(NULL);
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf(" %c", M[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            printf("Enter 0 or 1 at position ans[%d][%d]:",i,j);
            scanf("%s", &ans[i][j]);

            if(ans[i][j]=='1'){
    ans[i][j]='*';

   }else if(ans[i][j]=='0'){
   ans[i][j]=' ';
   }
        }
    }
    endtime=time(NULL);
    enterX(ans);

    int score = 0;
    for(i = 0; i < 5; i++){
        for(j = 0;j < 5; j++){
            if(ans[i][j] ==M[i][j])
                score++;

        }
    }
    int percentage= (score *100)/28 ;
	printf("The  score of the student is: %d\n\n", percentage);
	finalscore += percentage;
	timetaken+=(endtime-starttime);


  }
