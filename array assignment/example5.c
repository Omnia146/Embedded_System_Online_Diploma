



#include <stdio.h>
int main() {

   int a[100];
    int i,n,input,l;
   printf("Enter no of elements:");
  fflush(stdin);fflush(stdout);
  scanf("%d",&n);
  for(i=0;i<n;i++){
	   fflush(stdin);fflush(stdout);
	   scanf("%d",&a[i]);
  }
  printf("\nEnter element to be searched:");
  fflush(stdin);fflush(stdout);
    scanf("%d",&input);
    for(i=0;i<n;i++){
    	if(input==a[i]){
  		l=i+1;
  		}
    }

    printf("\nNumber found at location= %d ",l);

          return 0;
    }
