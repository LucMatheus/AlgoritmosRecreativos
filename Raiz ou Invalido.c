/* Exercicio Feito em sala para a mat�ria "Programa��o Estruturada em C" 
   Programador: Lucas Matheus Costa (@teclucas98)
   Professor: Jairo Fadul
   Institui��o: Universidade do Estado do Par� (UEPA)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num=0;
	char op='S';
	
	while (op=='S'){
		printf("Digite um n�mero :");
		scanf("%f",&num);
		
		if (num>0){
			printf("\nA Raiz quadrada do N�mero %f � %.2f",num,sqrt(num));
			printf("\n*Lembrado que � um valor arredondado ^v^");
		}
		if (num<0){
			printf("\nVALOR INVALIDO, � um erro complexo. fazer o que n� :)");
		}
		if (num==0){
			printf("A Raiz de 0 �...0 (face_palm)");
		}
		
		printf("\nVoc� deseja efetuar outra opera��o (S/N) :");
		scanf("%s",&op);
		
		system("cls");
	}
	return 0;
}
