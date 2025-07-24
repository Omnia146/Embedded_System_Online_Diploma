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
  printf("\nEnter element to be inserted:");
  fflush(stdin);fflush(stdout);
    scanf("%d",&input);
  printf("\nEnter location: ");
  fflush(stdin);fflush(stdout);
    scanf("%d",&l);
  for(i=n;i>=l;i--){
  		a[i]=a[i-1];
  		}
  n++;
  a[l-1]=input;
  for(i=0;i<n;i++){
     printf("%d ",a[i]);

  }

          return 0;
    }
