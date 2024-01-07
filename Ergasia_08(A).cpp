#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int  x;
int y;
int z;
int xa;
int input;
int symbol;


int main(void){


	srand (time(NULL));
	xa = 1 + (rand() % 13);
	symbol = 1+(rand() % 4);
	

	
	
	while(x<1){
		x++;
		printf("\t\t\t  ----------------------- \n");
	}
	while(y < 20){
		y++;
		printf("\t\t\t | \t\t\t | \n");
		
		if(y == 3){
			if(xa == 11){
				printf("\t\t\t |\t J \t\t |\n", xa);
			}else if(xa == 12){
				printf("\t\t\t |\t Q \t\t |\n", xa);
			}else if(xa == 13){
				printf("\t\t\t |\t K \t\t |\n", xa);
			}else if(symbol == 1){
					printf("\t\t\t |\t\3%d \t\t |\n", xa);
				}else if(symbol == 2){
					printf("\t\t\t |\t\4%d \t\t |\n", xa);
				}else if(symbol == 3){
					printf("\t\t\t |\t\5%d \t\t |\n", xa);
				}else if(symbol == 4){
					printf("\t\t\t |\t\6%d \t\t |\n", xa);
				}
		}
		if(y == 16){
			if(xa == 11){
				printf("\t\t\t |\t\t J \t |\n", xa);
			}else if(xa == 12){
				printf("\t\t\t |\t\t Q \t |\n", xa);
			}else if(xa == 13){
				printf("\t\t\t |\t\t K \t |\n", xa);
			}else if(symbol == 1){
				printf("\t\t\t |\t\t \3%d \t |\n", xa);
			}else if(symbol == 2){
				printf("\t\t\t |\t\t \4%d \t |\n", xa);
			}else if(symbol == 3){
				printf("\t\t\t |\t\t \5%d \t |\n", xa);
			}else if(symbol == 4){
				printf("\t\t\t |\t\t \6%d \t |\n", xa);
			}
		}
		
	}
	
	while(z<1){
		z++;
		printf("\t\t\t  ----------------------- \n");
	}
	
	
	
	scanf("%d", &input);
	
	printf("Next Card: Nal(0), Exit(1)");
	
	system("PAUSE");
	return 0;
	
}
