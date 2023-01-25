//sistema de hotel.
//reserva, altera, exclui.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato {
	char nome[30];
	char telefone[15];
	int numero_hospedes;
	bool disponivel;
};

struct contato reservas[30][8]; //fazendo a matriz de um hotel com 30 andares e 8 apartamentos em cada andar.

void inicializar(){
	int i, j;
	
	for(i=0;i<=29;i++){
		for(j=0;j<=7;j++){
		
			strcpy(reservas[i][j].nome, " ");
			strcpy(reservas[i][j].telefone, " ");
			reservas[i][j].numero_hospedes=0;
			reservas[i][j].disponivel=true;
		}
	}	
}

void incluir(){
	int i, j;
	printf("Qual o andar desejado?:");
	scanf("%d", &i);
	printf("Qual apartamento?:");
	scanf("%d", &j);
		if(reservas[i][j].disponivel){
			printf("Esta disponivel. digite suas informacoes\n");
			
				printf("Digite o nome do hospede: ");
				fflush(stdin);
				gets(reservas[i][j].nome);
			
				printf("Digite o telefone do hospede: ");
				fflush(stdin);
				gets(reservas[i][j].telefone);
			
				printf("Digite  a quantidade de hospedes no quarto: ");
				scanf("%d", &reservas[i][j].numero_hospedes);
			
				reservas[i][j].disponivel=false;
			
		}else{
	
	printf("Este apartamento %d-%d esta ocupado\n\n", i, j);

	system("PAUSE");
}
}

void alterar(){
	int i, j;
	printf("Digite qual apartamento deseja alterar o cadastro\n\n");
	printf("Andar: \n");
	scanf("%d", &i);
	printf("Apartamento: \n");
	scanf("%d", &j);
	
	if(!reservas[i][j].disponivel){
		
		printf("Digite o nome: \n");
		fflush(stdin);
		gets(reservas[i][j].nome);
		
		printf("Digite o telefone: \n");
		fflush(stdin);
		gets(reservas[i][j].telefone);
		
		printf("Digite o numero de hospedes: \n");
		scanf("%d", &reservas[i][j].numero_hospedes);
		
		printf("Reserva alterada\n");

		system("PAUSE");

	}else{
		
		printf("O Apartamento %d-%d nao esta ocupado\n\n", i, j);
		system("PAUSE");
	}
	
	
}

void excluir(){
	int i, j;
	
	printf("Digite qual apartamento deseja excluir do cadastro... \n");
	printf("Andar: \n");
	scanf("%d", &i);
	printf("Apartamento: \n");
	scanf("%d", &j);
	
	if(!reservas[i][j].disponivel){
	
	strcpy(reservas[i][j].nome, " ");
	strcpy(reservas[i][j].telefone, " ");
	reservas[i][j].numero_hospedes=0;
	reservas[i][j].disponivel=true;
	 
	printf("Cadastro Excluido...\n");
	system("PAUSE");
	
}else{
	
	printf("Este apartamento esta vago...\n\n");
	
	system("PAUSE");
}
}

void consultar(){
	int i, j, opcao;
	printf("1 - visualizar todos os apartamentos\n");
	printf("2 - visualizar um apartamento especifico\n\n");
	printf("Digite qual sua opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: 
		for(i=0;i<=29;i++){
			for(j=0;j<=7;j++){
				if(!reservas[i][j].disponivel){
printf("Apartamento: [%d-%d], %s, %s, %d hospedes\n", i, j, reservas[i][j].nome, reservas[i][j].telefone, reservas[i][j].numero_hospedes);	
				}else{
printf("Apartamento: [%d-%d] esta disponivel\n", i, j);					
				}
			}
		}
		system("PAUSE");
		break;
		
		case 2:
			printf("Digite qual o apartamento voce quer visualizar\n");
				printf("Andar:\n");
					scanf("%d", &i);
						printf("Apartamento:\n");
							scanf("%d", &j);
							if(!reservas[i][j].disponivel){
printf("Apartamento: [%d-%d], %s, %s, %d hospedes\n", i, j, reservas[i][j].nome, reservas[i][j].telefone, reservas[i][j].numero_hospedes);
		}else{
			
			printf("Apartamento disponivel\n");
			
		break;	
	}
		default:
			printf("opcao invalida");
			break;
		
	}
	system("PAUSE");
}

int main(){
	inicializar();	
			
	int opc;
	while(opc!=5){
		
		printf("\n\n---------Menu--------\n\n");
		printf("1 - Incluir Reserva\n\n");
		printf("2 - Alterar Reserva\n\n");
		printf("3 - Excluir Reserva\n\n");
		printf("4 - Consultar Reserva\n\n");
		printf("5 - Sair\n\n");
		printf("Digite a sua opcao: ");
		scanf("%d", &opc);
		
		switch(opc){
			
			case 1: 
			incluir();
			break;
			
			case 2:
			alterar();
			break;
			
			case 3:
			excluir();
			break;
				
			case 4:
			consultar();
			break;
			
			case 5:
			system("cls");
			break;
				
			default:
			printf("\nopcao invalida!!\n\n");
			system("pause");
			break;
		}
		system("cls");
	}
	
	
	system("PAUSE");
}
