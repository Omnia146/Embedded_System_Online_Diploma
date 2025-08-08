#include <stdio.h>
#include <string.h>
int main() {
int arr[15];
int* p;
int i,j;
p=arr;
printf("Input the number of elements to store in the array (max 15) :  ");
fflush(stdin);fflush(stdout);
scanf("%d",&i);
 printf("Input %d number of elements in the array :\n",i);
for(j=0;i>j;j++){
 printf("element - %d : ",j+1);
 fflush(stdin);fflush(stdout);
 scanf("%d",p);
 p++;
}
p=&arr[i-1];
printf("The elements of array in reverse order are :\n");
for(j=i-1;j>=0;j--){
 printf("element - %d : %d\n",j+1,*p);
 p--;
}

    return 0;
}
