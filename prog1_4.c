#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void FlushStdin(void);

int main() {

	printf("Assignment #1-4, Meelad Dawood, mdawood2@sdsu.edu\n");
	while (1) {
		char line[20];
		printf("> ");
		fgets(line, 21, stdin);
		char copy[20];
		strcpy(copy, line);
		char *word;
		word = strtok(line, " \n\t");
		int count = 0;
		char leave[]= "quit";
		while (word != NULL) {
			count++;
			word = strtok(NULL, " \n\t");
		}
		
		if(strlen(copy) >=  20){
                        FlushStdin();
                        printf("ERROR! Input string too long.\n");
                        continue;
                } else if (count > 2) {
			printf("ERROR! Incorrect number of tokens found.\n");
			count = 0;
			continue;
                } else if (count == 0) {
			printf("ERROR! Incorrect number of tokens found.\n");
			count = 0;
			continue;
		} else if(strcasecmp(strtok(copy,"\n"),leave)==0){
			exit(0);
		}  else {
			word = strtok(copy, " \n\t");
			while (word != NULL) {
				for (int i = 0; i < strlen(word); i++) {
					if (!isdigit(word[i])) {
						printf("STR ");
						break;
					} else if (isdigit(word[i]) && isalpha(word[i + 1])) {
						printf("STR ");
						break;
					} else {
						printf("INT ");
						break;
					}
				}
				word = strtok(NULL, " \n\t");
			}
			exit(0);
		}
	}
}

void FlushStdin(void) {
  int ch;
  while(((ch = getchar()) !='\n') && (ch != EOF));
}

