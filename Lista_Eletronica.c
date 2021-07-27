/*   
	* Programado por: Lucas Matheus Costa
	* Codigo Aberto, Leia o README
	* GITHUB : https://github.com/LucasMatheusCosta/
	* GAMEJOLT : https://teclucas98.gamejolt.io
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//ESTRUTURA
typedef struct 
{
	char Nome[30];
	char Disciplina[20];
	float Av1,Av2,Media;
} Alunos;

// FUN��ES
/*****/


//VARIAVEIS GLOBAIS
int i;


//Fun��o Principal
int main()
{
	/* Para Portugu�s do Brasil*/
	setlocale(LC_ALL,"Portuguese");
	
	Alunos Estudantes[5]; //<-- Vari�vel Local
	
	//Entrada de Dados
	for(i=0;i<5;i++){
		printf("Digite o nome do(a) estudante :");
		gets(Estudantes[i].Nome);
		printf("\n-------------------------\n");
		printf("Qual a Disciplina do(a) estudante :");
		gets(Estudantes[i].Disciplina);
		printf("\n-------------------------\n");
		printf("Qual a nota da primeira avalia��o :");
		scanf("%f",&Estudantes[i].Av1);
		printf("\n--------------------------------\n");
		printf("Qual a nota da segunda avalia��o :");
		scanf("%f",&Estudantes[i].Av2);
		Estudantes[i].Media = (Estudantes[i].Av1 + Estudantes[i].Av2)/2;
		system("cls");
	}
	
	//Saida de Dados
	printf("\n--- LISTA ELETRONICA ---\n");
	printf("\n");
	for(i=0;i<5;i++){
		printf("\n------------------------------------------\n");
		printf("|\n");
		printf("|Nome : %s|\n",Estudantes[i].Nome);
		printf("|Disciplina : %s|\n",Estudantes[i].Disciplina);
		printf("|M�dia : %.1f|",Estudantes[i].Media);
		printf("\n-------------------------------------------\n");
	}
	
	return 0;
}