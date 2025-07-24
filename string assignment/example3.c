#include <stdio.h>
#include <string.h>
int main() {

  char s[100],reverse[100];
    int i,l;
   printf("Enter a string :");
  fflush(stdin);fflush(stdout);
   gets(s);
   l=strlen(s);
  for(i=0;i<l;i++){
	  reverse[i]=s[l-i-1];
	   }
  reverse[l] = '\0';
   printf("\nReverse string is : %s",reverse);
          return 0;
    }
