#include<stdio.h>
#include<String.h>
#include<stdlib.h>
#include<winsock.h>
#include <mysql.h>
#include<time.h>
#include "command.c"


void finish_with_error(MYSQL *conn)
{
    fprintf(stderr, "%s\n",mysql_error(conn));
    mysql_close(conn);
    exit(1);
}
     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_ROW row;

     char *server = "localhost";
     char *user = "root";
     char *password = "";
     char *database = "kindercare";
     char startDate[20];
     char endDate[20];
     int totalAssignments;
     char q[1000];
     char r[1000];


char Stdusercode[200];
int main(){




    //connecting to the database
  conn= mysql_init(NULL);
  conn = (mysql_real_connect(conn, server, user, password, database, 3306, NULL, 0));
  if(conn)
     {
       printf("Connection successful.\n");
     }
     else{
        printf("Failed to connect.\n");
     }








	printf("====================== KINDERCARE ASSESSEMENT SYSTEM ============================ \n");

		printf("STUDENT AUTHENTICATION\n");
		HERE:
			printf("ENTER USERCODE: ");
			scanf("%s",Stdusercode);
             fflush(stdin);
         puts(Stdusercode);
         printf("\n\n");
			char query_string[] = {"SELECT * FROM pupildetails WHERE  userCode = '%s'  "};
		sprintf(q, query_string,Stdusercode);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if((row=mysql_fetch_row(res))>0){
           COM:
				printf("\n\nEnter the following commands to continue:\n\n");
				printf("1.VIEWALL\t\t\t\t\t\t");printf("display assignment number,date,and attempt status\n");
				printf("2.ATTEMPTASSIGNMENT\t\t\t\t\t");printf("display assignment number,date,and attempt status\n");
				printf("3.CHECKSTATUS\t\t\t\t\t\t");printf("displays status report of pupil summarizing all assignments\n");
				printf("4.VIEWASSIGNMENT <assignmentID>\t\t\t\t");printf("see details of a specified assignment\n");
				printf("5.CHECKDATES <datefrom><dateto>\t\t\t\t");printf("shows if there is an assignment within a specifc date range\n");
				printf("6.REQUESTACTIVATION\t\t\t\t\t");printf("used to request for activation by pupil\n");
				printf("7.VIEWACTIVATIONSTATUS\t\t\t\t\t");printf("used to view if the student is activated\n");
				printf("8.LOGOUT\t\t\t\t\t\t");printf("used by a student to logout\n\n");



			printf("enter command :");
			char * command;
			gets(command);



			if(strcmp(command,"VIEWALL")==0){
				viewALL(command);
				goto COM;
			}
			else if(strcmp(command,"ATTEMPTASSIGNMENT")==0){
				attemptAssignment(command);
				goto COM;
			}
			else if(strcmp(command,"CHECKSTATUS")==0){
				checkstatus(command);
				goto COM;
			}
			else if(strncmp(command,"VIEWASSIGNMENT",14)==0){
                    char *str1=strtok(command," ");
                    char *str2=strtok(NULL," ");

				viewAssignment(str2);
				goto COM;
			}
			else if(strncmp(command,"CHECKDATES",10)==0){
                     char *part1=strtok(command," ");
            char *part2=strtok(NULL," ");
            char *part3=strtok(NULL," ");

				checkDates(part2,part3);
				goto COM;


			}
			else if(strcmp(command,"REQUESTACTIVATION")==0){
				requestActivation(command);
				goto COM;

			}else if(strcmp(command,"VIEWACTIVATIONSTATUS")==0){
				viewactivationstatus(command);
				goto COM;
				}
				else if(strcmp(command,"LOGOUT")==0){
				system("cls");
				printf("you are now logged out of the system\n");
				printf("Enter user code to login :\n\n");
				goto HERE;
				}

			else{
				printf("invalid command entered");
				goto COM;
			}



    }else{

    printf("invalid user code");
    system("cls");
    goto HERE;
    }

return 1;
}




