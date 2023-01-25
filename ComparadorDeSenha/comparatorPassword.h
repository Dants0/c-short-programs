#ifndef comparatorPassword

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void compare(char passwordParam[]){
	char password[] = "gui";
	int result;
	
	result = strcmp(password, passwordParam);
	
	if(result == 0){
		printf("Senhas iguais.");
	}else{
		printf("\nSenhas diferentes.");
	}
	
	printf("\nSenha: %s", passwordParam);
	printf("\nSenha original: %s", password);
}

#define comparatorPassword
#endif
