#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	int a, i ,j, b, c, aleatorio;
	
	srand((unsigned)time(NULL));
		
	printf("======GERADOR DE MATRIZES======\n");
	printf("\n");
	printf("Digite o tamanho da matriz (axb): ");
	scanf("%d %d", &a, &b);
	int matriz[a][b];
		for(i = 0; i < a; i ++){
			for(j = 0; j < b; j++){
				aleatorio = rand() % 9; //Tem a função de gerar números pseudo-aleatórios
				matriz[i][j] = aleatorio; //Preenche a matriz com valores aleatórios
				printf("%d ", matriz[i][j]);
				if(j == (b-1)){
					printf("\n");
				}
				
			}	
		}
		
		
		printf("------------------------------------------------\n");
		
	
	
system("PAUSE");

}
