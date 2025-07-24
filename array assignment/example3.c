#include <stdio.h>
int main() {

    float a[10][10];
    float trans [10][10];
    int i,j,rows,column;
   printf("Enter rows and column of matrix:");
  fflush(stdin);fflush(stdout);
  scanf("%d%d",&rows,&column);
  for(i=0;i<rows;i++){
	  for(j=0;j<column;j++){
     printf("Enter elements a%d%d:",i+1,j+1);
    	 fflush(stdin);fflush(stdout);
    	   scanf("%f",&a[i][j]);
  }
  }
  printf("Entered matrix:\n ");
  for(i=0;i<rows;i++){
  	  for(j=0;j<column;j++){
  		printf("%.1f\t",a[i][j]);
  		if(j==column-1){
  			printf("\n\n");
  		}
    }
    }
  for(i=0;i<rows;i++){
    	  for(j=0;j<column;j++){
    		trans[j][i]=a[i][j];
    		}
      }

  for(i=0;i<column;i++){
     	  for(j=0;j<rows;j++){
     		printf("%.1f\t",trans[i][j]);
     		if(j==rows-1){
     			printf("\n\n");
     		}
       }
       }

          return 0;
    }
