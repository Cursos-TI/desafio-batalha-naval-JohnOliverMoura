#include <stdio.h>

#define Linhas 10
#define Colunas 10


int main(){
	
	//Declarando as variáveis que serão usadas para formar o tabuleiro e as coordenadas
	
	int matriz[Linhas][Colunas]; //declaração da matriz/ tabuleiro 
	int i, j, soma=0, mar=0;//a declaração da soma como zero, vai definir que a matriz faça a atribuição dos numeros da matriz em zeros 
	char letra[10] = {'A','B','C','D','E','F','G','H','I','J'};// Declarando esse vetor para ser o cabeçalho do tabuleiro que formará as coordenadas
	int numero[10] = {1,2,3,4,5,6,7,8,9,10};//declarando esse vetor para ser a lateral esquerda do tabuleiro que formará as coordenadas
	int reta; //Variável para declarar as coordenadas dos návios que estão na horizontal e vertical 
	
	
	
	printf("   ");//Alinha as letras com os espaçamentos dos numeros
	for(i=0; i<Linhas; i++)//Esse loop unico mantem as letras do vetor sobre o tabuleiro/matriz como um cabeçalho
	{
		printf(" %c", letra[i]);//Imprime o cabeçalho de letras do tabuleiro
	}
	
	
	for( i = 0; i<Linhas; i++)//Loop principal. Determina a ordem dos numeros na barra lateral fora do tabuleiro 
	{ 	
		printf("\n");
		printf("%2d ", numero[i]);//Imprime a barra lateral dos numeros de 1 a 10.
		
		for( j=0; j<Colunas; j++)//Imprime o tabuleiro/ matriz
		{
			matriz[i][j] = mar;//A variavel mar recebeu o valor zero e garante que a minha mtriz zera reproduzida com todas as linhas e colunas com zero 
			
			for (soma=0; soma<3; soma++)//Loop que controla a quantidde de casas que serão preenchidas com o número 3 (návio)
			{
				if(soma == i && soma== j)//Esse if garante que os números 3/návio só serão colocados quando o valor de soma for igual a i e j, o que garante que fiquem na diagonal.Aninhado ao primeiro loop garante que os navios ocupem apenas 3 celulas/espaços 
				{
				matriz[i][j]= 3;//Aqui indico o que a matriz deve substituir 	
				}
				
				if(i + j == 8 && soma ==j )//O i+j == 8 determinam a linha onde o 3 vai ser agregado e a soma == j garante o fim da adição
				{
					matriz[i][j]=3;
				}
				
			}
			
			for(reta =0; reta<3; reta++)// Loop que define as posições dos navios em linha reta (horizontal e vertical), também define o fim da aplicação 
			{	
				if ( reta == i  && j==9)// j==9 garante que a linha nove receba o numero 3. Reta ==i determina onde deve parar a adição, devido ao operador lógico &&.
				{
					matriz[i][j] = 3;
				}
			
				
				if( reta == j && i ==4 )//Esse if determina que quando i for igual a 4 toda a linha recebe o valor 3 e Reta == j determina onde parar devido ao operador logico &&.
				{
					matriz[i][j] = 3;
				}
			}
				
			printf("%2d", matriz[i][j]); //Imprime a matriz completa 
		}
		
	}	printf("\n");
	
	

	return 0;


}
	