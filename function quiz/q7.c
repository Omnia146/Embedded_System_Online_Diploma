#include <stdio.h>
#include <string.h>

int check(int p){
	int i,temp=1;
	for(i=1;i<=p;i++){
		temp *= 3;
  	if (temp == p)
		 return 0;
		   }
	return 1;

}
int main() {

  int n;
   printf("enter number:");
  fflush(stdin);fflush(stdout);
   scanf("%d",&n);
   if (check(n))
   printf("1");
   else
   printf("0");

          return 0;
    }
