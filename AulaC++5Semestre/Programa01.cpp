#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	                            
	if (numero < 0){
		numero = numero * (-1);
	}
	
	printf("O valor final do n�mero � %d",numero);
	
	printf("\n\n");
	system("pause");
}

