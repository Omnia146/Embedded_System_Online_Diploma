/*
 * main.c
 *
 *  Created on: Jul 11, 2025
 *      Author: 20114
 */
#include <stdio.h>
#include <string.h>
struct SStudent {
	char m_name[50];
	int m_roll;
	float m_marks;
} ;
void read_student(struct SStudent student[]){
	printf(" Enter information of student :\n");
	int i;
	for(i=0;i<10;i++){
		student[i].m_roll=i+1;
		 printf(" For roll number %d\n ",student[i].m_roll);
	printf(" Enter name:");
	  fflush(stdin);fflush(stdout);
	   scanf("%s",student[i].m_name);
	   	printf(" Enter marks :");
	   		  fflush(stdin);fflush(stdout);
	   		   scanf("%f",&student[i].m_marks);
	}
}
void print(struct SStudent student[] ){
	printf("Displaying Information :\n");
	int i;
	for(i=0;i<10;i++){
	printf("information for roll :%d\n name :%s\n marks :%0.1f\n ",student[i].m_roll,student[i].m_name,student[i].m_marks);
}
}
int main() {
	struct SStudent x[10];
	read_student(x);
	print(x);
          return 0;
    
