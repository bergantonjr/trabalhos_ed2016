#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
	TRABALHO DESENVOLVIDO PELOS ALUNOS:
	Eliseu Berganton Junior		RA: 0030481523012
	Luciano Abreu Leal			RA: 0030481523025
*/

typedef struct {
	int codigo;
	float peso;
	char sexo;
} hospede;

typedef struct no{
	hospede info;
	struct no *proximo;
};

int maisPesado(struct no *inicio){
	
}

int menosPesado(struct no *inicio){
	
}

int mostrarPessoa(struct no *inicio) {
	int codigoDig, i, indicePessoa, erro, comeco = 0, tamanho;	
}

int inserirPessoa(struct no **inicio) {
	int novoCodigo, i, erro, comeco = 0, tamanho;
	float novoPeso;
	char novoSexo;
	struct no *novoelemento, *elementoatual;
	scanf("%i", &novoCodigo);
	scanf("%f", &novoPeso);
	scanf(" %[^\n]c", &novoSexo);
	if(*inicio == NULL){
		*inicio = malloc(sizeof(struct no));
		//aux = inicio;
		(*inicio)->info.codigo = novoCodigo;
		(*inicio)->info.peso = novoPeso;
		(*inicio)->info.sexo = novoSexo;
		(*inicio)->proximo = NULL;
	}
	else{
		elementoatual = *inicio;
		while(elementoatual->proximo != NULL){
			elementoatual = elementoatual->proximo;
		}
		novoelemento = malloc(sizeof(struct no));
		novoelemento->info.codigo = novoCodigo;
		novoelemento->info.peso = novoPeso;
		novoelemento->info.sexo = novoSexo;
		novoelemento->proximo = NULL;
		elementoatual->proximo = novoelemento;
	}
}

 int removerPessoa(struct no *inicio) {
	int codigoDig, i, erro, comeco = 0, tamanho;
	int indicePessoa;
} 

int numeroPessoas(struct no *inicio) {
	
}

int listarPessoas(struct no *noatual) {
	while(noatual != NULL){
		printf("Codigo= %d \nPeso= %.1f \nSexo= %c \n", noatual->info.codigo, noatual->info.peso, noatual->info.sexo);
		noatual = noatual->proximo;
	}
}


int main(){
	char opcao;
	int mens;
	int cadastrados;
	struct no *inicio = NULL;
	printf("\33[H\33[2J");
	printf("*****************************************************\n");
	printf("*  Sistema de Controle - Vigilantes do Peso - SCVP  *\n");
	printf("*****************************************************\n\n\n");
	do {

		printf("Digite a opcao desejada: \n\n");
		printf("1. Mais pesado\n");
		printf("2. Menos pesado\n");
		printf("3. Consultar pessoa\n");
		printf("4. Inserir pessoa\n");
		printf("5. Remover pessoa\n");
		printf("6. Numero de pessoas\n");
		printf("7. Mostrar pessoas\n");
		printf("8. Fim\n\n");
		
		scanf(" %[^\n]c", &opcao);
		switch(opcao){
			case 49:
				mens = maisPesado(inicio);
				break;
			case 50:
				mens = menosPesado(inicio);
				break;
			case 51:
				mens = mostrarPessoa(inicio);
				break;
			case 52:
				inserirPessoa(&inicio);
				break;
			case 53:
				removerPessoa(inicio);
				break;
			case 54:
				mens = numeroPessoas(inicio);
				break;
			case 55:
				mens = listarPessoas(inicio);
				break;
			case 56:
				printf("\n\nObrigado por ter usado nosso sistema!\n\n");
				break;
			default: 
				printf("\n\nOpção Inválida!\n\n");
				printf("\n\nVocê deve digitar apenas números de 1 até 8!\n\n");
		}

		printf("\n\n\n");

	} while( opcao!=56 );

	return 0;
}
