#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    printf("\nAssignment #1-1, Meelad Dawood, mdawood2@sdsu.edu\n");
    char line[65];
    fgets(line, 65, stdin);
    char *word;
    word = strtok(line, " ");
    while (word != NULL) {
        printf("=%s=\n", word);
        word  = strtok(NULL, " ");
    }
 
}

