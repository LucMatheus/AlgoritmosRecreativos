#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 5

struct Lista
{
	char Nome[30];
}Registros[TAM];

void InserirRegistro();
void DeletarRegistro();
void EditarRegistro();
void Relatorio();

int LAN=103;
int i=0,op=0,t=0;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	
	do{
		system("cls");
		//Para Português
		if(LAN==103){
		printf("= = = LISTA = = =");
		printf("\n");
		printf("1 - Inserir Dados na Lista");
		printf("\n2 - Editar dados na Lista");
		printf("\n3 - Deletar dados na Lista");
		printf("\n4 - Gerar Relatório");
		printf("\n5 - Sair");
		printf("\n**[NEW] OPÇÕES DE LINGUAGEM***");
		printf("\n101 - English (USA)");
		printf("\n103 - Português do Brasil");
		printf("\n******\n");
		printf("OPÇÃO :");
		}
		//Para Inglês
		else
		{
		printf("= = = LIST = = =");
		printf("\n");
		printf("1 - Insert Datas");
		printf("\n2 - Edit Datas");
		printf("\n3 - Erase Files");
		printf("\n4 - Generate Report");
		printf("\n5 - Exit of Program");
		printf("\n**LANGUAGES***");
		printf("\n101 - English (USA)");
		printf("\n103 - Português do Brasil");
		printf("\n******\n");
		printf("OPTION :");	
		}
		scanf("%d",&op);
		system("cls");
		fflush(stdin);
		switch(op)
		{
		case 1:
			InserirRegistro();
			break;
		case 2:
			EditarRegistro();
			system("PAUSE");
			break;
		case 3:
			DeletarRegistro();
			system("PAUSE");
			break;
		case 4:
			Relatorio();
			system("PAUSE");
			break;
		case 5:
			break;
		case 101:
			LAN=101;
			break;
        case 103:
        	LAN=103;
        	break;
		default:
			printf("Opção Invalida ou Inexistente\n");
			break;
		}	
	
	}while(op!=5);
	
	printf("Fechando o programa / Finishing the program\n");
	return 0;
}
/* FUNÇÕES */

void InserirRegistro(){
	char NomeAux[30];
	i = t;
	if(t==TAM){
		if(LAN == 103){
			printf("LISTA CHEIA - ELIMINE PELO MENOS UM REGISTRO\n");
		}
		if(LAN == 101){
			printf("FULL LIST, PLEASE REMOVE, AT LEAST 1 REGISTER\n");
		}
		system("PAUSE");
	}
	else
	{
		if(LAN == 103){
			printf("Digite um nome :");
		}
		if(LAN == 101){
			printf("Insert one name :");
		}
		fgets(NomeAux,29,stdin);
		fflush(stdin);
		strcpy(Registros[i].Nome,NomeAux);
		i++;
		t++;
	}
}

void EditarRegistro(){
	int i;
	printf("|ID| --- | NOME/NAME                |\n");
	for(i=0;i<TAM;i++){
		printf("|%2d| --- |%s |\n",i+1,Registros[i].Nome);
	}
	
	printf("\n");
	if (LAN==103){
		printf("Primeiro, qual o ID do registro :");
	}
	if (LAN==101){
		printf("First of all, which ID? :");
	}
	scanf("%d",&i);
	fflush(stdin);
	i--;
	strcat(Registros[i].Nome," [*] ");
	/*Estética*/
	system("cls");
	printf("|ID| --- | NOME/NAME                |\n");
	for(i=0;i<TAM;i++){
		printf("|%2d| --- |%s |\n",i+1,Registros[i].Nome);
	}
	/* */
	printf("\n-----------------------------------------\n");
	if(LAN==103){
		printf("Agora qual o novo nome:");
	}
	if(LAN==101){
		printf("Good, now the new name:");
	}
	fgets(Registros[i].Nome,29,stdin);
	printf("\n------------------------------------------\n");
	printf("\n ALTERAÇÃO EFETUADA COM SUCESSO | TRANSATION PERFOMED WITH SUCESS\n");
}
void DeletarRegistro(){
	int j=0,ops=0;
	
	if(LAN==103){
		printf("Qual o ID do Registro :");
		scanf("%d",&i);
		i--;
		fflush(stdin);
		printf("\n");
		printf("%d --- %s",i+1,Registros[i].Nome);
		printf("\n");
		printf("\nVocê deseja apagar este registro (1 ou 0) :");
		scanf("%d",&ops);
		if (ops == 1){
			j = i;
			for(i=j;i<TAM-1;i++){
				strcpy(Registros[i].Nome,Registros[i+1].Nome);
			}
			strcpy(Registros[TAM-1].Nome," ");
			printf("\nALTERAÇÃO REALIZADA COM SUCESSO\n");
		}
		else
		{
			printf("\nALTERAÇÃO NÃO REALIZADA, APERTE ENTER PARA CONTINUAR\n");
		}
	}
	if(LAN==101){
		printf("Please the ID:");
		scanf("%d",&i);
		i--;
		printf("\n");
		printf("%d --- %s",i+1,Registros[i].Nome);
		printf("\n");
		printf("You really want to erase this register (1 or 0) :");
		scanf("%d",&ops);
		if (ops == 1){
			j = i;
			for(i=j;i<TAM-1;i++){
				strcpy(Registros[i].Nome,Registros[i+1].Nome);
			}
			strcpy(Registros[TAM-1].Nome," ");
			printf("\nOPERATION EXECUTED WITH SUCESS, PRESS [ENTER]\n");
		}
		else
		{
			printf("\nOPERATION REFUSED BY THE USER, PLEASE PRESS [ENTER]\n");
		}
	}
}
void Relatorio(){
	printf("|ID| --- | NOME/NAME                |\n");
	for(i=0;i<TAM;i++){
		printf("|%2d| --- |%s|\n",i+1,Registros[i].Nome);
	}
	printf("\n");
	if (LAN==103){
		printf("APERTE [ENTER] PARA CONTINUAR\n");
	}
	else
	{
		printf("\nPRESS ENTER TO FINISH\n");
	}
}