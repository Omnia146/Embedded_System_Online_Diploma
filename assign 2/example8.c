#include <stdio.h>
int main() {
 char op;
 float x,y,answer=0;
 printf("Enter operator either + or - or * or /: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&op);
    printf("Enter two operands ");
        fflush(stdin);fflush(stdout);
        scanf("%f%f",&x,&y);
        switch(op){
        case '+':
		answer =x+y;
		break;
        case '-':
        		answer =x-y;
        		break;
        case '*':
        		answer =x*y;
        		break;
        case '/':
        		answer =x/y;
        		break;
        default :
				 printf("Error!!! operator is not correct");
				 break;

        }
        printf("%.2f %c %.2f = %.2f ",x,op,y,answer);

        return 0;
}
