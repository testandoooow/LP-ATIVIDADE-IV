#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct Aluno_{
    char nome[250];
    char dataDeNascimento[250];
    float notas[2];
    float media;
};

struct Aluno_ Aluno[5];

float calcularMedia(struct Aluno_ Aluno){
    return (Aluno.notas[0] + Aluno.notas[1]) / 2.0;
}

void verificarAprovacao(struct Aluno_ Aluno){
    if (Aluno.media >= 7.0) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
}

int main(){
	setlocale(LC_ALL, "portuguese");
    int i, j;

    for (i= 0; i < 5; i++){
        printf("Nome do aluno %d: ",i + 1);
        gets(Aluno[i].nome);

        printf("Data de nascimento: ");
        gets(Aluno[i].dataDeNascimento);
        
        for(j = 0; j < 2; j++){
        printf("%dª Nota: ",j + 1);
        scanf("%f",&Aluno[i].notas[j]);
    }
        fflush(stdin);

        Aluno[i].media = calcularMedia(Aluno[i]);
    }
    
    system("cls");
    
    for (i = 0; i < 5; i++){
        printf("Nome: %s\n",Aluno[i].nome);

        for(j = 0; j < 2; j++){
        printf("%dª Nota: %.1f\n",j + 1,Aluno[i].notas[j]);
		}
		printf("Média: %.1f\n",Aluno[i].media);
        verificarAprovacao(Aluno[i]);
    }

    return 0;
}
