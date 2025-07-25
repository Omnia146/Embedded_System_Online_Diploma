#include <stdio.h>
#include <string.h>

void search_index(int s[],int a,int l){
	int i,temp=-1;
	for(i=l-1;i>=0;i--){
		if (a==s[i]){
			temp=i;
	       break;
		}
		   }

	printf("result = %d",temp);
}
int main() {

  int s[100],n,i,k;
   printf("enter number of element :");
  fflush(stdin);fflush(stdout);
   scanf("%d",&n);
   printf("Input :");
   for(i = 0; i < n; ++i) {
	   fflush(stdin);fflush(stdout);
	     scanf("%d",&s[i]);
          }
   printf("the number is :");
     fflush(stdin);fflush(stdout);
      scanf("%d",&k);
   search_index(s,k,n);

          return 0;
    }
