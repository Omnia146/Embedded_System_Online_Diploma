#include <stdio.h>
int factorial(int a){
	int fact =1;
	 if(a!=1){
		 fact = a*factorial(a-1);
	 }
	 return fact;
}
int main() {
 int x;
    printf("Enter an positive integer:");
        fflush(stdin);fflush(stdout);
        scanf("%d",&x);
        printf("factorial of %d =%d",x,factorial(x));
        return 0;
}
