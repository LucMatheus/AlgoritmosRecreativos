/**
 *  Esse algoritmo visa simular uma calculadora
 *  @author Lucas Matheus Costa <teclucas.costa@hotmail.com>
 * 	@version 2.0
 * */

#include <stdio.h>
#include <stdlib.h>

//Funções
float somar(float numero1, float numero2);
float subtrair(float numero1, float numero2);
float dividir(float numero1, float numero2);
float multiplicar(float numero1, float numero2);
void escreverOResultado(float soma);

int main(){
	
	// Variaveis
	char Opcao='S',Operacao='.';
	float numero1=0,numero2=0,soma=0;
	
	while (Opcao == 'S') {
		printf("Digite um numero :");
		scanf("%f",&numero1);
		
		printf("\nDigite outro numero :");
		scanf("%f",&numero2);
		
		printf("\nQUAL A OPERACAO :");
		printf("\n");
		printf("\n(*) - Multiplicacao");
		printf("\n(/) - Divisao");
		printf("\n(+) - Adicao");
		printf("\n(-) - Subtracao");
		printf("\n");
		printf("\n--> :");
		scanf("%s",&Operacao);
		
		if (Operacao == '+'){
			soma = somar(numero1,numero2);
			escreverOResultado(soma);
		}
		else if (Operacao == '-'){
			soma = subtrair(numero1,numero2);
			escreverOResultado(soma);
		}
		else if (Operacao == '*'){
			soma = multiplicar(numero1,numero2);
			escreverOResultado(soma);
		}
		else if (Operacao == '/'){
			soma = dividir(numero1,numero2);
			escreverOResultado(soma);
		}
		else {
			printf("\nESTA OPERACAO NAO EXISTE");
		}
		printf("\nVoce quer fazer outra conta (S/N) :");
		scanf("%s",&Opcao);
		if (Opcao == 'S' || Opcao == 's'){
			printf("\n============================================\n");
		} else {
			printf("\n===============================================\n");
			printf("Obrigado por utilizar a calculadora. \nAperte ENTER para encerrar o programa");
			Opcao = 'N';
		}
	}
	return 0;
}

/*** Somar dois valores */
float somar(float numero1, float numero2) {
	return numero1+numero2;
}
/*** Subtrair dois valores */	
float subtrair(float numero1, float numero2) {
	return numero1-numero2;
}
/*** Multiplicar dois valores */	
float multiplicar(float numero1, float numero2) {
	return numero1*numero2;
}
/*** Dividir dois valores */	
float dividir(float numero1, float numero2) {
	return numero1/numero2;
}
/*** Escrever o resultado */
void escreverOResultado(float soma) {
	printf("O resultado foi %.1f",soma);
}
