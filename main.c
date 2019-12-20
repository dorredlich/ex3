#include<stdio.h>
#include<stdlib.h>
#define size 50
#include "isort.h"

int main(){
  int a[size];			
  int n;
 for(int i = 0;i < size; i++){
    printf("enter number: ");
    scanf("%d", (a+i));
}
  insertion_sort(a,size);
  for(int i = 0; i < size; i++){
    printf("%d", *(a+i));
     if(i == 49){
       break;
     }
   printf(",");
  }
  printf("\n");
  return 0;
}
  
