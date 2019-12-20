#include<stdio.h>
#include <string.h>
#include "txtfind.h"


int Getline(char s[]){

  int i;
  int lines = 1;
   while(s[i] != '\0'){
     if(s[i] == '\n')
       lines++;
   i++;
   }
   return lines;
}

int getword(char w[]){
    int countWords = 1;
    int i = 0;
    while(w[i] != '\0'){
       if(w[i] == ' ' || w[i] == '\n' || w[i] == '\t')
          countWords++;
    i++;
    }
    return countWords;
}


int substring(char *str1, char *str2){
  int num_matches = 0;
  int str2_size = 0;
  // If there are as many matches as there are characters in sub, then a substring exists.
  while (*str2 != '\0') {
    str2_size++;
    str2++;
  }

  str2 = str2 - str2_size;  // Reset pointer to original place.
  while (*str1 != '\0') {
    while (*str2 == *str1 && *str2 != '\0') {
      num_matches++;
      str2++;
      str1++;
    }
    if (num_matches == str2_size) {
      return 1;
    }
    num_matches = 0;  // Reset counter to 0 whenever a difference is found. 
    str1++;
  }
  return 0;
}


int similar(char *s,char *t, int n){
  int j = 0;
  int i = 0;
  int count = 0;
  int len1 = strlen(s);
  int len2 = strlen(t);
  char *sNew = s;
     if(len1 < len2)
        return 0;
     if(len1 == len2){
      while(*(s+i) != '\0' && *(t+j) != '\0'){
         if(*(s+i) != *(t+j))
            return 0;
       i++;
       j++;
     }
     return 1;
   }
    if(len1 > len2){
      while(*(s+i) != '\0' && *(t+j) != '\0'){
        if(*(s+i) != *(t+j)){
          i++; 
        }
       if(*(s+i) == *(t+j)){
          count++;
       }  
      i++;
      j++;
     }
   if(len1-count == n){
       return 1;
    }
    return 0;
  }
    
}   
    
        
        




















































