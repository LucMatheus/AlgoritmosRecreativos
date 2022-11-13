/**
 * Esse programa converte um numero decimal na sua base binaria,
 * porem ha uma limitacao de 1 byte entao a conversao maxima de zero(0) ate duzentos e cinquenta(250)
 * 
 * @author Lucas Matheus Costa <teclucas.costa@hotmail.com>
 * @licence GPL_Ver3
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Variaveis
	unsigned int numero=0;
	int numeroBinario[9];
	char gatilhoDeRepeticao='S';
	
	//incrementadores;
	int i = 0;
	int ii = 0;

	while (gatilhoDeRepeticao=='S') {
		// Entrada de dados
		printf("Conversor de binarios\n");
		printf("Tutorial: Digite um numero entre zero(0) e duzentos e cinquenta(250) e aperte ENTER\n");
		printf("Numero: ");
		scanf("%d",&numero);
		
		//Teste condicional
		if (numero > 250 || numero < 0) {
			printf("\nEste numero nao procede, por favor leia atentamente o tutorial e siga conforme o intervalo desejado\n\n");
			continue;
		}
		
		//Processamento
		do {
		  numeroBinario[i] = numero%2;
		  numero = numero/2;
		  i++;	  
		} while (numero > 0);
		ii = i-1;
		
		//Saida de dados
		printf("\nO numero em binario e 0x");
		for(i = ii;i>=0;i--) {
			printf("%d",numeroBinario[i]);
		}
		printf("\n=========================\n");
		printf("Voce quer fazer uma nova operacao (S/N) : ");
		scanf("%s", &gatilhoDeRepeticao);
		
		if (gatilhoDeRepeticao == 'S') {
			printf("\n=======================================\n");
		}
	}
	printf("\nObrigado por utilizar o conversor de binarios");
	return 0;
}
