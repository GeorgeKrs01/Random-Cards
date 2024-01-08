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
							printf("\t\t\t |\t %c \t\t |\n", cardValues[value]);
						}
						else if(symbol == 1){
								system("COLOR FC");	
								printf("\t\t\t |\t\3%d \t\t |\n", xa);
							}else if(symbol == 2){
								system("COLOR FC");
								printf("\t\t\t |\t\4%d \t\t |\n", xa);
							}else if(symbol == 3){
								system("COLOR F0");
								printf("\t\t\t |\t\5%d \t\t |\n", xa);
							}else if(symbol == 4){
								system("COLOR F0");
								printf("\t\t\t |\t\6%d \t\t |\n", xa);
							}
					}
					if(y == 16){
						if(xa >= 11){
							value = xa - 11;
							printf("\t\t\t |\t\t %c \t |\n", cardValues[value]);
						}
						else if(symbol == 1){
							system("COLOR FC");
							printf("\t\t\t |\t\t \3%d \t |\n", xa);
						}else if(symbol == 2){
							system("COLOR FC");
							printf("\t\t\t |\t\t \4%d \t |\n", xa);
						}else if(symbol == 3){
							system("COLOR F0");
							printf("\t\t\t |\t\t \5%d \t |\n", xa);
						}else if(symbol == 4){
							system("COLOR F0");
							printf("\t\t\t |\t\t \6%d \t |\n", xa);
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
