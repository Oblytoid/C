#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<conio.h>


//Area de variaveis  globais
int I = 0 , repet = 0;
float Num1, Num2,Res;
int cont = 0;

const int Menu_Q = 5; //Quantidade de opções no menu(Se lembre do 0)


void Cabecalho(){
printf(" Cima = W \n Baixo = S \n Selecionar =  Enter \n \n Primeiro numero:%.2f \n Segundo numero:%.2f \n \n",Num1 , Num2);
};

int Menu(){
		Sleep(100);
	if(kbhit()!=0){
	
		char Keyboard= getch();
		system("cls");
		switch(Keyboard){
			case 'w':{
				if((I >= 1)&&(I < Menu_Q+1)){
				I --;
				}
				break;
			}
			case 's':{
				if((I >= 0)&&(I <= Menu_Q -1)){
				I ++;
				};
				break;
			}
		};
		switch(I){
		case 0:{
				Cabecalho();
				printf(">Adição \n Subtração \n Multiplicação \n Divisão \n Voltar \n Sair \n");
				break;
			}
			case 1:{
				Cabecalho();
				printf(" Adição \n>Subtração \n Multiplicação \n Divisão \n Voltar \n Sair \n");		
				break;
			}
			case 2:{
				Cabecalho();
				printf(" Adição \n Subtração \n>Multiplicação \n Divisão \n Voltar \n Sair \n");
				break;
			}
			case 3:{
				Cabecalho();
				printf(" Adição \n Subtração \n Multiplicação \n>Divisão \n Voltar \n Sair \n");
				break;
			}
			case 4:{
					Cabecalho();
				printf(" Adição \n Subtração \n Multiplicação \n Divisão \n>Voltar \n Sair \n");
				break;
			}
			case 5:{
					Cabecalho();
				printf(" Adição \n Subtração \n Multiplicação \n Divisão \n Voltar \n>Sair \n");
				break;
			}
			default:{
				Cabecalho();
				printf(" Adição \n Subtração \n Multiplicação \n Divisão \n Sair \n");
				break;
			}
		}
		Beep(230 , 30);
		Beep(235 , 50);
		if(Keyboard == '\r'){
			switch(I){
				case 0:{
					Res = Num1 + Num2;
					printf("O resutado da adição é:%.2f\n", Res);
						system("pause");
						break;
				}
				case 1:{	
					Res = Num1 - Num2;
					printf("O resutado da subtração é:%.2f\n", Res);
						system("pause");	
					break;
				}
				case 2:{
					Res = Num1 * Num2;
					printf("O resutado da multiplicação é:%.2f\n", Res);
						system("pause");
					break;
				}
				case 3:{
					Res = Num1  / Num2;
					printf("O resutado da Divisão é:%.2f\n", Res);
						system("pause");
					break;
				}
				case 4:{
					system("cls");
					printf("Voltando");
					for(int P= 0 ; P <= 5; P ++){
						printf("*");
						Sleep(300);
						repet = 0;
					}
					printf("\n");
					system("cls");
					break;
						}
				case 5:{
					system("cls");
					printf("Saindo");
					for(int P= 0 ; P <= 5; P ++){
						printf("*");
						Sleep(500);
						cont = 1;
					}
					break;
				}
				default:{
					printf(" Opção invalida\n");
					system("pause");
					break;
				}
			};
		}//fecha if 2
	};//fecha if
};//fecha funcao

int main(){	
setlocale(LC_ALL,"Portuguese");
	
	system("mode con:cols=40 lines=30");
	while(cont == 0){
		if( repet == 0){
			I = 0;
			printf("Digite um numero: ");
			scanf("%f",&Num1);
			printf("Digite um numero: ");
			scanf("%f",&Num2);
			repet = 1;
			system("cls");
			Cabecalho();
			printf(">Adição \n Subtração \n Multiplicação \n Divisão \n Sair \n");
		};
		Menu();
	};
return 0;
}
