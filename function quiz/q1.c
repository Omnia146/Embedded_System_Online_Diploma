#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
 const char USERNAME[] = "omnia";  

    printf("Enter your username: ");
   gets(input);

    if (strcmp(input, USERNAME) == 0) {
        printf( Welcome, %s\n", USERNAME);
    } else {
        printf(" Invalid username. Try again.\n");
    }

    return 0;
}
