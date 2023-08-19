#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int Num, Num2;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um numero:\n");
	scanf("%d", &Num);	
	printf("Digite outro numero:\n");
	scanf("%d", &Num2);	
	
	if(Num > Num2 ){
		printf("%d\n",Num);
	}else if(Num < Num2){
		printf("%d\n",Num2);
	}else{
		printf("Os numeros são iguais\n");
	}
}
