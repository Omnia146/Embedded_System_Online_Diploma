#include <stdio.h>
int main() {
  int x,i,factorial=1;
 printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
        if (x<0)
    	printf("Error!!! Factorial of negative number does not exist");
    else if(x<=1&&x>=0)
    	printf("1");
    else{
   for(i=x;i>=1;i--){
	   factorial*=i;
   }

	 printf("factorial =%d",factorial);
    }
    return 0;
}

