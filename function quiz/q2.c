#include <stdio.h>
#include <string.h>

int main() {

  int b[100],a[100],temp[100],La,Lb,i,t;
   printf("enter number of element array A :");
  fflush(stdin);fflush(stdout);
   scanf("%d",&La);
   printf("Input :");
   for(int i = 0; i < La; ++i) {
	   fflush(stdin);fflush(stdout);
	     scanf("%d",&a[i]);
          }
   printf("enter number of element array B :");
     fflush(stdin);fflush(stdout);
      scanf("%d",&Lb);
      printf("Input :");
      for(int i = 0; i < Lb; ++i) {
   	   fflush(stdin);fflush(stdout);
   	     scanf("%d",&b[i]);
             }
   for(i = 0; i < La; ++i) {
           temp[i]=a[i];
       }
   for(i = 0; i < Lb; ++i) {
             a[i]=b[i];
         }
   t=Lb;
   Lb=La;
   La=t;
   for(i = 0; i < Lb; ++i) {
             b[i]=temp[i];
         }
   printf("\nAfter swapping:\n");
       printf("Array A: ");
       for(i = 0; i < La; i++)
           printf("%d ", a[i]);

       printf("\nArray B: ");
       for(i = 0; i < Lb; i++)
           printf("%d ", b[i]);

          return 0;
    }
