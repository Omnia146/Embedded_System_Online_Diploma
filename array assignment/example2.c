#include <stdio.h>
int main() {

    float a[100];

   float average=0 ;
   printf("Enter a number of data:");
  int i,n;
  fflush(stdin);fflush(stdout);
  scanf("%d",&n);
  for(i=0;i<n;i++){
     printf("%d.Enter number: ",i+1);
    	 fflush(stdin);fflush(stdout);
    	   scanf("%f",&a[i]);
  }

  for(i=0;i<n;i++){
       average+=a[i];
  }
  printf("average=%.2f ",average/n);

          return 0;
    }
