#include <stdio.h>
#include <string.h>

void reverse(int s[],int a){
	int i,temp;
	for(i=0;i<a;i++){
		temp=s[i];
	s[i]=s[a-i-1];
	s[a-i-1]=temp;
		   }

}
int main() {

  int s[100],n;
   printf("enter number of element :");
  fflush(stdin);fflush(stdout);
   scanf("%d",&n);
   printf("Input :");
   for(int i = 0; i < n; ++i) {
	   fflush(stdin);fflush(stdout);
	     scanf("%d",&s[i]);
          }
   reverse(s,n);
   printf("output :");
   for(int i = 0; i < n; ++i) {
           printf("%d ", s[i]);
       }
          return 0;
    }
