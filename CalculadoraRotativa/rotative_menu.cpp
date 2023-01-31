//rotative menu

#include <iostream>
#include <locale.h>

float a,b;

void message(){
	std::cout<<"Messagem teste"<<std::endl;
}

float sum(float a, float b){
	return  a+b;
}

float sub(float a, float b){
	return  a-b;
}

float mult(float a, float b){
	return a*b;
}

float dividir(float a, float b){
	return a/b;
}

void calculoDiv(){
	std::cout << "Dividir dois números: \n";
    std::cout << "Primeiro número: ";
    std::cin  >> a;
    std::cout << "Segundo número: ";
    std::cin  >> b;
    std::cout << "Resultado: " << dividir(a,b) << std::endl;
}

void menu(int option){
	while (option != 5) {
        std::cout << "Menu:\n"
                  << "1. Somar\n"
                  << "2. Subtrair\n"
                  << "3. Multiplicar\n"
                  << "4. Dividir\n"
                  << "5. Sair\n"
                  << "Enter your option: ";
        std::cin >> option;
        system("cls");
        switch (option) {
            case 1:
                std::cout << "Somar dois números: \n";
                std::cout << "Primeiro numero: ";
                std::cin >> a;
                std::cout << "Segundo numero: ";
                std::cin >> b;
                std::cout <<"Resultado: " << sum(a,b) << std::endl;
                break;
                system("cls");
            case 2:
                std::cout << "Subtrair dois números: \n";
                std::cout << "Primeiro numero: ";
                std::cin >> a;
                std::cout << "Segundo numero: ";
                std::cin >> b;
                std::cout <<"Resultado: " << sub(a,b) << std::endl;
                break;
                system("cls");
            case 3:
                std::cout << "Multiplicar dois números: \n";
                std::cout << "Primeiro número: ";
                std::cin  >> a;
                std::cout << "Segundo número: ";
                std::cin  >> b;
                std::cout << "Resultado: " << mult(a,b) << std::endl;
                break;
                system("cls");
            case 4:
				calculoDiv();
                break;
                system("cls");
            case 5:
            	std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Invalid option.\n";
                break;
        }
    }
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int i = 0;
	menu(i);
	system("cls");
	return 0;
}
