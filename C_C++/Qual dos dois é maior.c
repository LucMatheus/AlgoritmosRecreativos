/* Exercicio Feito em sala para a matéria "Programação Estruturada em C" 
   Programador: Lucas Matheus Costa (@teclucas98)
   Professor: Jairo Fadul
   Instituição: Universidade do Estado do Pará (UEPA)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int n1=0,n2=0;
	char op='S';
	
	setlocale(LC_ALL,"Portuguese");
	
	while (op=='S'){
	
		printf("COMPARAR NÚMEROS (2)");
	
		printf("\n\nDigite um número: ");
		scanf("%d",&n1);
	
		printf("\n----------------------\n");
	
		printf("Digite outro número: ");
		scanf("%d",&n2);
	
		if (n1>n2){
			printf("Lógicamente, o número %d é maior que o %d\n",n1,n2);
		}
		if (n1<n2){
			printf("Lógicamente, o número %d é maior que o %d\n",n2,n1);
		}
		if (n1==n2){
			printf("Ambos são iguais ...\n");
		}
	
		printf("Você deseja comparar novamente (S/N) :");
		scanf("%s",&op);
		system("cls");
	}
	return 0;
}
