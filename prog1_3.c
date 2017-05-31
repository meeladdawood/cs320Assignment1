#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

    
    printf("Assignment #1-3, Meelad Dawood, mdawood2@sdsu.edu\n");
    while(1){
    char line[65];
    printf("> ");
    fgets(line, 65, stdin);
    char copy[65];
    strcpy(copy, line);
    char *word;
    word = strtok(line, " \n\t");
    int count = 0;
    while(word != NULL){
        count++;
        word  = strtok(NULL, " \n\t");
    }

    if(count > 2){
        printf("ERROR! Incorrect number of tokens found.\n");
        count =0;
	continue;
    } else  if(count == 0){
        printf("ERROR! Incorrect number of tokens found.\n");
        count =0;
        continue;
    } 
     else {
       word = strtok(copy, " \n\t");
    while (word != NULL) {
        for(int i = 0; i< strlen(word);i++){
           if(!isdigit(word[i])){
	       printf("STR ");
               break;
	   } else if(isdigit(word[i]) && isalpha(word[i+1])){
               printf("STR ");
               break;
	   } else {
	       printf("INT ");
               break;
	   }
	}
        word  = strtok(NULL, " \n\t");
    }
    exit(0);  
  }
 }
}


