#include <stdio.h>
#include <string.h>
int main() {
char in[100];
char* p;
int i;
printf("Input a string : ");
fflush(stdin);fflush(stdout);
scanf("%s",in);
int x=strlen(in);
 p=&in[x-1];
 printf("Reverse of the string is : ");
for(i=x-1;i>=0;i--){
 printf("%c",*p);
 p--;
}

    return 0;
}
