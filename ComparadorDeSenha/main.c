#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "comparatorPassword.h"


int main(){
	setlocale(LC_ALL,"portuguese");
	char password[250];
	printf("Digite sua senha: ");
	gets(password);
	compare(password);
	return 0;
}
