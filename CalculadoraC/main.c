#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "calculadora.h"

float a, b;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Num_1:");
	scanf("%f", &a);
	printf("Num_2:");
	scanf("%f", &b);
	
	printf("--------------------------------\n");
	
	printf("Soma: %.2f\n", add(a,b));
	printf("Subtração: %.2f\n", sub(a,b));
	printf("Multiplicação: %.2f\n", mult(a,b));
	printf("Divisão: %.2f", division(a,b));
	
	return 0;
}
