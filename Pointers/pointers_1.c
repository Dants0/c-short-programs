//pointers


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int* p1, p2, p3;
	
	p2= 5;
	p3= 2;
	
	
	p1= &p2;
	printf("%d", *p1); //output 5
	
	p1= &p3; 
	printf("%d", *p1); //output 2
	
	
	
	//printf("%d", p2);
}

