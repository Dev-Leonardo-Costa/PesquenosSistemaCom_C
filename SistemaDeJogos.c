#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
//bibliotecas

int main(void) {
  int caso;
  int i, j, linha, coluna, contador;  //variavel jogo da velha
	char matriz[3][3]; //variavel jogo da velha
  int jog1, jog2; //variavel jokenpo
  
  setlocale(LC_ALL,""); /*Acentuação*/

printf("🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 \n");
  printf("-----------------------------------\n");
  printf("BEM VINDOS AO FCDL - Games\n");
  printf("-----------------------------------\n");
  printf("🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 \n");
  printf("\n");
  printf("JOGOS\n");
  printf("\n");
  printf("1 ---- FORCA\n");
  printf("2 ---- JOGO DA VELHA \n");
  printf("3 ---- JOKEN PO \n");
  printf("4 ---- SAIR \n");
  scanf("%d", &caso);

switch (caso)
 {
case 1:
 printf ("teste");
  break;

case 2:
 for(i = 0; i < 3; i++){
		putchar('\n');
		for(j = 0; j < 3; j++){
			putchar('\t');
			matriz[i][j] = '.';
			printf("%c", matriz[i][j]);
		}
		putchar('\n');
		putchar('\n');
	}
	//primeiro jogador sempre será 'x' e o segundo sempre será 'O';
	for (contador = 0; contador < 9; contador++){
		
		/*A variação do contador deve ser sempre 9, pois são apenas 9 possíveis jogadas
		 *Se alternamos o valor de início do contador, deve se alterar seu límite de forma à 
		 *diferença permanecer sempre 9  >  9 - 0 = 9.
		 *Além disso, é necessário notar que, mais a frente, o contador é usado na definição 
		 *de qual jogador ganhou, sendo portanto a alteração aqui feita , lá levada em conta
		 */
		
		printf("\nInsira a linha em que deverá ser posto seu símbolo:\n");
		scanf("%d", &linha);
		fflush(stdout);
		linha--;
		
		printf("Insira a coluna em que deverá ser posto seu símbolo:\n");
		scanf("%d", &coluna);
		fflush(stdout);
		coluna--;
		
		putchar('\n');
		if(matriz[linha][coluna] == '.'){
		
			if(contador%2){/*O módulo por 2 dará 1 ou 0: Se for 1, equivale a true e entra no if,
                                        *se for 0 equivale a false e entra no else*/
				matriz[linha][coluna] = 'O';
			} 
			else{
				matriz[linha][coluna] = 'X';
			}
			for(i = 0; i < 3; i++){
				putchar('\n');
				for(j = 0; j < 3; j++){
					putchar('\t');
					printf("%c", matriz[i][j]);
				}
				putchar('\n');
				putchar('\n');
			}
			if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '.')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '.')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '.')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '.')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '.')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '.')){
					
				printf("\nJogador %d ganhou!", (contador%2) + 1);	/*O jogador que deveria ser 0 é acrescido de 1, tornando-se jogador 1*/
				exit(0);						/*O jogador que deveria ser 1 é acrescido de 1, tornando-se jogador 2*/
			}
		}
		else{
			printf("\nO espaço escolhido já está ocupado, repita a operação para um espaço válido\n");
			contador--;
		}
	}
	
	printf("\nNinguém ganhou :(");
	exit(0);

break;

case 3:
printf("Digite a jogada do jogador 1");
printf("\n1 - Papel");
printf("\n2 - Pedra");
printf("\n3 - Tesoura\n");
scanf("%d", &jog1);
printf("Digite a jogada do jogador 2");
printf("\n1 - Papel");
printf("\n2 - Pedra");
printf("\n3 - Tesoura\n");
scanf("%d", &jog2);
if((jog1 >= 1 && jog1 <= 3) && (jog2 >= 1 && jog2 <= 3)){
  if(jog1 != jog2){
      if( (jog1 == 1 && jog2 == 3) || (jog1 == 2 && jog2 == 1) || (jog1 == 3 && jog2 == 2) ){
          printf("Jogador 1 Venceu!!!!");
      }
      else{
          printf("Jogador 2 Venceu!!!!");
      }
        }
        else{
            printf("Empate!!!!!");
        }
    }else{
        printf("Dados Invalidos!!!!!!!!!!!!!!!");
    }


break;

case 4:
 printf("Saindo...");
}
}
