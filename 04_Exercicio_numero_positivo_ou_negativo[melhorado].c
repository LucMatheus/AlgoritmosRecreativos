/**
 * Exercicio feito em sala para a materia "Programacao estruturada usando C"
 * @author Lucas Matheus Costa <teclucas.costa@hotmail.com>
 * Professor: Jairo Fadul
 * Instituicao: Universidade do estado do Para (UEPA)
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero=1;
		
	do {
		printf("Digite um numero e aperte [ENTER] :");
		printf("\nDICA - Digite 0 para SAIR\n");
		printf("NUMERO ->");
		scanf("%d",&numero);
	
		if (numero>0){
			printf("O Numero e positivo!, voce e um proton\n");
		}
		if (numero<0){
			printf("O Numero e negativo!, voce e um eletron\n");
		}
		printf("\n==================================\n");
	} while (numero != 0);
	
	printf("O Numero e neutro, Finalizando o programa :) \n");
		
	return 0;
}
