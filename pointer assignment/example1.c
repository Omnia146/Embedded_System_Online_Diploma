#include <stdio.h>
#include <string.h>
int main() {
int m=29;
int* ab;
 printf("Address of m :%p\n",&m);
 printf("Address of m :%d\n",m);
 ab=&m;
 printf("Address of pointer :%p\n",ab);
 printf("content of pointer :%d\n",*ab);
 m=34;
 printf("The value of m assigned to %d now.\n",m);
 printf("Address of pointer :%p\n",ab);
 printf("content of pointer :%d\n",*ab);
 *ab=7;
 printf("The pointer variable ab is assigned with the value %d now.\n",*ab);
 printf("Address of m :%p\n",&m);
  printf("Address of m :%d\n",m);
    return 0;
}
