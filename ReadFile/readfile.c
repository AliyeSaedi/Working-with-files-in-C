#include <stdio.h>
#include <stdlib.h>

int main(){
	char mytxt[50];
	FILE *fptr;
	fptr = fopen("mytext.txt","r");
	
	if(fptr == NULL){
		printf("File is EMPTY!");
		exit(1);
	}
	
	fscanf(fptr,"%s",&mytxt);
	printf("note in file is: %s",mytxt);
	fclose(fptr);
	
}