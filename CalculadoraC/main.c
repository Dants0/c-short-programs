#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "calculadora.h"

float a, b;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Num_1: ");
	scanf("%f", &a);
	printf("\nNum_2: ");
	scanf("%f", &b);
	
	printf("%.2f\n", add(a,b));
	printf("%.2f\n", sub(a,b));
	printf("%.2f\n", mult(a,b));
	printf("%.2f\n", division(a,b));
	
	printf("Finish");
	
	return 0;
}
