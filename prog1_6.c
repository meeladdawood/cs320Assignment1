#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* token(char *copy);

int main(int argc, char *argv[]) {

	int loops = 0;
	int current = 0;
	if(argc > 2 ){
		 printf("Assignment #1-6, Meelad Dawood, mdawood2@sdsu.edu\n");
		 printf("ERROR! Program 6 accepts 1 command line argument.\n");
		 exit(0);
	} else if(argc == 2 && strcmp(token(argv[1]),"STR ")==0){
                 printf("Assignment #1-6, Meelad Dawood, mdawood2@sdsu.edu\n");
                 printf("ERROR! Expected integer argument.\n");
		 exit(0);
        } else {
		loops = atoi(argv[1]);
		printf("%d\n",loops);
	}

	while (current != loops) {
		char line[65];
		printf("> ");
		fgets(line, 65, stdin);
		char copy[65];
		strcpy(copy, line);
		char *word;
		char leave[]= "quit";
		word = strtok(line, " \n\t");
		int count = 0;
		while (word != NULL) {
			count++;
			word = strtok(NULL, " \n\t");
		}

		if (count > 2) {
			printf("ERROR! Incorrect number of tokens found.\n");
			count = 0;
			continue;
		} else if(strcasecmp(strtok(copy,"\n"),leave)==0){
                        exit(0);
                } else if(count == 2){
			char* str = token(copy);
			if(!strcmp(str,"STR INT ")==0){
				printf("ERROR! Expected STR INT.\n");
			} else {
				printf("%s\n", str);
			}
		} else if(count == 1){
                        char* str = token(copy);
                        if(!strcmp(str,"STR ")==0){
                                printf("ERROR! Expected STR.\n");
                        } else {
                                printf("%s\n", str);
                        }
 
		} else if (count == 0) {
			printf("ERROR! Incorrect number of tokens found.\n");
			count = 0;
			continue;
		} else {
		//	token(copy);
		}
	current++;
	}
}

char* token(char *copy){
	char* res = (char *) malloc(sizeof(char) * 3);
	char* word = strtok(copy, " \n\t");
	while (word != NULL) {
	for (int i = 0; i < strlen(word); i++) {
		if (!isdigit(word[i])) {
			strcat(res,"STR ");
                        break;
                } else if (isdigit(word[i]) && isalpha(word[i + 1])) {
			strcat(res,"STR ");
                        break;
                } else {
			strcat(res,"INT ");
			//printf("%s %s", res, "we here\n");
                        break;
                }
	}
   	word = strtok(NULL, " \n\t");
	}
	return res;
}


