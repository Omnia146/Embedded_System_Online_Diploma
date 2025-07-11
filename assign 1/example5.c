#include <stdio.h>
int main() {
    char LET;
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf(" %c", &LET);
    printf("ASCII value of %c = %d",LET,LET);
    return 0;
}

