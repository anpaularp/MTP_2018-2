// Ana Paula Ribiero de Passos
// 11621ETE002
#include <stdio.h>
int soma(int v[20], int s){
	int i = 0;
	int resultado = 0;
	for(i = 0; i < s; i++){
		resultado = resultado + v[i];
		
	}return resultado;
}
float media(float resultado, int quantidade){
	float m = 0;

	m = resultado/quantidade;
	return m;
	
}
int main() {
	int v[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int quantidade, i; 
	printf("DIGITE A QUANTIDADE: ");
	scanf("%d",&quantidade);
	for(i = 0; i < quantidade; i++){
		printf("DIGITE O %do NUMERO: ",i+1);
		scanf("%d", &v[i]);
		getchar();
	}
	int som;
	float med;
	som = soma(v,quantidade);
	med = media(som,quantidade);
	printf("\n\nSOMA: %d\n\nMEDIA: %f\n",som, med);

	return 0;
}
