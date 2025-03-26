#include <stdio.h>

int main(){
	
	//Declarando as variáveis que serão usadas para formar o tabuleiro e as coordenadas
	
	int i, j;
	char letra[10] = {'A','B','C','D','E','F','G','H','I','J'};// Declarando esse vetor para ser o cabeçalho do tabuleiro que formará as coordenadas
	int numero[10] = {1,2,3,4,5,6,7,8,9,10};//declarando esse vetor para ser a lateral esquerda do tabuleiro que formará as coordenadas
	
	
	printf(" ");//Usado para dar um espaço na primeir letra impressa no cabeçalho do tabuleiro 
	
	//Usando loops aninhados para imprimir o cabeçalho de letras do tabuleiro que formará as coordenadas
	for (i= 0; i<10; ++i)
	{
		printf(" ");
		printf("%c", letra[i]);
	}
	
	
	printf("\n");//Usado para pular uma linha após a impressão das letras do cabeçalho do tabuleiro 
	
	//Declarando a matriz do tabuleiro 
	int tabuleiro [10][10]= {{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
					 		{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
			 				{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
			 				{0,0,0,0,0,0,0,0,0,0},
			 				{0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0},
			 				{0,0,0,0,0,0,0,0,0,0}};
					

	
	//Usando loops aninhados para imprimir o tabuleiro e os numeros 1 a 10 na lateral que formará as coordenadas do tabuleiro.
		for (i = 0; i<10; i++)
		{  
			printf("%d ", numero[i] );//Imprime os numeros de coordenadas laterais 
			
			for(j = 0; j<10; ++j)
			{
			printf("%d ", tabuleiro[i][j]);//Imprime o tabuleiro 
			}
		 	printf("\n");//Diagrama o tabuleiro 
	
		}


	//Declarando a posição do navio vertical 
	tabuleiro[0][1] = 3;
	tabuleiro[1][1] = 3;
	tabuleiro[2][1] = 3;

	
	//Declarando a posição do navio horizontal
	tabuleiro[3][3] = 3;
	tabuleiro[3][4] = 3;
	tabuleiro[3][5] = 3;


	printf("\n");

	printf(" ");//Ajuste das letras do tabuleiro 
	for (i= 0; i<10; ++i)
	{
		printf(" ");//Separação entre as letras do cabeçalho 
		printf("%c", letra[i]);
	}
	
	
	printf("\n");
	
	//Loops aninhados para imprimir o tabuleiro e os numeros 1 a 10 na lateral que formará as coordenadas do tabuleirojá com os navios posicionados 
		for (i = 0; i<10; i++)
		{  
			printf("%d ", numero[i] );//Imprime os numeros de coordenadas laterais
			
			for(j = 0; j<10; ++j)
			{
			printf("%d ", tabuleiro[i][j]);//Imprime o tabuleiro já com os navios posicionados 
			}
		 	printf("\n");//Diagrama o tabuleiro 
	
		}



	return 0;


}
	