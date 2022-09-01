#include<stdio.h>
#include<stdlib.h>
#define SIZE 200
#include<string.h>
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

void cadastro();
void pesquisa();

int main(void){
	cadastro();
	pesquisa();
	
}
void cadastro(){
	static int linha;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf("\nDigite o email: ");
		scanf("%s", &email[linha]);
		printf("\nDigite o cpf: ");
		scanf("%d", &cpf[linha]);
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d", &op);
		linha++;
	}while(op==1);
}//fim da função de cadastro
void pesquisa(){
	int cpfPesquisa;
	char emailPesquisa[50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar CPF ou 2 para pesquisar o email");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\nDigite o CPF: ");
				scanf("%d", &cpfPesquisa);
				for(i=0;i<SIZE;i++){
					if(cpf[i]==cpfPesquisa){
						printf("\nNome: %s\nEmail: %s CPF: %d", nome[i], email[i],cpf[i]);
					}
				}
				break;
			case 2:
			printf("\nDigite o E-mail");
			scanf("%s", &emailPesquisa);				
			for(i=0;i<SIZE;i++){
					if(strcmp(email[i],emailPesquisa)==0){
						printf("\nNome: %s\nEmail: %s \nCPF: %d", nome[i], email[i],cpf[i]);
					}
				}
				break;
			default:
				printf("\n Opçao invalida");
				break;
				
		}
		printf("\nDigite 1 para continuar pesquisando");
		scanf("%d",&op);
	}while(op==1);
}//fim da funçao de pesquisa 
