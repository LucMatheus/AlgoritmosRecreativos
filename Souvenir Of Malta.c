/* Este código foi disponibilizado de maneira livre pra você, então esperamos que você faça o mesmo com o seu próximo,
apenas peço que divulge o meu/nosso trabalho, desde já agradeço a compreensão, anteciosamente Lucas

GIT : https://github.com/LucasMatheusCosta/
GAMEJOLT : https://teclucas98.gamejolt.io

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c,o;
char quiz;

void Erro();

int main(){
	
	c = 5;
	quiz = 'V';
	
	//Para Português do Brasil
	setlocale(LC_ALL,"Portuguese");
	
	//Menu de Apresentação
	system("color A");
	printf("SOUVENIR OF MALTA");
	printf("\n");
	printf("Eu simplesmente roubei todos os dados da tua maquina, MAS eu deixei uma copia deles na Memoria auxiliar, e vou te dar cinco chances de ter acesso a eles");
	printf("\n");
	printf("caso perca todas as chances, bem eu não posso fazer nada a não ser desejar boa sorte, o desafio é acertar todas as cinco perguntas, estás pronto?\n");
	printf("\n");
	printf("CHANCES = [%d]",c);
	printf("\n");
	printf("APERTE [ENTER] PARA COMEÇAR");
	printf("\n");
	printf("(c) 1991 - Jigsaw | (c) 2018 - Luk\n");
	system("PAUSE");
	system("cls");
	
	//Perguntas e chance
	while (c>0){
		while(quiz == 'V'){
			//Pergunta 1
			printf("Pergunta 1?\n");
			printf("\n");
			printf("(1) - Opção 1\n");
			printf("(2) - Opção 2\n");
			printf("(3) - Opção 3\n");
			printf("\n");
			printf("Qual a sua resposta: ");
			scanf("%d",&o);
			if (o!=2){
				Erro();
				break;
			}
			printf("\n------------------\n");
			
			//Pergunta 2
			printf("Pergunta 2?\n");
			printf("\n");
			printf("(1) - Opção 1\n");
			printf("(2) - Opção 2\n");
			printf("(3) - Opção 3\n");
			printf("\n");
			printf("Qual a sua resposta: ");
			scanf("%d",&o);
			if (o!=1){
				Erro();
				break;
			}
			printf("\n---------------------\n");
			
			//Pergunta 3
			printf("Pergunta 3?\n");
			printf("\n");
			printf("(1) - Opção 1\n");
			printf("(2) - Opção 2\n");
			printf("(3) - Opção 3\n");
			printf("\n");
			printf("Qual a sua resposta: ");
			scanf("%d",&o);
			if (o!=1){
				Erro();
				break;
			}
			printf("\n---------------------\n");
			
			//Pergunta 4
			printf("Pergunta 4?\n");
			printf("\n");
			printf("(1) - Opção 1\n");
			printf("(2) - Opção 2\n");
			printf("(3) - Opção 3\n");
			printf("\n");
			printf("Qual a sua resposta: ");
			scanf("%d",&o);
			if (o!=1){
				Erro();
				break;
			}
			printf("\n---------------------\n");
			
			
			
			//Pergunta 5		
			printf("Pergunta 5?\n");
			printf("\n");
			printf("(1) - Opção 1\n");
			printf("(2) - Opção 2\n");
			printf("(3) - Opção 3\n");
			printf("\n");
			printf("Qual a sua resposta: ");
			scanf("%d",&o);
			if (o!=3){
				Erro();
				break;
			}
			else {
				printf("PARABENS VOCÊ VENCEU\n");
				system("PAUSE");
				return 0;
			}
		}
	}
	printf("GAME OVER - VOCÊ PERDEU TODAS AS SUAS CHANCES");
	system("shutdown /r");
	
	return 0;
}

//FUNÇÕES
void Erro(){
	
	printf("RESPOSTA INCORRETA");
	c--;
	printf("CHANCES = %d\n\n",c);
	system("PAUSE");
	system("cls");
	
	return;
}
