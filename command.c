#include<stdio.h>
#include<time.h>
#include "functionletter.c"


     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_RES *ress;
     MYSQL_RES *result;
     MYSQL_ROW row;
     MYSQL_ROW rows;
     char startDate[20];
     char endDate[20];
     int totalAssignments;
     char q[1000];
     char r[1000];
     char b[1000];

char Stdusercode[200];

void attemptAssignment(char k[]){


    char query_str[] = {"SELECT ActivationStatus FROM pupildetails WHERE ActivationStatus='activated' and userCode = '%s'   "};
		sprintf(b, query_str,Stdusercode);
		if (mysql_query(conn, b)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if((row=mysql_fetch_row(res))>0){
	int i,j,g,l;
	char assNo[200];
	START:
	printf("enter assignment number: ");
	scanf("%s",assNo);


   /*
   char T[80];
   char endtime[]= char query_str[] = {"SELECT endtime FROM assignment WHERE assignmentNo='%s'  "};
		sprintf(T, endtime,assNo);
		if (mysql_query(conn, T)) {

			 finish_with_error(conn);


		}

		while((row=mysql_fetch_row(res))){
		strcpy(str_deadline,row[0]);}

		char str_deadline_shortened[8];

            */

	 char query_str[] = {"SELECT * FROM submittedassignments WHERE assignment_no='%s' AND usercode='%s'  "};
		sprintf(b, query_str,assNo,Stdusercode);
		if (mysql_query(conn, b)) {

			 finish_with_error(conn);


		}
		ress=mysql_store_result(conn);
		if((rows=mysql_fetch_row(ress))==0){


	printf("\n\n");
    int length=0;
	char letter[length];

	/*char hours[5], minutes[5],seconds[5],year[10],month[5],day[5];
	time_t now;
	char endTime[10];
	time(&now);

	struct tm *thisTime = localtime(&now);
	sprintf(year,"%d",thisTime->tm_year + 1900);
	sprintf(month,"%d", thisTime->tm_mon+1);
	sprintf(day,"%d", thisTime->tm_mday);

	char date[20];
	char dash[]="-";

	strcpy(date,year);
	strcat(date,dash);
	strcat(date,month);
	strcat(date,dash);
	strcat(date,day);

	sprintf(hours,"%d", thisTime->tm_hour);
	sprintf(minutes,"%d", thisTime->tm_min);
	sprintf(seconds,"%d", thisTime->tm_sec);

	char time[20];
	char colon[]=":";

	strcpy(time,hours);
	strcat(time,colon);
	strcat(time,minutes);
	strcat(time,colon);
	strcat(time,seconds);

	char string[]={"SELECT characters FROM assignments where assignment_no = '%s' AND start_date='%s' AND start_time <='%s' AND end_time > '%s'"};

	sprintf(s,string,assNo,date,time,time);
	if(mysql_query(conn,s))
    {
        finish_with_error(conn);
    }

    res=mysql_store_result(conn);
    if(res==NULL)
    {
        finish_with_error(conn);
    }

    char assignment[30];
    row = mysql_fetch_row(res);
    if(row==NULL){
        printf("\nASSIGNMENT EXPIRED\n\n");
             goto START;
    }*/
				char query_string[] = {"SELECT characters FROM assignments WHERE   assignment_no='%s'    "};
		sprintf(q, query_string,assNo);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);


		if(res==NULL){


            finish_with_error(conn);

		}

		int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){

            strcpy(letter,row[0]);
            }
            printf("\n");








length=strlen(letter);

	for(i=0;i<length;i++){



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
int fscore=finalscore/length;
printf("Total time taken:%ld\n",timetaken );
printf("The final score is:%d",fscore);

char w[100];
			char query_stg[] = {"INSERT INTO submittedassignments (assignment_no,UserCode,duration,score) VALUES('%s','%s',%d,%d)"};
		sprintf(w, query_stg,assNo,Stdusercode,timetaken,fscore);
		if (mysql_query(conn, w)) {

			 finish_with_error(conn);


		}


		}else{
		printf("assignment already attempted\n");
		goto START;

		}
}


else{
    printf(" you're deactivated, send activation request");
}
}
void viewactivationstatus(char k[]){
    char q[100];
			char query_string[] = {"SELECT ActivationStatus FROM pupildetails WHERE  usercode='%s'  "};
		sprintf(q, query_string,Stdusercode);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if(res==NULL){

            finish_with_error(conn);
		}

		int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }


}
void checkstatus(char k[]){


            //Total number of assignments
            char query10[]="SELECT COUNT(assignment_no) FROM assignments";
            sprintf(q, query10);
            //sprintf(q, query10);
                  if (mysql_query(conn, q))
        {
           finish_with_error(conn);

        }
      res=mysql_store_result(conn);
       if(res==NULL){
            finish_with_error(conn);
        }
   printf("Number of assignments:");
       int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }

      //calculating the average score of a pupil
   char query12[]="SELECT AVG(score) FROM submittedassignments WHERE userCode ='%s'";
   sprintf(q, query12, Stdusercode);
   if(mysql_query(conn, q))
   {
       finish_with_error(conn);
   }
   res=mysql_store_result(conn);
      if(res==NULL){
            finish_with_error(conn);
        }
        printf("Average score of all attempted assignments:");
       num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }

      //calculating percentage of assignments attempted
      char string1[100];
      float total_attempted;
      char query13[]="SELECT COUNT(assignment_no) FROM  submittedassignments WHERE userCode='%s'";
      sprintf(q, query13, Stdusercode);
      if(mysql_query(conn, q))
       {
       finish_with_error(conn);
      }
     res=mysql_store_result(conn);
      if(res==NULL){
            finish_with_error(conn);
        }
     num_fields=mysql_num_fields(res);
     while((row=mysql_fetch_row(res))){
            strcpy(string1, row[0]);
        }
        total_attempted=atof(string1);

       //attempted = (total_attempted/total_assignments)*100;
       char string2[100];
       float total_assignments;
       float attempted;
       char query14[]="SELECT COUNT(assignment_no) FROM assignments";
      sprintf(q, query14, Stdusercode);
      if(mysql_query(conn, q))
       {
       finish_with_error(conn);
      }
     res=mysql_store_result(conn);
      if(res==NULL){
            finish_with_error(conn);
        }
     num_fields=mysql_num_fields(res);
     while((row=mysql_fetch_row(res))){
            strcpy(string2, row[0]);
        }
        total_assignments=atof(string2);

        attempted = (total_attempted * 100)/total_assignments;
        printf("The percentage of assignments attempted is :%f\n", attempted);


         float missed= 100-(attempted);

         printf("The percentage of assignments missed is: %f\n",missed);



}
void viewALL(char k[]){
    /* char q[100];
			char query_string[] = {"SELECT assignmentNo,uploaddate,status FROM assignment WHERE  teacherNo=(SELECT teacherNo FROM student where usercode='%s')  "};
		sprintf(q, query_string,Stdusercode);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if(res==NULL){

            finish_with_error(conn);
		}

		int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }*/




        char date[30], assignmentId[30];
     char query_string[] = {"SELECT assignment_no,start_date,end_date FROM assignments "};
     sprintf(r, query_string);
		if (mysql_query(conn, r))
        {
           finish_with_error(conn);

        }
     res = mysql_store_result(conn);
            while((row=mysql_fetch_row(res)) != NULL){
                    char query_str[] = {"SELECT * FROM submittedassignments WHERE  userCode = '%s' and assignment_no='%s' "};
     sprintf(q, query_str,Stdusercode,row[0]);


                    strcpy(date, row[1]);
                    strcpy(assignmentId, row[0]);

            if(mysql_query(conn, q)) {
                printf("\nerror");
                exit(1);
            }

            result = mysql_store_result(conn);

            if((row = mysql_fetch_row(result)) == NULL) {
                printf("\n%s  %s   Not Attempted", assignmentId, date);
            }
            else {
                printf("\n%s  %s   Attempted", assignmentId, date);
            }

        }



}
void checkDates(char *v , char *h){
char q[100];
			char query_string[] = {"SELECT * FROM assignments WHERE start_date BETWEEN '%s' and '%s'  "};
		sprintf(q, query_string,v,h);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if(res==NULL){

            finish_with_error(conn);
		}

		int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]:"NULL");

            }
        printf("\n");
        }

        }


void requestActivation(char k[]){

char q[100];
			char query_string[] = {"UPDATE pupildetails SET requestactivation='pending'  WHERE  UserCode='%s' AND ActivationStatus ='deactivated' "};
		sprintf(q, query_string,Stdusercode);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
    printf("activation request sent");

}
viewAssignment(char *assignmentNo){




    char q[100];
			char query_string[] = {"SELECT * FROM assignments WHERE assignment_no='%s'   "};
		sprintf(q, query_string,assignmentNo);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if(res==NULL){

            finish_with_error(conn);
		}

		int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");

            }

            printf("\n");
        }




}

