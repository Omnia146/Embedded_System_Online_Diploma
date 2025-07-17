#include <stdio.h>
int find_power(int a,int b){
	int power =1;
	 if(b!=0){
		 power = a*find_power(a,b-1);
	 }
	 return power;
}
int main() {
 int x,y;
    printf("Enter base number:");
        fflush(stdin);fflush(stdout);
        scanf("%d",&x);
        printf("Enter power number(positive integer):");
                fflush(stdin);fflush(stdout);
                scanf("%d",&y);
        printf("%d^%d =%d",x,y,find_power(x,y));
        return 0;
}
