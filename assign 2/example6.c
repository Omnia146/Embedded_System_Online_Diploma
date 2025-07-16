#include <stdio.h>
int main() {
  int x,sum=0;
 printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    int i;
   for(i=x;i!=0;i--){
	   sum+=i;
   }

	 printf("sum =%d",sum);

    return 0;
}
