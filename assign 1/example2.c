#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    fflush(stdin);fflush(stdout);
    printf("You entered: %d\n", x);
    return 0;
}


