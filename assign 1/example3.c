#include <stdio.h>

int main() {
    int x,y;
    printf("Enter two integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d", &x,&y);
    printf("sum: %d\n", x+y);
    return 0;
}
