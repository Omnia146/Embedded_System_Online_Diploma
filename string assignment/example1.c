#include <stdio.h>
int main() {

  char s[100];
    int i,f=0;
	char input;
   printf("Enter a string :");
  fflush(stdin);fflush(stdout);
   gets(s);

   printf("\nEnter a character to find frequency :");
     fflush(stdin);fflush(stdout);
      scanf("%c",&input);
  for(i=0;s[i]!='\0';i++){
	   if(input==s[i]){
		   f++;
	   }

  }

  printf("\nFrequency of %c= %d",input,f);
          return 0;
    }
