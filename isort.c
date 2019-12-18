#include<stdio.h>
#include "isort.h"


void shift_element(int *arr, int i){
	int n;
	for(n = i; n > 0 ; n--){
		*(arr+n) = *(arr+n-1);	
	}
   if(i > 0){
     *(arr) = 999;
   }
}
  

void insertion_sort(int *arr, int len){

 int i, j, temp;
 int index = 0;
 int count = 0;
 for(i = 1; i < len; i++){
   temp = *(arr+i);
   j = i - 1;
   while(temp < *(arr+j) && j >= 0){
      count++;
      j--;
   }
  if(count>0){
     index = i-count;
}
  shift_element((arr+index),count);
  *(arr+(j+1)) = temp;
  count = 0;
  index = 0;
 } 
}
