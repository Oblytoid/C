#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int Num;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um numero:\n");
	scanf("%d", &Num);
	if((Num% 2)==0){
		printf("O numero é par\n");
	}else{
		printf("O numero é impar \n");
	}
	if(Num >= 0){
		printf("O numero é Positivo\n");
	}else{
		printf("O numero é Negativo]\n");
	}
	if((Num% 5)==0){
		printf("O numero é multiplo de 5\n");
	}else{
		printf("O numero não é multiplo de 5\n");
	}
}
