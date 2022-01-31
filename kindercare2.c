#include<stdio.h>
#include<String.h>
#include<time.h>
#include "command.c"


int main(){
/*	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	
	char *server = "localhost";
	char *user = "root";
	char *password = "password"; 
	char *database = "school";
	
	conn = mysql_init(NULL);
	
	// Connect to database 
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
		printf( "%s\n", mysql_error(conn));
		exit(1);
*/	
	
	char Stdusercode;
	
	
	printf("          KINDERCARE ASSESSEMENT SYSTEM \n");
	
		printf("STUDENT AUTHENTICATION\n");
		HERE:
			printf("ENTER USERCODE: ");
			scanf("%s",&Stdusercode);
			
			//char storeUsercode="SELECT usercode FROM pupilReg WHERE  usercode= stdusercode";
			
			//if(storeUsercode!=NULL){
			COM:
				printf("\n\nEnter the following commands to continue:\n\n");
				printf("1.VIEWALL\t\t\t\t\t\t");printf("display assignment number,date,and attempt status\n");
				printf("2.CHECKSTATUS\t\t\t\t\t\t");printf("displays status report of pupil summarizing all assignments\n");
				printf("3.VIEWASSIGNMENT <assignmentID>\t\t\t\t");printf("see details of a specified assignment\n");
				printf("4.CHECKDATES <datefrom><dateto>\t\t\t\t");printf("shows if there is an assignment within a specifc date range\n");
				printf("5.REQUESTACTIVATION\t\t\t\t\t");printf("used to request for activation by pupil\n\n");
			//}
			char command[50];
			printf("enter command : ");
			scanf("%s",&command);
			
			
			if(strcmp(command,"VIEWALL")==0){
				viewALL(command);
			}		
			else if(strcmp(command,"CHECKSTATUS")==0){
				checkstatus(command);
			}
			else if(strcmp(command,"VIEWASSIGNMENT")==0){
				viewAssignment(command);
			}
			else if(strcmp(command,"CHECKDATES")==0){
				checkDates(command);
			}else if(strcmp(command,"REQUESTACTIVATION")==0){
				requestActivation(command);
			}else{
				printf("invalid command entered");
				goto COM;
			}
			
			
			
return 0;
}






			 
			 
			 
			 
			 
			 
		
	
	
	
