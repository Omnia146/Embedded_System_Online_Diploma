#include <stdio.h>
#include <string.h>
struct sEmployee{
	char name[50];
	int id;
};
int main() {
struct sEmployee emp1={"Alex",1002};
struct sEmployee* arr[1]={&emp1};
struct sEmployee*((*p)[1])=&arr;
printf("Employee Name : %s\n", (**p)->name);
 printf("Employee ID   : %d\n", (**p)->id);

    return 0;
}
