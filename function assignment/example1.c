#include <stdio.h>
int is_prime(int a){
	int k;
	if(a<2)
		return 0;
	 for(k=2;k*k<=a;k++){
        if(a%k==0)
		return 0;
	        	}
	    	return 1;
}
int main() {
 int x,y;
    printf("Enter two numbers (intervals):");
        fflush(stdin);fflush(stdout);
        scanf("%d%d",&x,&y);
        printf("prime numbers between %d and %d =",x,y);
        int i;
        for(i=x;i<y;i++){
        	if(is_prime(i))
        		printf("%d ",i);
        }
        return 0;
}
