#include<stdio.h>
#include<string.h>
#include "txtfind.h"

int main(){

 char c = ' ';
 char word1[WORD];
 char word2[WORD];
 char line[LINE];
 fgets(line,LINE,stdin); 
 int i = 0;
 int countWord1 = 0;
 while(i < LINE){
   if(line[i] != '\n' && line[i] != ' ' && line[i] != '\t' && line[i] != '\0')
            word1[countWord1++] = line[i];
     else{break;}        
   i++;  
 }
 i++;
 word1[i] = '\0';
 c = line[i];
 int ch;
 fgets(line,LINE,stdin);
 if(c == 'a'){
   while(fgets(line,LINE,stdin)){
      int countWord = 0;
      for(int j = 0; j <= LINE && line[j] != '\0'; j++){
         if(line[j] != '\n' && line[j] != ' ' && line[j] != '\t' && line[j] != '\0'){
            word2[countWord] = line[j];
            countWord++;
        }else{
            if(substring(word2,word1)){
                 printf("%s", line);
                 countWord = 0;
                 break;
            }
         countWord = 0;
      }
     }
   } 
 }

 
  if(c == 'b'){
   while(fgets(line,LINE,stdin)){
      int countWord = 0;
      for(int j = 0; j <= LINE && line[j] != '\0'; j++){
         if(line[j] != '\n' && line[j] != ' ' && line[j] != '\t' && line[j] != '\0'){
            word2[countWord] = line[j];
            countWord++;
          }else{
            if(similar(word2,word1,1)){
                 printf("result: %s\n", word2);
              }
         countWord = 0;
         memset(word2,0,strlen(word2));
        }
     }
   } 
  }
 return 0;
}
