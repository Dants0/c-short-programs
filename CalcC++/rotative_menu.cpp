//rotative menu

#include <iostream>
#include <locale.h>
#include "calculadora.h"

using namespace std;

float a,b;

void message(){
	cout<<"--- Calculadora Rotativa em C++ ---\n";
}

void calculoDiv(){
	cout << "Dividir dois números: \n";
    cout << "Primeiro número: ";
    cin  >> a;
    cout << "Segundo número: ";
    cin  >> b;
    cout << "Resultado: " << dividir(a,b) << "\n";
}

void calculoMult(){
	cout << "Multiplicar dois números: \n";
    cout << "Primeiro número: ";
    cin  >> a;
    cout << "Segundo número: ";
    cin  >> b;
	cout << "Resultado: " << mult(a,b)  << "\n";
}

void calculoSub(){
	cout << "Subtrair dois números: \n";
    cout << "Primeiro numero: ";
	cin >> a;
    cout << "Segundo numero: ";
    cin >> b;
    cout <<"Resultado: " << sub(a,b)  << "\n";
}

void calculoSum(){
	cout << "Somar dois números: \n";
    cout << "Primeiro numero: ";
    cin >> a;
    cout << "Segundo numero: ";
	cin >> b;
    cout <<"Resultado: " << sum(a,b)  << "\n";
}

void menu(int option){
	while (option != 5) {
		cout << "-------------------------------------------\n";
        cout << "Menu:\n"
                  << "1. Somar\n"
                  << "2. Subtrair\n"
                  << "3. Multiplicar\n"
                  << "4. Dividir\n"
                  << "5. Sair\n"
                  << "Enter your option: ";
        cin >> option;
        system("cls");
        switch (option) {
            case 1:
				calculoSum();
                break;
                system("cls");
            case 2:
				calculoSub();
                break;
                system("cls");
            case 3:
				calculoMult();
                break;
                system("cls");
            case 4:
				calculoDiv();
                break;
                system("cls");
            case 5:
            	cout << "Saindo...\n";
                break;
            default:
                cout << "Invalid option.\n";
                break;
        }
    }
}

int main(){
	setlocale(LC_ALL,"portuguese");
	message();
	int i = 0;
	menu(i);
	system("cls");
	return 0;
}
