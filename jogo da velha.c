 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuleiro(char casas2 [9]){
	system("cls");
	setlocale(LC_ALL, "");

	printf("\t %c |  %c  | %c \n", casas2[0], casas2[1], casas2[2]);
	printf("\t--------------\n");
	printf("\t %c |  %c  | %c \n", casas2[3], casas2[4], casas2[5]);
	printf("\t--------------\n");
	printf("\t %c |  %c  | %c \n", casas2[6], casas2[7], casas2[8]);
	printf("\t--------------\n");
}
int main (void){
	
	char casas [9] = 	{ '1','2','3','4','5','6','7','8','9'};
	 
	char res;
	int cont_jogadas, jogadas = 1, vez = 0, i;
	int j1=0,j2=0, emp= 0;
	do {
		 
		 cont_jogadas=1;
		 for(i=0;i<=8;i++) {
		 	
		 	casas[i] = ' ';
		 }	
		do {
			
			tabuleiro (casas ); 
			if(jogadas==0){
				printf("Jogada inválida, jogue novamente\n");
			}
			printf(" Digite a casa para marcar [1 - 9]\n");
			if(vez%2==0){
				printf("Jogador O\n");
			}else{
			
			printf("Jogador X\n");
			}
			scanf("%i", &jogadas);
			
			
			if( jogadas  < 1 || jogadas > 9){
				
				jogadas=0;
				; 
			}else  if(casas[jogadas-1]   != ' ' ){
				jogadas = 0;
			} 	else{
			
			if (vez%2==0){
						
							casas[jogadas-1]  = 'O' ;
							
					}else {
						
							casas[jogadas-1] = 'X';		
					}
					cont_jogadas++;
					vez++;
					
			
		}
	
	if(casas[0] =='X' && casas[1]=='X'  && casas [2] == 'X' ){cont_jogadas=11;}
		if(casas[3] =='X' && casas[4]=='X'  && casas [5] == 'X' ){cont_jogadas=11;}
		if(casas[6] =='X' && casas[7]=='X'  && casas [8] == 'X' ){cont_jogadas=11;}
		if(casas[0] =='X' && casas[3]=='X'  && casas [6] == 'X' ){cont_jogadas=11;}
		if(casas[1] =='X' && casas[4]=='X'  && casas [7] == 'X' ){cont_jogadas=11;}
		if(casas[2] =='X' && casas[5]=='X'  && casas [8] == 'X' ){cont_jogadas=11;}
		if(casas[0] =='X' && casas[4]=='X'  && casas [8] == 'X' ){cont_jogadas=11;}
		if(casas[2] =='X' && casas[4]=='X'  && casas [6] == 'X' ){cont_jogadas=11;}
		
		if(casas[0] =='O' && casas[1]=='O'  && casas [2] == 'O' ){cont_jogadas=12;}
		if(casas[3] =='O' && casas[4]=='O'  && casas [5] == 'O' ){cont_jogadas=12;}
		if(casas[6] =='O' && casas[7]=='O'  && casas [8] == 'O' ){cont_jogadas=12;}
		if(casas[0] =='O' && casas[3]=='O'  && casas [6] == 'O' ){cont_jogadas=12;}
		if(casas[1] =='O' && casas[4]=='O'  && casas [7] == 'O' ){cont_jogadas=12;}
		if(casas[2] =='O' && casas[5]=='O'  && casas [8] == 'O' ){cont_jogadas=12;}
		if(casas[0] =='O' && casas[4]=='O'  && casas [8] == 'O' ){cont_jogadas=12;}
		if(casas[2] =='O' && casas[4]=='O'  && casas [6] == 'O' ){cont_jogadas=12;}
		
		
		
		
		
		}while (cont_jogadas<=9);
		tabuleiro(casas);	
		if (cont_jogadas == 10 ){
			printf("Jogo terminou empatado\n");
			emp++;
		} 
		if (cont_jogadas ==11){
			printf("X ganhou, parabéns\n");
			j1++;
		}
		if (cont_jogadas ==12){
			printf("O ganhou, parabéns\n");
			j2++;
		}
		
		printf("Placar jogador X \n %i \n", j1);
		printf("Placar jogador O \n %i \n", j2);
		printf("Empate \n %i \n", emp);
		
		
		printf("DESEJA JOGAR NOVAMENTE? [sim-nao] \n");
		scanf("%s", &res	);
		
	} while (res== 's');
	return 0;
}
