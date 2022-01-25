#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	double ra;
	int senha;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o RA...: ");
	scanf("%f",&ra);
	
	printf("Digite a senha...: ");
	scanf("%d",&senha);

	if(ra==12 && senha==16){
	    printf("Correto! PODE ENTRAR. ");
	}else{
		printf("Sorry, senha e Ra incorretos ");	
	}
	
	printf("\n\n");
	system("pause");
}
