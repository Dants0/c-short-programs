#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[50];
	char nascimento[15];
	char CPF[15];
} Pessoa;

typedef struct node
{
	Pessoa pessoa;
	struct node *next;
	int key;
} node;

void inserir (node **head);
void printList(node **nod);
void alterar (node **head);
void alterar_aux (node **aux);
void excluir (node **head);
void consulta (node *head);

int key_v = 0;

int main(void)
{
	node *head = NULL;
	int opc = 0;
	
	while(opc != 5)
	{
		system("cls");
		printf("1.Inserir \n2.Alterar \n3.Excluir \n4.Consultar \n5.Sair");
		printf("\n\nDigite sua opcao:");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1:
				inserir(&head);
				break;
			case 2:
				alterar(&head);
				break;
			case 3:
				excluir(&head);
				break;
			case 4:
				consulta(head);
				break;
			case 5:
				break;
			default:
				break;
		}
		
	}
	printList(&head);
}

void consulta (node *head)
{
	system("cls");
	node *atual = head;
	int sel_consulta;
	char store[50];
	
	printf("Digite o dado que voce deseja procurar:");
	printf("\n\n1.Nome \n2.Data de Nascimento \n3.CPF\n4.Imprimir Todos\n\nSelecione: ");
	scanf("%d", &sel_consulta);
	
	fflush(stdin);
	
	system("cls");
	switch(sel_consulta)
	{
		case 1:
			printf("Digite o nome a ser procurado:");
			gets(store);
			break;
		case 2:
			printf("Digite a data de nascimento a ser procurada:");
			gets(store);
			break;
		case 3:
			printf("Digite o CPF a ser procurado:");
			gets(store);
			break;
		case 4:
			printList(&head);
			return;
		default:
			break;
	}
	
	printf("\n");
	while(atual != NULL)
	{
		if(strcmp(store, atual->pessoa.nome) == 0)
		{
			printf("Nome: %s \nData de Nascimento: %s\nCPF: %s\nKey: %d\n\n", atual->pessoa.nome, atual->pessoa.nascimento, atual->pessoa.CPF, atual->key);
			system("pause");
			return;
		}
		
		if(strcmp(store, atual->pessoa.nascimento) == 0)
		{
			printf("Nome: %s \nData de Nascimento: %s\nCPF: %s\nKey: %d\n\n", atual->pessoa.nome, atual->pessoa.nascimento, atual->pessoa.CPF, atual->key);
			system("pause");
			return;
		}
		
		if(strcmp(store, atual->pessoa.CPF) == 0)
		{
			printf("Nome: %s \nData de Nascimento: %s\nCPF: %s\nKey: %d\n\n", atual->pessoa.nome, atual->pessoa.nascimento, atual->pessoa.CPF, atual->key);
			system("pause");
			return;		
		}
		
		atual = atual->next;
	}
	
	printf("\nDado nao encontrado\n");
	system("pause");
	return;
}

void excluir (node **head)
{
	system("cls");
	
	int temp_key;
	node *temp = *head;
	node *excluir;
	printf("Digite a chave do dado a ser excluido: ");                                          
	scanf("%d", &temp_key);
	
	if((temp != NULL && temp->key == temp_key))                            
	{                                                                     
		*head = temp->next;
		free(temp);                                                                                                             
		printf("\nExcluido com sucesso!\n");
		system("pause");                                                                          
		return;
	}
	
	while(temp != NULL)
	{
		if(temp->next->key == temp_key)
		{
			excluir = temp->next;
			temp->next = temp->next->next;
			free(excluir);
			
			printf("\nExcluido com sucesso!\n");
			system("pause");
			return;
		}
		temp = temp->next;
	}
	
	printf("\nChave nao encontrada\n");
	system("pause");
	return;
}
void alterar (node **head)
{
	system("cls");
	int key_tmp;
	node *n = *head;
	
	printf("Insira a chave do dado a ser alterado: ");
	scanf("%d", &key_tmp);

	while(n != NULL)
	{
		// Chave encontrada
		if(n->key == key_tmp)
		{
			alterar_aux(&n);
			return;
		}
		n = n->next;
	}
	
	system("cls");
	printf("\n\nChave nao encontrada\n");
	system("pause");
	return;
}

void alterar_aux (node **aux)
{
	int sel_aux;
	printf("\nQual campo voce deseja alterar?");
	printf("\n1.Nome \n2.Data de Nascimento \n3.CPF \n4.Todos\nSelecione: ");
	scanf("%d", &sel_aux);
	
	fflush(stdin);
	
	printf("\n");
	switch(sel_aux)
	{
		case 1:
			printf("Digite o novo nome: ");
			gets((*aux)->pessoa.nome);
			break;
		case 2:
			printf("Digite a nova data de nascimento: ");
			gets((*aux)->pessoa.nascimento);
			break;
		case 3:
			printf("Digite o novo CPF: ");
			gets((*aux)->pessoa.CPF);
			break;
		case 4:
			printf("Digite o novo nome: ");
			gets((*aux)->pessoa.nome);
			
			printf("Digite a nova data de nascimento: ");
			gets((*aux)->pessoa.nascimento);
			
			printf("Digite o novo CPF: ");
			gets((*aux)->pessoa.CPF);
			break;
		default:
			break;
	}
}

void inserir (node **head)
{
	node *temp = (node *) malloc(sizeof(node));
	
	Pessoa temp_p;
	system("cls");
	fflush(stdin);
		
	printf("Digite o nome: ");
	gets(temp_p.nome);
	printf("Digite a data de nascimento: ");
	gets(temp_p.nascimento);
	printf("Digite o CPF: ");
	gets(temp_p.CPF);
	
	temp->pessoa = temp_p;
	
	temp->next = (*head);
	
	temp->key = key_v;
	key_v++;
	
	(*head) = temp;
	
	return;
}


void printList(node **nod) 
{ 
	while ((*nod) != NULL) 
	{  	
		printf("Nome = %s ", (*nod)->pessoa.nome);
		printf("\nData = %s ", (*nod)->pessoa.nascimento);
		printf("\nCPF = %s ", (*nod)->pessoa.CPF);
		printf("\nKey = %d\n\n ", (*nod)->key);
		(*nod) = (*nod)->next; 
	} 
	system("pause");
} 
