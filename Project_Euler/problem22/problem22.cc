#include <stdio.h>
#include <string.h>
#define STRING_SIZE 256

int main(){
	char name[STRING_SIZE];
	char *names[100];
	int i=0;
	FILE * fp = fopen("names.txt", "r");
	if (fp != NULL){
		char buffer[STRING_SIZE];
		while (!feof(fp)){
			fgets(buffer, sizeof(buffer), fp);
			char *ptr=strtok(buffer, ",");
			while(ptr!=NULL){
				/*
				for(int i=2; ptr[i]!='\0';i++)
					printf("%c", ptr[i-1]);
				ptr=strtok(NULL, ",");
				printf(" ");
				*/
				printf("%s ", ptr);
				strcpy(names[i], ptr);
				ptr=strtok(NULL, ",");
				i++;
			}
		}
		/*
		for (int j=0; j<100; j++)
			printf("%s ", names[j]);
		*/
	}
		
	return 0;
}
