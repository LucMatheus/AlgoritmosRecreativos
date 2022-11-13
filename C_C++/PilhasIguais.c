/*   
	* Programado por: Lucas Matheus Costa
	* Codigo Aberto, Leia o README
	* GITHUB : https://github.com/LucasMatheusCosta/
	* SITE : https://lucasmatheuscosta.github.io/Portfolio/
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��es
int PilhasIguais(int tg);

//Variaveis Globais
int Pilha1[5],Pilha2[5],tam=5;

// Main
int main()
{
	int i,cont=0; // <-- Variaveis Locais
	
	setlocale(LC_ALL,"Portuguese"); // <-- Localiza��o para Portugu�s
	
	// Entrada de dados da Pilha 1
	system("color A");
	printf("COMPARATIVO DE PILHAS");
	printf("\n\n");
	for (i=0;i<tam;i++){
		printf("Digite um n�mero inteiro e aperte [ENTER] :");
		scanf("%d",&Pilha1[i]);
	}
	system("cls");
	// Entrada de dados da Pilha 2
	system("color B");
	printf("COMPARATIVO DE PILHAS");
	printf("\n\n");
	for (i=0;i<tam;i++){
		printf("Digite novamente, outro n�mero inteiro e aperte [ENTER]:");
		scanf("%d",&Pilha2[i]);
	}
	// Comparativo
	for (i=0;i<tam;i++){
		if (Pilha1[i] == Pilha2[i]){
			cont++;
		}
	}
	// Retorno
	PilhasIguais(cont);
	
	return 0;
}
// Fun��es
int PilhasIguais(int tg){
	// Para Pilhas Iguais
	if (tg == tam){
		printf("\nAs Pilhas s�o iguais\n\n");
		return 1;
	} 
	else
	// Para Pilhas Diferentes
	{
		printf("\nAs Pilhas s�o diferentes\n\n");
		return 0;
	}	
}