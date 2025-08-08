#include <stdio.h>
#include <string.h>
int main() {
char in[100],rev[100];
char*p_in=in;
char*p_rev=rev;
printf("Input a string : ");
fflush(stdin);fflush(stdout);
scanf("%s",in);
while(*p_in){
	p_in++;
}
int i;
for(i=strlen(in)-1;i>=0;i--){
	p_in--;
    *p_rev=*p_in;
    p_rev++;

}
*p_rev='\0';
printf("Reverse of the string is :%s ",rev);
    return 0;
}
