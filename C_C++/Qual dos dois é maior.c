/* Exercicio Feito em sala para a mat�ria "Programa��o Estruturada em C" 
   Programador: Lucas Matheus Costa (@teclucas98)
   Professor: Jairo Fadul
   Institui��o: Universidade do Estado do Par� (UEPA)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int n1=0,n2=0;
	char op='S';
	
	setlocale(LC_ALL,"Portuguese");
	
	while (op=='S'){
	
		printf("COMPARAR N�MEROS (2)");
	
		printf("\n\nDigite um n�mero: ");
		scanf("%d",&n1);
	
		printf("\n----------------------\n");
	
		printf("Digite outro n�mero: ");
		scanf("%d",&n2);
	
		if (n1>n2){
			printf("L�gicamente, o n�mero %d � maior que o %d\n",n1,n2);
		}
		if (n1<n2){
			printf("L�gicamente, o n�mero %d � maior que o %d\n",n2,n1);
		}
		if (n1==n2){
			printf("Ambos s�o iguais ...\n");
		}
	
		printf("Voc� deseja comparar novamente (S/N) :");
		scanf("%s",&op);
		system("cls");
	}
	return 0;
}
