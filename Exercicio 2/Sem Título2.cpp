#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int Num;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um numero:\n");
	scanf("%d", &Num);
	if((Num% 2)==0){
		printf("O numero � par\n");
	}else{
		printf("O numero � impar \n");
	}
	if(Num >= 0){
		printf("O numero � Positivo\n");
	}else{
		printf("O numero � Negativo]\n");
	}
	if((Num% 5)==0){
		printf("O numero � multiplo de 5\n");
	}else{
		printf("O numero n�o � multiplo de 5\n");
	}
}
