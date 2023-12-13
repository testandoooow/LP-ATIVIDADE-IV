#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

void calculo(a){
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Tabuada de %d. %d x %d: %d\n", a, a, i + 1, a * (i + 1));
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero, tabuada;
	bool real;
	
	do{
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	real = numero <= 0 ? false : true;
	} while(!real);

	calculo(numero);
	return 0;
}
