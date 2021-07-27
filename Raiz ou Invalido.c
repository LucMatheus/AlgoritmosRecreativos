/* Exercicio Feito em sala para a matéria "Programação Estruturada em C" 
   Programador: Lucas Matheus Costa (@teclucas98)
   Professor: Jairo Fadul
   Instituição: Universidade do Estado do Pará (UEPA)
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
		printf("Digite um número :");
		scanf("%f",&num);
		
		if (num>0){
			printf("\nA Raiz quadrada do Número %f é %.2f",num,sqrt(num));
			printf("\n*Lembrado que é um valor arredondado ^v^");
		}
		if (num<0){
			printf("\nVALOR INVALIDO, É um erro complexo. fazer o que né :)");
		}
		if (num==0){
			printf("A Raiz de 0 é...0 (face_palm)");
		}
		
		printf("\nVocê deseja efetuar outra operação (S/N) :");
		scanf("%s",&op);
		
		system("cls");
	}
	return 0;
}
