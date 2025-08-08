#include <stdio.h>
#include <string.h>
int main() {
char alph[27];
char* p=alph;
int i;
printf("The Alphabets are : ");
for(i=0;i<26;i++){
	*p=i+'A';
	p++;

	}
p=alph;

for(i=0;i<26;i++){
 printf("%c ",*p);
 p++;

}

    return 0;
}
