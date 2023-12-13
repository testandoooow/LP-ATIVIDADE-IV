#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct produto_{
	char nome[250];
	float preco;
	int quantidade;
};

void menu(){
	printf("\n1 - Realizar uma compra.\n");
	printf("2 - Consultar estoque.\n");
	printf("3 - Sair do programa.\n\n");
}

void total(a){
	float valorTotal;
}

struct produto_ produto[50];

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char nome[250];
	float preco; 
	int opcao, i;
	
	menu();
	
	for(i = 0; i < 3; i++){
		printf("%dª quantidade no estoque: ",i + 1);
		scanf("%d",&produto[i].quantidade);
	}
	
	do{
		
	printf("Digite o número correspondente a uma das opções acima: ");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		quantidade--;
	}
	
	if(opcao == 2){
		for(i = 0; i < 3; i++){
		printf("Quantidade nos estoques: %d\n",produto[i].quantidade);
	}
	}
	
	if(opcao != 1 && opcao != 2){
		break;
	}
	
	menu();
		fflush(stdin);
		printf("Escreva o nome do produto: ");
		gets(produto[i].nome);
		printf("Digite o preço do produto: ");
		scanf("%f",&produto[i].preco);
		
	
	} while(opcao == 1 || opcao == 2);
	return 0;
}
