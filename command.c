#include<stdio.h>
#include<time.h>
#include "functionletter.c"
/*
let the user secelct assignment
select where assignment code
*/

void viewALL(char k[]){
	int i,j,g,l;
	/*char letter;
		printf("enter a letter:");
	scanf("%s",&letter);*/
	char letter[]="NB";
	/*
	char assignment[2][9]={
	
	{'1','V','S','F','E','O','P','Z','W' },
	{'2','W','Z','B','C','D','Q','X','Y' }};
	printf("AN0\tL1\tL2\tL3\tL4\tL5\tL6\tL7\tL8\n");
	for(i=0;i<2;i++){
	for(j=0;j<9;j++){
	printf("%c\t",assignment[i][j]);
	}
	printf("\n");}
	
	
	
	

char code;
ass:
printf("\n\nenter assignment code to attempt: ");
scanf("%s",&code);


	
		if(code == assignment[0][0]){
			
				letter[0]=assignment[0][1];
				letter[1]=assignment[0][2];
				letter[2]=assignment[0][3];
				letter[3]=assignment[0][4];
				letter[4]=assignment[0][5];
				letter[5]=assignment[0][6];
				letter[6]=assignment[0][7];
				letter[7]=assignment[0][8];
			}else if(assignment[1][0]== code){
				letter[0]=assignment[1][1];
				letter[1]=assignment[1][2];
				letter[2]=assignment[1][3];
				letter[3]=assignment[1][4];
				letter[4]=assignment[1][5];
				letter[5]=assignment[1][6];
				letter[6]=assignment[1][7];
				letter[7]=assignment[1][8];
				
				
			}else{
				printf("invalid assignment code entered");
				goto ass;
				
			}
			 
	
	
//time_t starttime,endtime;*/
	int length=strlen(letter);
	for(i=0;i<length;i++){
		
	// starttime =time(NULL);
	
switch(letter[i]){
	case 'P'   :p();
	             break;
	case 'G'   :G();
	             break;
	case 'H'   :H();
	             break;
	case 'I'   :I();
	             break;
	
	case 'J'   :J();
	             break;
	case 'K'   :K();
	             break;
	case 'L'   :L();
	             break;
	case 'Q'   :Q();
	             break;
	case 'O'   :O();
	             break;
	             
	 case 'N'   :N();
	             break;
	case 'U'   :U();
	             break;	
				 
	case 'F'   :F();
	             break;	
				 
	case 'B'   :B();
	             break;
	case 'D'   :D();
	             break;	
	case 'E'   :E();
	             break;	
	case 'C'   :C();
	             break;	
	case 'Z'   :Z();
	             break;
	case 'W'   :W();
	             break;
	case 'V'   :V();
	             break;
	case 'T'   :T();
	             break;	
	case 'S'   :S();
	
	             break;
	case 'X'   :X();
	             break;
	case 'Y'   :Y();
	             break;			 			 		 			 			 	
				 		 		 		 		 			 			 		             
	default: printf("invalid letter");}
	// endtime=time(NULL); 
}

printf("total time taken:%ld\n",timetaken );
printf("the final score is:%d",finalscore);	
}
void checkstatus(char k[]){
	
}
void viewAssignment(char k[]){
	
}
void checkDates(char k[]){
	
}
void requestActivation(char k[]){
	
	
}

