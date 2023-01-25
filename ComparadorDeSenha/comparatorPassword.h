#ifndef comparatorPassword

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void compare(char phrase[]){
	char message[] = "gui";
	int result;
	
	result = strcmp(message, phrase);
	
	if(result == 0){
		printf("Mensagens iguais.");
	}else{
		printf("\nMensagens diferentes.");
	}
	
	printf("\nFrase: %s", phrase);
	printf("\nMensagem original: %s", message);
}

#define comparatorPassword
#endif
