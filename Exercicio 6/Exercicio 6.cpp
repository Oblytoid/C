#include<stdlib.h>
#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float Soma , Som_media , Res_media, Media;
	int Num_par = 0, Num , menor = NULL;
	
	printf("Digite um  numero:");
	scanf("%d",&Num);
	do{
	
		if(Num > 0){
			if(Num%3 == 0){
				Soma += Num;
			}else if(Num%2 == 0 ){
				Num_par ++;
				Media += Num;
				Res_media = Som_media/Num_par;
			}
			if(Num < menor){
				menor = Num;
			}
			if (menor = NULL ){
				printf("oi");
				
			}
			printf("Digite um  numero:");
			scanf("%f",&Num);
		}
	}while(Num > 0);
}
