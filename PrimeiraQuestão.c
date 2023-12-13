#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct contato_{
	char nome[250];
	char numeroDeTelefone[250];
	char email[250];
};

struct contato_ contato[3];

char numero(struct contato_ *contato, char *contatos){
	
	int i;
	
	for(i = 0; i < 3; i++){
	if(strcmp(contato[i].nome, contatos) == 0){
		printf("\nNome: %s\n", contato[i].nome);
		printf("Telefone: %s\n",contato[i].numeroDeTelefone);
	return;
}
}
printf("Contato não encontrado. \n");
}

void pessoa(){
	int i;
	
	for(i = 0; i < 3; i++){
	printf("Nome: %s\n",contato[i].nome);
	printf("numero de telefone: %s\n",contato[i].numeroDeTelefone);
	printf("Email: %s\n",contato[i].email);
}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	char contatos[250];
	
	for(i = 0; i < 3; i++){
		printf("Escreva o nome: ");
		gets(contato[i].nome);
		printf("Digite o número de telefone: ");
		gets(contato[i].numeroDeTelefone);
		printf("Escreva seu email: ");
		gets(contato[i].email);
	}
	
	system("cls");
	
	printf("Digite o nome do contato que deseja pesquisar: ");
	gets(contatos);
	
	printf("\n");
	
	system("cls");
	
	
	pessoa();
	numero(contato, contatos);
	printf("\nContato especifico.\n");
	
	printf("Digite o nome do contato que deseja pesquisar: ");
	gets(contatos);
	numero(contato, contatos);
	return 0;
}
