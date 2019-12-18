#include<stdio.h>
#include<stdlib.h>
#define size 50
#include "isort.h"

int main(){
  int a[size];			
  int n;
 for(int i = 0;i < size; i++){
    *(a+i) = rand()%100 + 1;
}
  insertion_sort(a,size);
  for(int i = 0; i < size; i++){
     if(i == 0)
       printf("[");
	printf("%d", *(a+i));
     if(i == 49){
       printf("]");
       break;
     }
   printf(",");
  }
  printf("\n");
  return 0;
}
  
