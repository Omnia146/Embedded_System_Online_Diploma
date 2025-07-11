#include <stdio.h>
int main() {
   char l;
    printf("Enter an alphabet: ");
    fflush(stdin);fflush(stdout);
    scanf(" %c", &l);
 if(l=='a'||l=='e'||l=='o'||l=='u'||l=='i'||l=='A'||l=='E'||l=='O'||l=='U'||l=='I'){
	 printf("%c is a vowel",l);
 }
 else{

	 printf("%c is a consonant",l);
 }
    return 0;
}
