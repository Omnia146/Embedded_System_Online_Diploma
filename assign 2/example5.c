#include <stdio.h>
int main() {
   char l;
 printf("Enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&l);
 if((l>='a'&&l<='z')||(l>='A'&&l<='Z')){
	 printf("%c is an alphabet",l);
 }
 else{

	 printf("%c is not an alphabet",l);
 }
    return 0;
}
