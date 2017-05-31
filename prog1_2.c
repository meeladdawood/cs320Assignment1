#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

    printf("Assignment #1-1, Meelad Dawood, mdawood2@sdsu.edu\n");
    char line[65];
    printf(">");
    fgets(line, 65, stdin);
    char *word;
    word = strtok(line, " \n\t");
    while (word != NULL) {
        for(int i = 0; i< strlen(word);i++){
           if(!isdigit(word[i])){
	       printf("STR ");
               break;
	   } else {
	       printf("INT ");
               break;
	   }
	}
        word  = strtok(NULL, " \n\t");
    }
 
}

