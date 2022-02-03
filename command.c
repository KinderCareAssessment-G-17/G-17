#include<stdio.h>
#include<time.h>
#include "functionletter.c"


     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_ROW row;
     char startDate[20];
     char endDate[20];
     int totalAssignments;
     char q[1000];
     char r[1000];
     char b[1000];

char Stdusercode[200];

void attemptAssignment(char k[]){
    char query_str[] = {"SELECT activationstatus FROM student WHERE activationstatus='activated' and userCode = '%s'   "};
		sprintf(b, query_str,Stdusercode);
		if (mysql_query(conn, b)) {

			 finish_with_error(conn);


		}
		res=mysql_store_result(conn);

		if((row=mysql_fetch_row(res))>0){
	int i,j,g,l;
	char assNo[200];
	printf("enter assignment number: ");
	scanf("%s",assNo);
	printf("\n\n");
int length=0;
	char letter[length];
				char query_string[] = {"SELECT assignment FROM assignment WHERE  assignmentNo='%s' AND teacherNo=(SELECT teacherNo FROM student where usercode='%s')   "};
		sprintf(q, query_string,assNo,Stdusercode);
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

printf("total time taken:%ld\n",timetaken );
printf("the final score is:%d",finalscore);

char w[100];
			char query_stg[] = {"UPDATE assignment SET status='attempted'  WHERE  assignmentNo='%s'"};
		sprintf(w, query_stg,assNo);
		if (mysql_query(conn, w)) {

			 finish_with_error(conn);


		}

		char x[100];
			char query_st[] = {"UPDATE assignment SET score= %d  WHERE  assignmentNo='%s'"};
		sprintf(x, query_st,finalscore,assNo);
		if (mysql_query(conn, x)) {

			 finish_with_error(conn);


		}


}


else{
    printf(" your deactivated, send activation request");
}
}
void viewactivationstatus(char k[]){
    char q[100];
			char query_string[] = {"SELECT activationstatus FROM student WHERE  usercode='%s'  "};
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
       /*  char q[100];
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



}
void viewALL(char k[]){
     char q[100];
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
        }


}
void checkDates(char k[]){

}
void requestActivation(char k[]){

char q[100];
			char query_string[] = {"UPDATE student SET requestactivation='pending'  WHERE  usercode='%s' AND activationstatus ='deactivated' "};
		sprintf(q, query_string,Stdusercode);
		if (mysql_query(conn, q)) {

			 finish_with_error(conn);


		}
    printf("activation request sent");

}
viewAssignment(char k[]){

}

