#include <stdio.h>
int main() {
    float a,b,z;
    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf(" %f", &a);
    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf(" %f", &b);
    z=a;
    a=b;
    b=z;
    printf("\nAfter swapping, value of a =%.2f\n",a);
    printf("After swapping, value of b =%.2f",b);
    return 0;
}
