#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor, desc;
	printf("Digite o valor do produto:\n");
	
	scanf("%f",&valor);
	
	if(valor<= 30){
		desc = 0;
	}else if(valor <= 100){
		desc = valor*0.05;
		
	}else if(valor <=250){
		desc = valor*0.1;
	}else{
		desc =  valor *0.15;
	}
	printf(" Valor compra=R$%.2f\n Desconto=R$%.2f\n Valor final=R$%.2f", valor ,desc,(valor-desc));
}
