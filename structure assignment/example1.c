#include <stdio.h>
#include <string.h>
struct SStudent {
	char m_name[50];
	int m_roll;
	float m_marks;
} ;
struct SStudent read_student(){
	struct SStudent student;
	char name[50];
	printf(" Enter information of student :\n");
	printf(" Enter name:");
	  fflush(stdin);fflush(stdout);
	   scanf("%s",name);
	   strcpy(student.m_name, name);
	   printf(" Enter roll number :");
	   	  fflush(stdin);fflush(stdout);
	   	   scanf("%d",&student.m_roll);
	   	printf(" Enter marks :");
	   		  fflush(stdin);fflush(stdout);
	   		   scanf("%f",&student.m_marks);
	   return student;
}
void print(struct SStudent student ){
	printf(" Displaying Information :\n");
	printf(" name :%s\n roll :%d\n name :%.1f\n",student.m_name,student.m_roll,student.m_marks);
}
int main() {
	struct SStudent x=read_student();
	print(x);
          return 0;
    }
