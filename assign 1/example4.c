#include <stdio.h>
int main() {
    float x , y;
    printf("Enter two numbers: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &x,&y);
    printf("product: %f\n", x * y);
    return 0;
}

