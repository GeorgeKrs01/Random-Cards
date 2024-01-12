#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int x;
int y;
int z;
int xa;
int input;
int symbol;
int value;
char cardValues[] = {'J', 'Q', 'K'};
char symbolChars[] = {'\3', '\4', '\5', '\6'};

int main(void){
		
	
	
	do{
		
		srand (time(NULL));
		xa = 1 + (rand() % 13);
		symbol = 1+(rand() % 4);
		
			x = 0;
			y = 0;	
			z = 0;
		
		
				while(x<1){
					x++;
					printf("\t\t\t  ----------------------- \n");
				}
				while(y < 20){
					y++;
					printf("\t\t\t | \t\t\t | \n");
					
					if(y == 3){
						if(xa >= 11){
							value = xa - 11;
//							J/Q/K
							if(symbol == 1 || symbol == 2){
								system("COLOR FC");	
								printf("\t\t\t |\t%c%c \t\t |\n", symbolChars[symbol - 1],cardValues[value]);
							}else if(symbol == 3 || symbol == 4){
								system("COLOR F0");	
								printf("\t\t\t |\t%c%c \t\t |\n", symbolChars[symbol - 1],cardValues[value]);
							}
						}
//						Numbers
						else if(symbol == 1 || symbol == 2){
								system("COLOR FC");	
								printf("\t\t\t |\t%c%d \t\t |\n", symbolChars[symbol - 1], xa);
							}else if(symbol == 3 || symbol == 4){
								system("COLOR F0");
								printf("\t\t\t |\t%c%d \t\t |\n", symbolChars[symbol - 1], xa);
							}
					}
					
					
//					Center Symbol
					if(y == 10){	
						printf("\t\t\t |\t     %c    \t |\n", symbolChars[symbol - 1]);
					}
					
//					Second Half
					if(y == 16){
						if(xa >= 11){
							value = xa - 11;
//							J/Q/K
							if(symbol == 1 || symbol == 2){
								system("COLOR FC");	
								printf("\t\t\t |\t\t%c%c \t |\n", symbolChars[symbol - 1],cardValues[value]);
							}else if(symbol == 3 || symbol == 4){
								system("COLOR F0");	
								printf("\t\t\t |\t\t%c%c \t |\n", symbolChars[symbol - 1],cardValues[value]);
							}
						}
//						Numbers
						else if(symbol == 1 || symbol == 2){
								system("COLOR FC");	
								printf("\t\t\t |\t\t%c%d \t |\n", symbolChars[symbol - 1], xa);
							}else if(symbol == 3 || symbol == 4){
								system("COLOR F0");
								printf("\t\t\t |\t\t%c%d \t |\n", symbolChars[symbol - 1], xa);
							}
					}
					
				}
				
				while(z<1){
					z++;
					printf("\t\t\t  ----------------------- \n");
				}
				
				
				printf("Next Card: Nal(0), Exit(1)");
				scanf("%d", &input);	
					if(input == 0 ){
						system("CLS");
					}else if(input == 1){
						system("PAUSE");
						system("CLS");
						return 0;	
					}else {
						printf("Invalid Input");
					}
					

	}while(input == 0);
	

}
