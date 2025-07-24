#include <stdio.h>
int main() {

  char s[100];
    int i,count=0;
   printf("Enter a string :");
  fflush(stdin);fflush(stdout);
   gets(s);

  for(i=0;s[i]!='\0';i++){
	   count++;
	   }
  printf("\nLenght of string = %d",count);
          return 0;
    }
