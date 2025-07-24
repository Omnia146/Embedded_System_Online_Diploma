#include <stdio.h>
int main() {

    float a[2][2];
    float b[2][2];
   float sum [2][2];

  printf("Enter the elements of 1st matrix:\n");
  int i,j;
  for(i=0;i<2;i++){
     for(j=0;j<2;j++){
     printf("Enter a%d%d: ",i+1,j+1);
    	 fflush(stdin);fflush(stdout);
    	   scanf("%f",&a[i][j]);

  }
  }
  printf("Enter the elements of 2st matrix:\n");
  for(i=0;i<2;i++){
       for(j=0;j<2;j++){
       printf("Enter b%d%d: ",i+1,j+1);
      	 fflush(stdin);fflush(stdout);
      	   scanf("%f",&b[i][j]);
       }
  }
  for(i=0;i<2;i++){
       for(j=0;j<2;j++){

      	sum[i][j]=a[i][j]+b[i][j];
       }
  }
  printf("sum of matrix:\n ");
  for(i=0;i<2;i++){
         for(j=0;j<2;j++){
        	 printf("%.2f\t",sum[i][j]);
        	if (j==1){
        		 printf("\n");
        	}
         }
    }
          return 0;
    }
