#include <stdio.h>
#include <windows.h>  // SetConsoleCursorPosition
#include <conio.h>  // gotoxy nativo
#include <string.h>
#include <math.h>
//Definindo os códigos de tecla para movimentar acima
#define ACIMA 72
//Definindo os códigos de tecla para movimentar abaixo
#define ABAIXO 80
//Definindo os códigos de tecla para movimentar direita
#define DIREITA 77
//Definindo os códigos de tecla para movimentar esquerda
#define ESQUERDA 75
//definindo tamanho da matriz
#define TAM 23
#define tam 108
// ------- biblioteca para utilização do tipo bool ------------ //
#include <stdbool.h>
#include <locale.h>

int reiniciar(float y[TAM][tam]) //reinicia matriz
{
	int i;
	int j;
	
	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < tam; j++)
		{
			y[i][j] = 1;
		}
	}
}
void tutorial5()
{
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                             ******************************************                       |\n");
			printf("             |                             * PRECIONE QUALQUER TECLA PARA PROSEGUIR *                       |\n");    
			printf("             |                             ******************************************                       |\n");
			printf("             |                                                                                              |\n");
			printf("             |                 *****************************************************************            |\n"); 
			printf("             |                 * ---------------------------nivel-5--------------------------- *            |\n"); 
			printf("             |                 * - Este nivel e composto por contas de adição, subtração,      *            |\n");
			printf("             |                 *    multiplicação e divisão.                                   *            |\n");
			printf("             |                 * - É necessário acertar 30 contas para desbloquear a chave.    *            |\n");   
			printf("             |                 * - É necessário acertar 35 contas para desbloquear a porta     *            |\n");
			printf("             |                 *   e passar de nivel.                                          *            |\n");
		    printf("             |                 * - Se errar 20 contas, vocâ perde !!!                          *            |\n");
		    printf("             |                 * ------------------------------------------------------------- *            |\n");
			printf("             |                 *****************************************************************            |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
}
void tutorial4()
{
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                             ******************************************                       |\n");
			printf("             |                             * PRECIONE QUALQUER TECLA PARA PROSEGUIR *                       |\n");    
			printf("             |                             ******************************************                       |\n");
			printf("             |                                                                                              |\n");
			printf("             |                 *****************************************************************            |\n"); 
			printf("             |                 * ---------------------------nivel-4--------------------------- *            |\n"); 
			printf("             |                 * - Este nivel é composto apenas por contas de divisão (/).     *            |\n");
			printf("             |                 * - É necessério acertar 25 contas para desbloquear a chave.    *            |\n");   
			printf("             |                 * - É necessário acertar 30 contas para desbloquear a porta     *            |\n");
			printf("             |                 *   e passar de nivel.                                          *            |\n");
		    printf("             |                 * - Se errar 18 contas, você perde !!!                          *            |\n");
		    printf("             |                 * ------------------------------------------------------------- *            |\n");
			printf("             |                 *****************************************************************            |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
}

void tutorial3()
{
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                             ******************************************                       |\n");
			printf("             |                             * PRESSIONE QUALQUER TECLA PARA PROSEGUIR*                       |\n");    
			printf("             |                             ******************************************                       |\n");
			printf("             |                                                                                              |\n");
			printf("             |                 *****************************************************************            |\n"); 
			printf("             |                 * ---------------------------nivel-3--------------------------- *            |\n"); 
			printf("             |                 * - Este nivel e composto apenas por contas de multiplicação(x).*            |\n");
			printf("             |                 * - É necessário acertar 20 contas para desbloquear a chave.    *            |\n");   
			printf("             |                 * - É necessário acertar 25 contas para desbloquear a porta     *            |\n");
			printf("             |                 *   e passar de nivel.                                          *            |\n");
		    printf("             |                 * - Se errar 15 contas, você perde !!!                          *            |\n");
		    printf("             |                 * ------------------------------------------------------------- *            |\n");
			printf("             |                 *****************************************************************            |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
}

void tutorial2()
{
			system("cls");
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                             ******************************************                       |\n");
			printf("             |                             * PRESSIONE QUALQUER TECLA PARA PROSEGUIR*                       |\n");    
			printf("             |                             ******************************************                       |\n");
			printf("             |                                                                                              |\n");
			printf("             |                 *****************************************************************            |\n"); 
			printf("             |                 * ---------------------------nivel-2--------------------------- *            |\n"); 
			printf("             |                 * - Este nivel é composto apenas por contas de subtração (-).   *            |\n");
			printf("             |                 * - É necessário acertar 12 contas para desbloquear a chave.    *            |\n");   
			printf("             |                 * - É necessário acertar 18 contas para desbloquear a porta     *            |\n");
			printf("             |                 *   e passar de nivel.                                          *            |\n");
		    printf("             |                 * - Se errar 12 contas, você perde !!!                          *            |\n");
		    printf("             |                 * ------------------------------------------------------------- *            |\n");
			printf("             |                 *****************************************************************            |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
}

void tutorial1()
{
			system("cls");
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                         *********************************************                        |\n");
			printf("             |                         *   PRESSIONE QUALQUER TECLA PARA PROSEGUIR *                        |\n");    
			printf("             |                         *********************************************                        |\n");
			printf("             |                                                                                              |\n");
			printf("             |                 *****************************************************************            |\n"); 
			printf("             |                 * ---------------------------nivel-1--------------------------- *            |\n"); 
			printf("             |                 * - Este nivel é composto apenas por contas de adição (+).      *            |\n");
			printf("             |                 * - É necessário acertar 5 contas para desbloquear a chave.     *            |\n");   
			printf("             |                 * - É necessário acertar 10 contas para desbloquear a porta     *            |\n");
			printf("             |                 *   e passar de nivel.                                          *            |\n");
		    printf("             |                 * - Se errar 10 contas, você perde !!!                          *            |\n");
		    printf("             |                 * ------------------------------------------------------------- *            |\n");
			printf("             |                 *****************************************************************            |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
}

void mgotoxy(int x,int y)
{	
  //Usando a biblioteca <conio.c> para posicionar na tela
  //gotoxy(x+1,y+1);
  
  //Usando a biblioteca <windows.h> para posicionar na tela
  COORD p={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tela_derrota()
{
	 system("cls");
     printf("             |==============================================================================================|\n");
	 printf("             |                                                                                              |\n");
	 printf("             |                                                                                              |\n");
	 printf("             |                                      |****************|                                      |\n");
	 printf("             |                                      | VOCÊ PERDEU :( |                                      |\n");
	 printf("             |                                      |****************|                                      |\n"); 
	 printf("             |                                                                                              |\n"); 
	 printf("             |                                                                                              |\n");
	 printf("             |                                      |--CLASSIFICAÇÃO--|                                     |\n");   
	 printf("             |                                      |1.               |                                     |\n");
	 printf("             |                                      |2.               |                                     |\n");
	 printf("             |                                      |3.               |                                     |\n");    
	 printf("             |                                      |4.               |                                     |\n");
	 printf("             |                                      |5.               |                                     |\n");
	 printf("             |                                      |-----------------|                                     |\n");
	 printf("             |                                                                                              |\n");
	 printf("             |                                                                                              |\n");
   	 printf("             |                                                                                              |\n");
	 printf("             |                                                                                              |\n");
	 printf("             |                                           SAIR (0)                                           |\n");
	 printf("             |                                                                                              |\n");
	 printf("             |                                                                                              |\n");
  	 printf("             |==============================================================================================|\n"); 

}


void menuprincipal(){
	system("cls");
	
			printf("             |\\==============================================================================================/|\n");
            printf("             |/           @                                                                      @           \\|\n");
			printf("             |\\         @       #         #            #    ###########  #       #     #      #    @         /|\n");
			printf("             |/       @        # #       # #          # #        #       #       #     #      #      @       \\|\n");
			printf("             |\\     @         #   #     #   #        #   #       #       #########     ########        @     /|\n");
			printf("             |/   @          #     #   #     #      # ### #      #       #########     ########          @   \\|\n"); 
			printf("             |\\     @       #       # #       #    #       #     #       #       #     #      #        @     /|\n"); 
			printf("             |/       @    #         #         #  #         #    #       #       #  #  #      #      @       \\|\n");
			printf("             |\\         @                                                                          @         /|\n");   
			printf("             |/           @                                                                      @           \\|\n");
		    printf("             |\\                                                                                              /|\n");
			printf("             |/                                                                                              \\|\n");    
			printf("             |\\                                 *****************************                                /|\n");
			printf("             |/                                 *   DIGITE A OPÇÃO DESEJADA *                                \\|\n");
			printf("             |\\                                 *****************************                                /|\n");
			printf("             |/                                   _________________________                                  \\|\n");
			printf("             |\\                                  | CADASTRAR JOGADOR    (2)|                                 /|\n");
			printf("             |/                                  |                         |                                 \\|\n");
			printf("             |\\                                  | LOGAR                (3)|                                 /|\n");
			printf("             |/                                  |                         |                                 \\|\n");
			printf("             |\\                                  | SAIR                 (0)|                                 /|\n");
			printf("             |/                                  |_________________________|              created by: LEO.JR \\|\n");
		  	printf("             |\\==============================================================================================/|\n");
	
}//menuprincipal

void telacadastro(){
	system("cls");
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                      ~~~~~~~~~~~~~~~~~~~~~~~                                 |\n");
			printf("             |                                      ||CADASTRO DO JOGADOR||                                 |\n"); 
			printf("             |                                      ||                   ||                                 |\n"); 
			printf("             |                                      || NOME:             ||                                 |\n");
			printf("             |                                      ||                   ||                                 |\n");   
			printf("             |                                      || SENHA:            ||                                 |\n");
			printf("             |                                      ~~~~~~~~~~~~~~~~~~~~~~~                                 |\n");
			printf("             |                                                                                              |\n");    
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
		    printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
		  	printf("             |==============================================================================================|\n");
	
} //cadastro

void telalogar(){
	system("cls");
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n"); 
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");       
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                       ~~~~~~~~~~~~~~~~~~~                                    |\n");
			printf("             |                                       ||     LOGAR     ||                                    |\n"); 
			printf("             |                                       ||               ||                                    |\n"); 
			printf("             |                                       || NOME:         ||                                    |\n");
			printf("             |                                       ||               ||                                    |\n");   
			printf("             |                                       || SENHA:        ||                                    |\n");
			printf("             |                                       ~~~~~~~~~~~~~~~~~~~                                    |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
			printf("             |==============================================================================================|\n"); 
} //tela logar

void usuariojaexiste(){
	system("cls");
			printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
			printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
			printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n"); 
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");       
			printf("             |                             ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||                       |\n");
			printf("             |                             ||ESTE NOME JÁ ESTÁ SENDO UTILIZADO,    ||                       |\n");
			printf("             |                             ||TENTE OUTRO. DIGITE ENTER PARA VOLTAR.||                       |\n");
			printf("             |                             ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||                       |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                         created by: LEO & JR |\n");
			printf("             |==============================================================================================|\n"); 
} 

void menudentrojogo(){
	system("cls");
					printf("             |==============================================================================================|\n");
					printf("             |                 @                                                      @                     |\n");
		    		printf("             |               @           *     *        *  *******  *   *   *   *       @                   |\n");
			   		printf("             |             @            * *   * *      * *    *     *****   *****         @                 |\n");
					printf("             |           @             *   * *   *    *****   *     *****   *****           @               |\n");
					printf("             |             @          *     *     *  *     *  *     *   * * *   *         @                 |\n");
					printf("             |               @                                                          @                   |\n");
					printf("             |                 @                                                      @                     |\n");
					printf("             |                                   ~~~~~~~~~~~~~~~~~~~~~~                                     |\n");
					printf("             |                                  *                      *                                    |\n");
					printf("             |                                  *  JOGAR           (5) *                                    |\n"); 
					printf("             |                                  *                      *                                    |\n"); 
					printf("             |                                  *  CONFIGURAR      (6) *                                    |\n");
					printf("             |                                  *                      *                                    |\n");   
					printf("             |                                  *  CLASSIICAÇÃO    (7) *                                    |\n");
					printf("             |                                  *                      *                                    |\n");
					printf("             |                                  *  SAIR            (0) *                                    |\n");    
					printf("             |                                   ~~~~~~~~~~~~~~~~~~~~~~                                     |\n");
					printf("             |                                                                                              |\n");
				 	printf("             |                               *****************************                                  |\n");
					printf("             |                               *  DIGITE A OPÇÃO DESEJADA  *                                  |\n");
					printf("             |                               *****************************             created by: LEO & JR |\n");
					printf("             |==============================================================================================|\n");
} // menu depois de logar

void telaconfigurar(){
	system("cls");
	
					printf("             |==============================================================================================|\n");
				    printf("             |                 ||============================================================||             |\n");
					printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
					printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
					printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
					printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
					printf("             |                 ||============================================================||             |\n");
					printf("             |                                                                                              |\n");
					printf("             |                          *******************           ************                          |\n");
					printf("             |                          *   CONFIGURAR    *           * DIGITE A *                          |\n"); 
					printf("             |                          *                 *           * OPÇÃO    *                          |\n"); 
					printf("             |                          *  COR DE FUNDO   *           * DESEJADA *                          |\n");
					printf("             |                          *                 *           *          *                          |\n");   
					printf("             |                          *  COR1 COR2 COR3 *           ************                          |\n");
					printf("             |                          *  (3)   (4)  (6) *                                                 |\n");
					printf("             |                          *                 *                                                 |\n");    
					printf("             |                          *******************                                                 |\n");
					printf("             |                                                                                              |\n");
					printf("             |                                                                                              |\n");
					printf("             |                                                                                              |\n");
					printf("             |                                                                                              |\n");
					printf("             |  <-- VOLTAR (1)                                                         created by: LEO & JR |\n");
				  	printf("             |==============================================================================================|\n");
} // tela de configuracao

void tabuleiro(int y)
{
	system("cls");
	printf("             |============================================nivel=%i===========================================|\n",y);
	printf("             |                     _____________________________________________________________________    |\n");
	printf("             | PONTOS:             |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             |		           |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | ACERTOS:		   |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             |                     |____   ____   ____   ____   ____   ____   ____   ____   ____   ____|    |\n"); 
	printf("             | ERROS:              |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n"); 
	printf("             |                     |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | --------------      |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");   
	printf("             | |  PERGUNTA  |      |____   ____   ____   ____   ____   ____   ____   ____   ____   ____|    |\n");
	printf("             | --------------      |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | |            |      |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | --------------      |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | A.                  |____   ____   ____   ____   ____   ____   ____   ____   ____   ____|    |\n");
	printf("             | B.                  |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | C.                  |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
    printf("             | D.                  |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | E.                  |____   ____   ____   ____   ____   ____   ____   ____   ____   ____|    |\n");
	printf("             |                     |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
    printf("             | CHAVE =             |====| |====| |====| |====| |====| |====| |====| |====| |====| |====|    |\n");
	printf("             | PORTA =             |====|_|====|_|====|_|====|_|====|_|====|_|====|_|====|_|====|_|====|    |\n");
	printf("             |                                                                                              |\n");
	printf("             |=============================================MATH.H===========================================|\n");
}

void telarank(){
	system("cls");
	
				     printf("             |==============================================================================================|\n");
					 printf("             |                 ||============================================================||             |\n");
					 printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
					 printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
					 printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			         printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
		        	 printf("             |                 ||============================================================||             |\n");
					 printf("             |                                                                                              |\n");
					 printf("             |                                                                                              |\n");
					 printf("             |                                                                                              |\n");
				   	 printf("             |                                       -------------------                                    |\n");
					 printf("             |                                       || CLASIFICAÇÃO  ||                                    |\n"); 
					 printf("             |                                       || 1.            ||                                    |\n"); 
					 printf("             |                                       || 2.            ||                                    |\n");
					 printf("             |                                       || 3.            ||                                    |\n");   
					 printf("             |                                       || 4.            ||                                    |\n");
					 printf("             |                                       || 5.            ||                                    |\n");
					 printf("             |                                       -------------------                                    |\n");    
					 printf("             |                                                                                              |\n");
					 printf("             |           <--- VOLTAR (1)                                                                    |\n");
					 printf("             |                                                                                              |\n");
					 printf("             |                                                                         created by: LEO & JR |\n");
				  	 printf("             |==============================================================================================|\n");
} // tela de ranking

void tela_erro_logar(){
	system("cls");
		 	printf("             |==============================================================================================|\n");
			printf("             |                 ||============================================================||             |\n");
		 	printf("             |                 ||           *     *        *  *******  *   *   *   *         ||             |\n");
		 	printf("             |                 ||          * *   * *      * *    *     *****   *****         ||             |\n");
			printf("             |                 ||         *   * *   *    *****   *     *****   *****         ||             |\n");
			printf("             |                 ||       *      *     *  *     *  *     *   * * *   *         ||             |\n");
		    printf("             |                 ||============================================================||             |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                    ----------------------------                              |\n");
			printf("             |                                    || NOME E/OU SENHA        ||                              |\n"); 
			printf("             |                                    || INVÁLIDOS.             ||                              |\n"); 
			printf("             |                                    || VOCÊ SERÁ REDIRECIONADO||                              |\n");
			printf("             |                                    || PARA O MENU PRINCIPAL! ||                              |\n");   
			printf("             |                                    ----------------------------                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |                                                                                              |\n");
			printf("             |==============================================================================================|\n"); 
}


void rank(int a[6]) // imprimir os pontos do rank
{
	int linha = 12;
	int i;
	for(i = 0; i < 5; i++)
	{
		gotoxy(67,linha);
		printf("%i",a[i]);
		linha++;
	}
}


void imprimi(int a[6]) // imprimir os pontos do rank
{
	int linha = 9;
	int i;
	for(i = 0; i < 5; i++)
	{
		gotoxy(67,linha);
		printf("%i",a[i]);
		linha++;
	}
}


main()
{
	setlocale(LC_ALL, "Portuguese");
	

	int compara = 0;
	int ultimo = 0;
	int aux2 = 0;
	int controle = 0;
	int vaux[10];
	int pontinhos[6];
	char nome_1[50][100];
	int vet_pontos[50];
	int vet[100]; // vetor para controlar o sorteio
	
	char nome1[30];    //variaveis do login
    char senha1[30];   //senha login
    
    char nome[30];   //variavel pro cadastro
    char senha[30];   //variavel cadastro
    
    int loginerro = 1;
    int validador;
    int cont = 1;
	char opc;
	opc=49; // variavel para opcoes
	
	int cor = 1; //variavel para cor
	
	float matriz[TAM][tam]; // matriz para o tabuleiro
	float n1 = 0,n2 = 0,num = 0; // variaveis para contas no tabuleiro

    // variaveis do TABULEIRO
	int tecla;      // Tecla a ser digitada
	int linha;      // Tecla que vai controlar a linha
	int coluna;     // Tecla que vai controlar a coluna
	tecla = linha = coluna = 0;  // Inicializando as variaveis com zero;
	int i = 0; //variavel contadora
	int j = 0; //variavel contadora
	int pontos = 0; // controlar os pontos
	int acertos = 0; // controlar os acertos
	int erros = 0; // controlar os erros
	int nivel = 1; //controlar o nivel
	char num2;
    int chave = 0, porta = 0; // variavel para mostrar na tla a chave e porta
    float n3,n4,n5,n6,result; // vriaveis para opco
    float sort; //sortear posicoes das ops
    int jogada = 0;
    char j1[30],j2[30],j3[30],j4[30],j5[30],j6[30],jaux[30], jaux2[30];
	int p1 = 0,p2 = 0,p3 = 0,p4= 0,p5 = 0,p6 = 0;
	int aux;
	
	
	for(i = 0; i < 6; i++) //inicializando vetor
 	{
 		pontinhos[i] = 0;
 		
	}
	
	for(i = 0; i < 10; i++) //inicializando vetor
 	{
 		
 		vaux[i] = 1; 
	}
	
	// inicializando matriz
	for(i = 0; i < TAM; i++)
    {
    	coluna = 0;
    	for(j = 0; j < tam; j++)
    	{
    		matriz[i][j] = 0;
    		matriz[i][j] = 1;
    	    coluna = coluna + 1;
    	}
    	linha = linha + 1;
    }//fim da matriz
	
	struct Usuarios{
		char nome[30];   //variavel pro cadastro
	    char senha[30];   //variavel cadastro
	    char nome1[30];    //variaveis do login
	    char senha1[30];   //senha login
	    int ponto[30];
	    //struct Pontos pontos[5];
	};
	
	struct Usuarios user[50];
	while(jogada < 1000) //controla as jogadas
	{
		
	 opc = 49;
	// chamando tela incial
	while (opc != 48) 
	{
		// INICIO DO MENU PRINCIPAL
		if(opc == 49){
			menuprincipal(); 
			
			system("color 2");  
		  	opc = getch();     
		  	system("cls");
		  	if(opc == 48)
		  	{
		  		exit(0);
		  	}
		
	
		 }else if(opc == 50){
		
			telacadastro();        // chamando tela de cadastro
			system("color 2");
		  	
		  	fflush(stdin);
		  	gotoxy(60,13);         //posicionando cursor
		  	scanf("%s", &user[cont].nome);
		  	getchar();
			gotoxy(61,15);         
		    scanf("%s", &user[cont].senha);  // guardando info                           	
		  	system("cls");
		
		  	FILE *jogadores;
			jogadores = fopen("C:\\Users\\Eduardo\\Desktop\\teste.txt", "a+");
			
			//------------------------------------------------VERIFICAR SE NOME JÁ EXISTE NO ARQUIVO------------------------------------------------//
			char *token;
			char str[MAXCHAR];
			bool isvalid = true;
			while (fgets(str, MAXCHAR, jogadores) != NULL) { // para cada linha do arquivo
				token = strtok(str, "|"); // separa o nome da senha e pega só o nome
				if (strcmp(user[cont].nome, token) == 0) { // compara se o nome sendo cadastro é igual ao nome da linha do arquivo
					isvalid = false;
					break;
				}
        	}
        	if (isvalid) {
				
				fprintf(jogadores, user[cont].nome);
				fprintf(jogadores, "|"); // separador para separar o nome da senha
				fprintf(jogadores, user[cont].senha);
				fprintf(jogadores, "|\n"); // quebra linha
				fclose(jogadores);
			  	cont++;
				system("cls");
				
				for(cont=0; cont<50; cont++)
				{
				//if()
				}
				opc=51;
			}
			else
			{
				fclose(jogadores);
				usuariojaexiste();
				getch();
				opc=50;
			}
		}
		else if(opc == 51){
		
			telalogar();
			gotoxy(61,16);
			fflush(stdin);  
			gets(nome1);
			gotoxy(62,18);
			fflush(stdin);
			gets(senha1);
			system("cls");
			  
	// -----------------------------------------------------------------------------------------------------------------------------------------------------
			FILE *jogadores;
			jogadores = fopen("C:\\Users\\Eduardo\\Desktop\\teste.txt", "a+");
			char *token;
			char str[MAXCHAR];
			char xNome[30];
			char xSenha[30];
			
			while (fgets(str, MAXCHAR, jogadores) != NULL) { // para cada linha do arquivo
				token = strtok(str, "|"); // separa o nome da senha e pega só o nome
				
				for (i = 0; i < 2; i++) {
					if (i == 0) {
						strcpy(xNome, token);
					}
					else {
						token = strtok(NULL, "|");
						strcpy(xSenha, token);
					}
				}
				
				if (strcmp(nome1, xNome) == 0 && strcmp(senha1, xSenha) == 0) {
					validador = 1;
					j = i;
					break;
				}
        	}  
			  			   	
//			for(i=0; i<50; i++){
//				if((strcmp(nome1, user[i].nome) == 0 ) && (strcmp(senha1, user[i].senha) == 0)) {      // comprando nome e senha pra ver se esta correto conforme o cadastro ja feito
//				validador = 1;
//				break;
//				}
			  	
			if(validador == 1)       // comprando nome e senha pra ver se esta correto conforme o cadastro ja feito
			{
				
				// INICIO DO MENU DENTRO DO JOGO
				system("cls");
			   	opc = 49;
			   	
			   	while(opc != 48){
			   		
			   	//------------------------------copiando strings e pontos para o rank e conferindo se ja nao a nome igual----------------------------//
			   		if(jogada == 0) //j1          
			   		{
			   			strcpy(j1,nome1);
			   			controle = 0;
			   		}
			   		else if(jogada == 1) // j2
			   		{
			   			
			   			
			   			if(strcmp(j1,nome1) == 0) //------ comparando jogador 2 com 1 -----------//
			   			{
			   				
			   				
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p1 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0;
			   						i = 6;
			   					
			   					}
			   				}
			   				controle = 0;
			   				p1 = 0;
			   				strcpy(j1,nome1);
			   			}
			   			else
			   			{
			   				strcpy(j2,nome1);
			   				controle = 1;
			   			}
			   		}
			   		else if(jogada == 2) //j3 
			   		{
			   			
			   			if(strcmp(j1,nome1) == 0) //  ------ comparango jogador 3 com 1 --------  //
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p1 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
			   						i = 6;
			   					
			   					}
			   				}
							p1 = 0;
							controle = 0; 
							strcpy(j1,nome1);  	
			   			}
			   			else if(strcmp(j2,nome1) == 0) // ---- comparando jogador 3 com 2 ----- //
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p2 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0;
			   					    i = 6;
			   					}
			   				}
			   				controle = 1;
			   				p2 = 0;
			   				strcpy(j2,nome1);
			   			}
			   			else if (strcmp(j3,nome1) == 0)
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p3 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
			   					    i = 6;
			   					}
			   				}
			   				controle = 2;
			   				p3 = 0;
			   				strcpy(j3,nome1);
			   			}
			   			else
			   			{
			   				strcpy(j3,nome1);
			   				controle = 2;
			   			}
			   			
			   		}
			   		else if(jogada == 3) //j4
			   		{
			   			
			   			if(strcmp(j3,nome1) == 0) 
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p3 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0;
									i = 6;			   					
			   					}
			   				}
			   				controle = 2;
			   				p3 = 0;
			   				strcpy(j3,nome1);
			   			}
			   			else if (strcmp(j1, nome1) == 0)
			   			{
			   				
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p1 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
									i = 6;			   					
			   					}
			   				}
			   				controle = 0;
			   				p1 = 0;
			   				strcpy(j1,nome1);
			   			
			   			}
			   			else if (strcmp(j2, nome1) == 0)
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p2 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
									i = 6;			   					
			   					}
			   				}
			   				controle = 1;
			   				p2 = 0;
			   				strcpy(j2,nome1);
			   			}
			   			else
			   			{
			   				strcpy(j4,nome1);
			   				controle = 3;
			   				
			   			}
			   		}
			   		else if(jogada == 4) //j5
			   		{
			   			
			   			if(strcmp(j4,nome1) == 0) //comparando jogador 5 com o 4
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p4 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0;
			   						i = 6;
			   					}
			   				}
			   				p4 = 0;
			   				strcpy(j4,nome1);
			   				controle = 3;
			   			}
			   			else if (strcmp(j3,nome1) == 0) //comparando jogador 5 com o 3
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p3 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
			   						i = 6;
			   					}
			   				}
			   				p3 = 0;
			   				strcpy(j3,nome1);
			   				controle = 2;
			   			}
			   			else if (strcmp(j2,nome1) == 0) //comparando jogador 5 com o 2
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p2 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0; 
			   						i = 6;
			   					}
			   				}
			   				p2 = 0;
			   				strcpy(j2,nome1);
			   				controle = 1;
			   			}
			   			else if (strcmp(j1,nome1) == 0) //comparando jogador 5 com o 1
			   			{
			   				for (i = 0; i < 5; i++)
			   				{
			   					if(p1 == pontinhos[i])
			   					{
			   						pontinhos[i] = 0;
			   						i = 6;
			   					}
			   				}
			   				p1 = 0;
			   				strcpy(j1,nome1);
			   				controle = 0;
			   			}
			   			else
			   			{
			   				strcpy(j5,nome1);
			   				controle = 4;
			   			}
			   		}
			   		else 
			   		{
			   			
			   			
			   			if (strcmp(j1,nome1) == 0) //comparando jogador 6 com o 1
			   			{
			   				compara = p1;
			   				for(i = 0; i < 5; i++)
			   				{
			   					if(p1 == pontinhos[i])
			   					{
			   						pontinhos[i] = p1;
			   						i = 5;
			   					}
			   				}
			   				p1 = 0;
			   				strcpy(j1,nome1);
			   				controle = 0;
			   				
			   				
			   			}
			   			else if (strcmp(j2,nome1) == 0) //comparando jogador 6 com o 2
			   			{
			   				compara = p2;
			   				for(i = 0; i < 5; i++)
			   				{
			   					if(p2 == pontinhos[i])
			   					{
			   						pontinhos[i] = p2;
			   						i = 5;
			   					}
			   				}
			   				
			   				p2 = 0;
			   				strcpy(j2,nome1);
			   				controle = 1;
			   				
			   			}
			   			else if (strcmp(j3,nome1) == 0) //comparando jogador 6 com o 3
			   			{
			   				compara = p3;
			   				for(i = 0; i < 5; i++)
			   				{
			   					if(p3 == pontinhos[i])
			   					{
			   						pontinhos[i] = p3;
			   						i = 5;
			   					}
			   				}
			   				
			   				p3 = 0;
			   				strcpy(j3,nome1);
			   				controle = 2;
			   				
			   			}
			   			else if (strcmp(j4,nome1) == 0) //comparando jogador 6 com o 4
			   			{
			   				compara = p4;
			   				for(i = 0; i < 5; i++)
			   				{
			   					if(p4 == pontinhos[i])
			   					{
			   						pontinhos[i] = p4;
			   						i = 5;
			   					}
			   				}
			   				
			   				p4 = 0;
			   				strcpy(j4,nome1);
			   				controle = 3;
			   				
			   			}
			   			else if (strcmp(j5,nome1) == 0) //comparando jogador 6 com o 5
			   			{
			   				compara = p5;
			   				for(i = 0; i < 5; i++)
			   				{
			   					if(p5 == pontinhos[i])
			   					{
			   						pontinhos[i] = p5;
			   						i = 5;
			   					}
			   				}
			   				
			   				
			   				p5 = 0;
			   				strcpy(j5,nome1);
			   				controle = 4;
			   				
			   			}
			   		  
			   			
		   				else
			  			{		
			  		 					
							strcpy(j6,nome1);
				 			controle = 5;
		  					p6 = 0;
			   						
					    }
			   			
			   		
			   		}
			   		
			   		
			   		
			   		pontos = 0;
			   			
			   		if(opc == 49)
					{			
						menudentrojogo();
				  		opc = getch();
				  		system("cls");
				  		if (opc == 54)
						{
							telaconfigurar();
				  			while(opc != 49)
				  			{
                                // comandos para troca de cor
				  				if(cor == 1) // opc 4  branco
				  				{
				  					system("color 2");
				  				}
				  				else if(cor == 6) // opc 6 // verde
				  				{
				  					system("color 7");
				  				}
				  				else // opc 3 // tipo amarelo
				  				{
				  					system("color 6");
				  				}
				  			
				  				opc = getch();
				  			
							    if(opc == 54)
								{
									cor = 6;
									
								}	
								else if(opc == 51)
								{	
									cor = 3;
								}
								else if(opc == 52)
								{
									cor = 1;
								}
								else if(opc == 49)
								{
									opc = 49;
								}
								else
								{
								  opc = 54;
					    		}// fim dos comando de troca de cor 
									
							 } // fim while
				  	    }
				  	    else if (opc == 55)
						  {
				  	    	
				  	        telarank();
				  	        
				  	        
				  	        //----------------------ORDENADO VETOR----------------//
							for(i = 0; i < 5; i++)
							{
								for(j = i; j < 5; j++)
								{
									if(pontinhos[i] < pontinhos[j])
									{
										aux = pontinhos[i];
										pontinhos[i] = pontinhos[j];
										pontinhos[j] = aux;
				
									}
								}
							}
							//-------------------fim ordenacao-------------------//
												
											
							//-------------------reiniciando vetor aux-----------//
												
							for(i = 0; i < 10; i++)
							{
								vaux[i] = 1;
							}
												
							//------------------vim vetot aux--------------------//
				  	        
				  	        
				  	        
				  	        
				  	        //--------------------------------posicionando jogador 1---------------------------------//
							if((p1 == pontinhos[0]) && (vaux[0] != 0))  
							{
								gotoxy(58,12);
								printf("%s",j1);
								vaux[0] = 0;
								
							}
							else if((p1 == pontinhos[1]) && (vaux[1] != 0))
							{
							    gotoxy(58,13);
								printf("%s",j1);
								vaux[1] = 0;
								
													
							}
							else if((p1 == pontinhos[2]) && (vaux[2] != 0))
							{
							    gotoxy(58,14);
								printf("%s",j1);
								vaux[2] = 0;
								
							}
							else if((p1 == pontinhos[3]) && (vaux[3] != 0))
							{
							    gotoxy(58,15);
								printf("%s",j1);
								vaux[3] = 0;
								
							}
							else if((p1 == pontinhos[4]) && (vaux[4] != 0))
							{
								gotoxy(58,16);
								printf("%s",j1);
								vaux[4] = 0;
								ultimo = 1;
							}
											
											
											
												
												
							//------------------------- posicionando jogador 2 ----------------------------------//
							if((p2 == pontinhos[0]) && (vaux[0] != 0))
							{
								gotoxy(58,12);
								printf("%s",j2);
								vaux[0] = 0;
								
														
							}
							else if((p2 == pontinhos[1]) && (vaux[1] != 0))
							{
					 		   	gotoxy(58,13);
								printf("%s",j2);
								vaux[1] = 0;
								
							}
							else if((p2 == pontinhos[2]) && (vaux[2] != 0))
							{
								gotoxy(58,14);
								printf("%s",j2);
								vaux[2] = 0;
								
							}
							else if((p2 == pontinhos[3]) && (vaux[3] !=0))
							{
							 	gotoxy(58,15);
								printf("%s",j2);
								vaux[3] = 0;
								
							}
							else if((p2 == pontinhos[4]) && (vaux[4] != 0))
							{
								gotoxy(58,13);
								printf("%s",j2);
								vaux[4] = 0;
								
							}
											
												
												
							//-----------------------------posicionando jogador 3 ---------------------------//
							if((p3 == pontinhos[0]) && (vaux[0] != 0))
							{
								gotoxy(58,12);
								printf("%s",j3);
								vaux[0] = 0;
								
													
							}
							else if((p3 == pontinhos[1]) && (vaux[1] != 0))
							{
								gotoxy(58,13);
								printf("%s",j3);
								vaux[1] = 0;
								
							}
							else if((p3 == pontinhos[2]) && (vaux[2] != 0))
							{
								gotoxy(58,14);
								printf("%s",j3);
								vaux[2] = 0;
								
							}
							else if((p3 == pontinhos[3]) && (vaux[3] != 0))
							{
								gotoxy(58,15);
								printf("%s",j3);
								vaux[3] = 0;
								
							}
							else if((p3 == pontinhos[4]) && (vaux[4] != 0))
							{
								gotoxy(58,16);
								printf("%s",j3);
								vaux[4] = 0;
								
							}
												
												
												
							//------------------------posicionando jogador 4 --------------------------------//
							if((p4 == pontinhos[0]) && (vaux[0] != 0))
							{
								gotoxy(58,12);
								printf("%s",j4);
								vaux[0] = 0;
								
							}
							else if((p4 == pontinhos[1]) && (vaux[1] != 0))
							{
								gotoxy(58,13);
								printf("%s",j4);
								vaux[1] = 0;
								
							}
							else if((p4 == pontinhos[2]) && (vaux[2] != 0))
							{
								gotoxy(58,14);
								printf("%s",j4);
								vaux[2] = 0;
								
							}
							else if((p4 == pontinhos[3]) && (vaux[3] != 0))
							{
								gotoxy(58,15);
								printf("%s",j4);
								vaux[3] = 0;
								
							}
							else if((p4 == pontinhos[4]) && (vaux[4] != 0))
							{
								gotoxy(58,16);
								printf("%s",j4);
								vaux[4] = 0;
								
							}
												
												
												
							//------------------------posicionando jogador 5---------------------//
							if((p5 == pontinhos[0]) && (vaux[0] != 0))
							{
								gotoxy(58,12);
								printf("%s",j5);
								vaux[0] = 0;
								
							}
							else if((p5 == pontinhos[1]) && (vaux[1] != 0))
							{
								gotoxy(58,13);
								printf("%s",j5);
								vaux[1] = 0;
								
							}
							else if((p5 == pontinhos[2]) && (vaux[2] != 0))
							{
								gotoxy(58,14);
								printf("%s",j5);
								vaux[2] = 0;
								
							}
							else if((p5 == pontinhos[3]) && (vaux[3] != 0))
							{
								gotoxy(58,15);
								printf("%s",j5);
								vaux[3] = 0;
								
							}
							else if((p5 == pontinhos[4]) && (vaux[4] != 0))
							{
								gotoxy(58,16);
								printf("%s",j5);
								vaux[4] = 0;
								
							}
							//-------------------- fim do pocisionamento--------------------//
												
												
							rank(pontinhos);  //mostrando rank
				  	        
				  	        
				  	        
				  	        while(opc != 49)
				  	        opc = getch();
				  	        if (opc == 49)
							{
				  	        	
				  	        	opc = 49;
							}
							else
							{
								opc = 55;
							}
				  	    	
						}
						else if(opc == 53)
						{

							// POSICIONANDO PERSONAGEM ALEATORIAMENTE
							// obs deixar tudo aleatorio ord numeros dos quadrado de 1 a 50
							srand(time(NULL));
							for(i = 0; i < 100; i++)
							{
								vet[i] = rand() %1000;
								if((vet[i] == 51) || (vet[i] == 44) || (vet[i] == 37) || (vet[i] == 58) || (vet[i] == 65) || (vet[i] == 72))
								{
									coluna = vet[i];  //posicionando pelo valor referente a coluna
									linha = 19;
									i = 100;
								}
								else if((vet[i] == 79) || (vet[i] == 86) || (vet[i] == 93) || (vet[i] == 100))
								{
									coluna = vet[i];
									linha = 19;
									i = 100;
									
								}
								else if((vet[i] == 15) || (vet[i] == 19) || (vet[i] == 11) || (vet[i] == 7) || (vet[i] == 3))
								{
									linha = vet[i];  // posicionando pelo valor referente a linha
									coluna = 37;
									i = 100;
								
								}
								else if(vet[i] == 1)
								{
									linha = 3;
									coluna = 44;
									i = 100;
								}
								else if(vet[i] == 2)
								{
									linha = 11;
									coluna = 58;
									i = 100;
								}
								else if(vet[i] == 4)
								{
									linha = 15;
									coluna = 86;
									i = 100;
								}
								else if(vet[i] == 5)
								{
									linha = 7;
									coluna = 86;
									i = 100;
								}
								else if(vet[i] == 6)
								{
									linha = 11;
									coluna = 100;
									i = 100;
								}
								else
								{
									linha = 3;
									coluna = 65;
									i = 100;
								}
				         	}	
							// FIM DO POSICIONAMENTO
							tutorial1();
							getch();
							// TABULEIRO
							system("cls"); 
							tabuleiro(nivel);
							while((opc != 48) && (opc != 13))
							{
							
							// possicionando na tela
							gotoxy(24,2); //limpando os pontos
							printf("   ");
							
							gotoxy(24,2);
							printf("%i",pontos);
							
							gotoxy(24,4);
							printf("%i",acertos);
							
							gotoxy(22,6);
							printf("%i",erros);
							// fim do possicionamento	
								
							gotoxy(coluna,linha); //possicionando personagem
							printf("%c",64);
							
                            gotoxy(0,23);
							tecla = getch(); 
							
							if(matriz[linha][coluna] == 1) // 1 = desbloqueado
							{
							    // preenchendo a possicao q o personagem deixa para tras
								mgotoxy(coluna,linha);
								printf("="); 
						    }
							if(matriz[linha][coluna] == 0)// 0 = bloqueado
							{
								//limpando o quadrado qundo acerta
								gotoxy(coluna-1,linha);
								printf("    ");
								gotoxy(coluna - 1,linha - 1);
								printf("    ");
								gotoxy(coluna - 1,linha + 1);
								printf("____");
								
							}
                                // COMANDOS DA SETA BAIXO							
								if(tecla == ABAIXO)
								{
									if ((linha == 19) && (coluna == 51) || (linha == 19) && (coluna == 44) || (linha == 19) && (coluna == 37))  
									{
										linha = linha;
										coluna = coluna;
										
									}
									else if((linha == 19) && (coluna == 58) || (linha == 19) && (coluna == 65) || (linha == 19) && (coluna == 72))
									{
										linha = linha;
										coluna = coluna;
									}
									else if((linha == 19) && (coluna == 79) || (linha == 19) && (coluna == 86) || (linha == 19) && (coluna == 93) || (linha == 19) && (coluna == 100))
									{
										linha = linha;
										coluna = coluna;
									}
									else
									{
										linha = linha + 4;
									}
								}
								// COMANDOS DA SETA ESQUERDA
								else if (tecla == ESQUERDA)
								{
									if ((linha == 15) && (coluna == 37) || (linha == 19) && (coluna == 37) || (linha == 11) && (coluna == 37))
									{
										linha = linha;
										coluna = coluna;
									}
									else if ((linha == 7) && (coluna == 37) || (linha == 3) && (coluna == 37))
									{
										linha = linha;
										coluna = coluna;
									}
									else
									{
										coluna = coluna - 7;
									}
								}
								//COMANDOS SETA CIMA
								else if (tecla == ACIMA)
								{
									if((linha == 3) && (coluna == 37) || (linha == 3) && (coluna == 44) || (linha == 3) && (coluna == 51))
									{
										linha = linha;
										coluna = coluna;
									}
									else if ((linha == 3) && (coluna == 58) || (linha == 3) && (coluna == 65) || (linha == 3) && (coluna == 72))
									{
										linha = linha;
										coluna = coluna;
									}
									else if ((linha == 3) && (coluna == 79) || (linha == 3) && (coluna == 86) || (linha == 3) && (coluna == 93) || (linha == 3) && (coluna == 100))
									{
										linha = linha;
										coluna = coluna;
									}
									else
									{
										linha = linha - 4;
									}
								}
								// COMANDOS SETA DIREIRA
								else if(tecla == DIREITA)
								{
										if ((linha == 15) && (coluna == 100) || (linha == 100) && (coluna == 100) || (linha == 100) && (coluna == 100))
									{
										linha = linha;
										coluna = coluna;
									}
									else if ((linha == 7) && (coluna == 100) || (linha == 3) && (coluna == 100) || (linha == 19) && (coluna == 100) || (linha == 11) && (coluna == 100))
									{
										linha = linha;
										coluna = coluna;
									}
									else
									{
										coluna = coluna + 7;
									}
								}
								
								if(tecla == 13) //tecla enter
								{
								
									if(matriz[linha][coluna] == 1)
									{
										
										n2 = rand() %10 + rand() %10;    
										n1 = rand() %10 + rand() %10;   
										n3 = rand() %10 + rand() %10;
										n4 = rand() %10 + rand() %10;      //numeros aleatorios para as opcoes
										n5 = rand() %10 + rand() %10;
										n6 = rand() %10 + rand() %10;
										result = n1 + n2;
								
										if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
										{
											while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
											{
												n2 = rand() %10 + rand() %10;    
												n1 = rand() %10 + rand() %10;   
												n3 = rand() %10 + rand() %10;
												n4 = rand() %10 + rand() %10;      //evitar ter resultados iguais 
												n5 = rand() %10 + rand() %10;
												n6 = rand() %10 + rand() %10;
												result = n1 + n2;
											}	
										}
										

										
										gotoxy(18,11);
										printf("%2.f",n2);
			
										gotoxy(21,11);
										printf("+");
										
										gotoxy(23,11);
										printf("%2.f",n1);
										
										gotoxy(15,18);
										printf("ESCOLHA A OPCAO: ");
						
										sort = rand()%5; //selecionando a letra que o result caira
										
											if(sort == 4)
											{
												
												matriz[17][18] = result;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
												matriz[16][18] = n3;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 3)
											{
												matriz[16][18] = result;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 2)
											{
												matriz[15][18] = result;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else if (sort == 1)
											{
												matriz[14][18] = result;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[15][18] = n5;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else
											{
												matriz[13][18] = result;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [15][18] = n6;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
											}// fim do selecionamento
										
											gotoxy(31,18);
											num2 = getch();

										
										if((num2 == 101) || (num2 == 69)) //veredicando resposta na matriz
										{
										    if (matriz[17][18] == result)
										    {
										    	
										    	num = result;
										    }
										    else
										    {
										    	num = -1;
										    }
										}
										else if ((num2 == 68) || (num2 == 100))
										{
											if (matriz[16][18] == result)
										    {
										    	
										    	num = result;
										    }
										    else
										    {
										    	num = -1;
										    }
										}
										else if ((num2 == 67) || (num2 == 99))
										{
											if (matriz[15][18] == result)
										    {
										    	
										    	num = result;
										    }
										    else
										    {
										    	num = -1;
										    }
										}
										else if ((num2 == 66) || (num2 == 98))
										{
											if (matriz[14][18] == result)
										    {
										    	
										    	num = result;
										    }
										    else
										    {
										    	num = -1;
										    }
										}
										else if ((num2 == 65) || (num2 == 97))
										{
											if (matriz[13][18] == result)
										    {
										    	
										    	num = result;
										    }
										    else
										    {
										    	num = -1;
										    }
										}// fim da verificação
										
										else if((num2 != 65) || (num2 != 66) || (num2 != 67) || (num2 != 68) || (num2 != 69))
										{
											gotoxy(16,11);           // verificando opcao escolhida
											printf("invalido  ");
											getch();
											gotoxy(16,11);
											printf("           ");
											
											num = -2;
										}
										else if((num2 != 97) || (num2 != 98) || (num2 != 99) || (num2 != 100) || (num2 != 101))
										{
											gotoxy(16,11);            // fim da verificação
											printf("invalido  ");
											getch();
											gotoxy(16,11);
											printf("           ");
											
											num = -2;
										}
									
										
										gotoxy(15,18); // limpa 
										printf("                 "); 
										
										if(num == result) //conferindo o resultado
										{
											
											matriz[linha][coluna] = 0;
											gotoxy(16,11);
											printf("            ");  
											pontos = pontos + 3;
											acertos++;
																							    
											gotoxy(16,11);
											printf("ACERTOU   ");
											getch(); // usar sleep(1)  no lugar de getch();
											gotoxy(16,11); 
											printf("            ");
												
											if(acertos == 5) // desbloqueio chave
											{
												
												gotoxy(15,18);
												printf("CHAVE DESBLOQUEADA");
											    getch();
												
												gotoxy(15,18);
												printf("                    ");
												
												gotoxy(23,19);
												printf("%i",chave + 1);
											
											}
											
											if(acertos == 10) //desbloqueio porta e proximo nivel
											{
											
												gotoxy(15,18);
												printf("PORTA DESBLOQUEADA");
												getch();
												
												gotoxy(15,18);
												printf("                    ");
												
												gotoxy(23,20);
												printf("%i",porta + 1);
												getch();
												
												nivel = 2; // variavel para mudar de nivel
												opc = 48; // saindo do nivel 1 
												
						
												
											}	
										}
										else if (num == -2)
										{
											num = num;
										}
										else 
										{
											linha = linha;
											coluna = coluna;
											erros = erros + 1;
											gotoxy(16,11);
											printf("            ");
											gotoxy(16,11);
											printf("ERROU   ");
											getch(); // usar sleep(1)  no lugar de getch();
											gotoxy(16,11);
											printf("            ");
											
											
											if(pontos == 0)
											{
												pontos = pontos;				
												
											}
											else
											{
											
												pontos = pontos - 1;
												
											}
										
											
											if(erros == 10)
											{
												opc = 49;
												tela_derrota();
												
												//-------------------------------atribuindo pontos para jogadores-------------------//
												if(controle == 0)
												{
													    if(jogada < 5)
													    {
													    	p1 = pontos;
															pontinhos[0] = p1;
													    }
													    else
													    {
													    
													    	for(i = 0; i < 5; i++)
													   		{
													    		if(compara == pontinhos[i])
													    		{
													    	
																	p1 = pontos;
																	pontinhos[i] = p1;
																	i = 5;
																}
													   		 }
													    }
												}
												else if(controle == 1)
												{
													if(jogada < 5)
													{
													    p2 = pontos;
														pontinhos[1] = p2;
													}
													else
													{
														
													
													
														for(i = 0; i < 5; i++)
														 {
													    	if(compara == pontinhos[i])
													    	{
												    	
																p2 = pontos;
																pontinhos[i] = p2;
																i = 5;
														    }
														}
												    }
													
												}
												else if(controle == 2)
												{
												
														if(jogada < 5)
													    {
													    	p3 = pontos;
															pontinhos[2] = p3;
													    }
														else
														{
																
															for(i = 0; i < 5; i++)
														    {
															    	if(compara == pontinhos[i])
														    		{
														    	
																		p3 = pontos;
																		pontinhos[i] = p3;
																		i = 5;
																	}
														   	 }
														}
												    
												}
												else if(controle == 3)
												{
													
														if(jogada < 5)
													    {
													    	p4 = pontos;
															pontinhos[3] = p4;
													    }
														else
														{
														
													
															for(i = 0; i < 5; i++)
													    	{
													  	 	 	if(compara == pontinhos[i])
													  		  	{
													    	
																	p4 = pontos;
																	pontinhos[i] = p4;
																	i = 5;
																}
														    }
		                                               }
		                                               
												}
												else if(controle == 4)
												{
														
														if(jogada < 5)
													    {
													    	p5 = pontos;
															pontinhos[4] = p5;
													    }
													    else
													    {
													    
															for(i = 0; i < 5; i++)
													   		{
													   		 	if(compara == pontinhos[i])
													    		{
													    	
																	p5 = pontos;
																	pontinhos[i] = p5;
																	i = 5;
																}
													   	 	}
		                                            
		                                               }
												}
												else
												{
													
													 if(ultimo == 1) 
										   			{
										   				
										   					p6 = pontos;
										   				
														   	if(p6 >= p1)
														   	{
														   	
												   				p1 = p6;			
														        pontinhos[4] = p6;    
										   			     	    strcpy(j1,nome1);
												   		        controle = 0;
										   		        	}
										   		        	else
										   		        	{
										   		        		p1 = p1;
													   			strcpy(j1,j1);
													   			controle = 0;
										   		        	}
													   
													   
													   
											 		}
									   				else if (ultimo == 2) 
									   				{	
									   				
														p6 = pontos;
																							   				
									   					if (p6 >= p2)
									   					{
									   					
											   				p2 = p6;	
											   				pontinhos[4] = p6;		
											   				strcpy(j2,nome1);
											   				controle = 1;
										   				
										   			    }
										   				else
										   				{
										   					p2 = p2;
													   		strcpy(j2,j2);
													   		controle = 1;
										   				}
										   				
										   			}
										   			else if (ultimo == 3) 
										  	 		{
										  	 			p6 = pontos;
										  	 			
										   				if(p6 >= p3)
														{
														   		
											   				p3 = p6;		
											   				pontinhos[4] = p6;
															strcpy(j3,nome1);
															controle = 2;
														}
														else
														{
															p3 = p3;
													   		strcpy(j3,j3);
													   		controle = 2;
														}
									  				
									  				}
									 				else if (ultimo == 4) 
										  			{
										   					
										   				p6 = pontos;
														   	
												   		if(p6 >= p4)
														{
														   			
											   				p4 = p6;		
															pontinhos[4] = p6;
											   				strcpy(j4,nome1);
											  				controle = 3;
										  	 			}
										  	 			else
										  	 			{
										  	 				p4 = p4;
													   		strcpy(j2,j2);
													   		controle = 3;
										  	 			}
										  	 			
													}
							 		  				else if (ultimo == 5) 
								  					{
								  						p6 = pontos;
								  						
										   				if(p6 >= p5)
														{
															
											 		  		p5 = p6;			
											   				pontinhos[4] = p6;
										   					strcpy(j5,nome1);
									  						controle = 4;
									 				    }
									 				    else
									 				    {
									 				    	p5 = p5;
													   		strcpy(j5,j5);
													   		controle = 4;
									 				    }
									 				}
													
												}
										    	//----------------fim atribuicao-----------------------//
										    	
										    	
										    	//----------------------ORDENADO VETOR----------------//
												for(i = 0; i < 5; i++)
												{
													for(j = i; j < 5; j++)
													{
														if(pontinhos[i] < pontinhos[j])
														{
															aux = pontinhos[i];
															pontinhos[i] = pontinhos[j];
															pontinhos[j] = aux;
				
														}
													}
												}
												//-------------------fim ordenacao-------------------//
												
											
												//-------------------reiniciando vetor aux-----------//
												
												for(i = 0; i < 10; i++)
												{
													vaux[i] = 1;
												}
												
												//------------------vim vetot aux--------------------//
											
											    
											    //--------------------------------posicionando jogador 1---------------------------------//
												if((p1 == pontinhos[0]) && (vaux[0] != 0))  
												{
													gotoxy(55,9);
													printf("%s",j1);
													vaux[0] = 0;
													
												}
												else if((p1 == pontinhos[1]) && (vaux[1] != 0))
												{
												    gotoxy(55,10);
													printf("%s",j1);
													vaux[1] = 0;
													
													
												}
												else if((p1 == pontinhos[2]) && (vaux[2] != 0))
												{
												    gotoxy(55,11);
													printf("%s",j1);
													vaux[2] = 0;
													
												}
												else if((p1 == pontinhos[3]) && (vaux[3] != 0))
												{
												    gotoxy(55,12);
													printf("%s",j1);
													vaux[3] = 0;
													
												}
												else if((p1 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j1);
													vaux[4] = 0;
													ultimo = 1;
												}
											
											
											
												
												
												//------------------------- posicionando jogador 2 ----------------------------------//
												if((p2 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j2);
													vaux[0] = 0;
													
														
												}
												else if((p2 == pontinhos[1]) && (vaux[1] != 0))
												{
											    	gotoxy(55,10);
													printf("%s",j2);
													vaux[1] = 0;
													
												}
												else if((p2 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j2);
													vaux[2] = 0;
													
												}
												else if((p2 == pontinhos[3]) && (vaux[3] !=0))
												{
												 	gotoxy(55,12);
													printf("%s",j2);
													vaux[3] = 0;
													
												}
												else if((p2 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j2);
													vaux[4] = 0;
													ultimo = 2;
												}
											
												
												
												//-----------------------------posicionando jogador 3 ---------------------------//
												if((p3 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j3);
													vaux[0] = 0;
													
													
												}
												else if((p3 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j3);
													vaux[1] = 0;
													
												}
												else if((p3 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j3);
													vaux[2] = 0;
													
												}
												else if((p3 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j3);
													vaux[3] = 0;
													
												}
												else if((p3 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j3);
													vaux[4] = 0;
													ultimo = 3;
												}
												
												
												
												//------------------------posicionando jogador 4 --------------------------------//
												if((p4 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j4);
													vaux[0] = 0;
													
												}
												else if((p4 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j4);
													vaux[1] = 0;
													
												}
												else if((p4 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j4);
													vaux[2] = 0;
													
												}
												else if((p4 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j4);
													vaux[3] = 0;
													
												}
												else if((p4 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j4);
													vaux[4] = 0;
													ultimo = 4;
												}
												
												
												
												//------------------------posicionando jogador 5---------------------//
												if((p5 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j5);
													vaux[0] = 0;
													
												}
												else if((p5 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j5);
													vaux[1] = 0;
													
												}
												else if((p5 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j5);
													vaux[2] = 0;
													
												}
												else if((p5 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j5);
													vaux[3] = 0;
													
												}
												else if((p5 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j5);
													vaux[4] = 0;
													ultimo = 5;
												}
											   //-------------------- fim do pocisionamento--------------------//
												
												
												imprimi(pontinhos); //mostrando postos do rank
										
												
												while(opc != 48) 
												{
													opc = getch();
													
												    if(opc == 48)
													{
														system("cls");			
														opc = 48;
													}
													else
													{
														opc = opc;
													}						
												}								
											}	
										}	
									}
								}
								//limpando opcs
								gotoxy(18,17);
								printf("    ");
											
										
								gotoxy(18,16);
								printf("    ");
											
										    
							    gotoxy(18,15);
								printf("    ");
											
											
								gotoxy(18,14);
								printf("    ");
											
								gotoxy(18,13);
								printf("    ");
								
								
								
								
						    }
						    
						    if(nivel == 2)   // inicio nivel 2
						    {
						    	//funcao p reiciar matriz
						    	reiniciar(matriz);
	
						    	opc = 49;
						    	tutorial2();
						    	getch();
						    	system("cls");
						    	
						    	tabuleiro(nivel);
							    while((opc != 48) && (opc != 13)) //comandos para o nivel 2
								{
								
								// possicionando na tela
								gotoxy(24,2); //apagando os pontos
								printf("   ");
								
								gotoxy(24,2);
								printf("%i",pontos);
								
								gotoxy(24,4);
								printf("%i",acertos);
								
								gotoxy(22,6);
								printf("%i",erros);
								// fim do possicionamento	
									
								gotoxy(coluna,linha); //possicionando personagem
								printf("%c",64);
								
	                            gotoxy(0,23);
								tecla = getch(); 
								
								if(matriz[linha][coluna] == 1) // 1 = desbloqueado
								{
								    // preenchendo a possicao q o personagem deixa para tras
									mgotoxy(coluna,linha);
									printf("="); 
							    }
								if(matriz[linha][coluna] == 0)// 0 = bloqueado
								{
									//limpando o quadrado qundo acerta
									gotoxy(coluna-1,linha);
									printf("    ");
									gotoxy(coluna - 1,linha - 1);
									printf("    ");
									gotoxy(coluna - 1,linha + 1);
									printf("____");
									
								}
	                                // COMANDOS DA SETA BAIXO							
									if(tecla == ABAIXO)
									{
										if ((linha == 19) && (coluna == 51) || (linha == 19) && (coluna == 44) || (linha == 19) && (coluna == 37))  
										{
											linha = linha;
											coluna = coluna;
											
										}
										else if((linha == 19) && (coluna == 58) || (linha == 19) && (coluna == 65) || (linha == 19) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if((linha == 19) && (coluna == 79) || (linha == 19) && (coluna == 86) || (linha == 19) && (coluna == 93) || (linha == 19) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha + 4;
										}
									}
									// COMANDOS DA SETA ESQUERDA
									else if (tecla == ESQUERDA)
									{
										if ((linha == 15) && (coluna == 37) || (linha == 19) && (coluna == 37) || (linha == 11) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 37) || (linha == 3) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna - 7;
										}
									}
									//COMANDOS SETA CIMA
									else if (tecla == ACIMA)
									{
										if((linha == 3) && (coluna == 37) || (linha == 3) && (coluna == 44) || (linha == 3) && (coluna == 51))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 58) || (linha == 3) && (coluna == 65) || (linha == 3) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 79) || (linha == 3) && (coluna == 86) || (linha == 3) && (coluna == 93) || (linha == 3) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha - 4;
										}
									}
									// COMANDOS SETA DIREIRA
									else if(tecla == DIREITA)
									{
											if ((linha == 15) && (coluna == 100) || (linha == 100) && (coluna == 100) || (linha == 100) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 100) || (linha == 3) && (coluna == 100) || (linha == 19) && (coluna == 100) || (linha == 11) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna + 7;
										}
									}
									
									if(tecla == 13) //tecla enter
									{
									
										if(matriz[linha][coluna] == 1)
										{
											
											n2 = rand() %16;    
											n1 = rand() %16;   
											n3 = rand() %15;
											n4 = rand() %14;      //numeros aleatorios para as opcoes
											n5 = rand() %13;
											n6 = rand() %12;
											
											if (n2 > n1)
											{
												n1 = n2 + rand()%5;
											}
											
											result = n1 - n2;
											
										    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
											{
												while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													n2 = rand() %10;    
													n1 = rand() %10;   
													n3 = rand() %10;
													n4 = rand() %10;      
													n5 = rand() %10;
													n6 = rand() %10;
													
													if (n2 > n1)
													{
														n1 = n2 + rand()%5;
													}	
													result = n1 - n2;
													
												}	
											}
											
											gotoxy(18,11);
											printf("%2.f",n1);
				
											gotoxy(21,11);
											printf("-");
											
											gotoxy(23,11);
											printf("%2.f",n2);
											
											gotoxy(15,18);
											printf("ESCOLHA A OPCAO: ");
							
											sort = rand()%5; //selecionando a letra que o result caira
											if(sort == 4)
											{
												
												matriz[17][18] = result;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
												matriz[16][18] = n3;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 3)
											{
												matriz[16][18] = result;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 2)
											{
												matriz[15][18] = result;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else if (sort == 1)
											{
												matriz[14][18] = result;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[15][18] = n5;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else
											{
												matriz[13][18] = result;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [15][18] = n6;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
											}// fim do selecionamento
											
											gotoxy(31,18);
											num2 = getch();
											
											if((num2 == 101) || (num2 == 69)) //veredicando resposta na matriz
											{
											    if (matriz[17][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 68) || (num2 == 100))
											{
												if (matriz[16][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 67) || (num2 == 99))
											{
												if (matriz[15][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 66) || (num2 == 98))
											{
												if (matriz[14][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 65) || (num2 == 97))
											{
												if (matriz[13][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}// fim da verificação
											else if((num2 != 65) || (num2 != 66) || (num2 != 67) || (num2 != 68) || (num2 != 69))
											{
												gotoxy(16,11);           // verificando opcao escolhida
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
											else if((num2 != 97) || (num2 != 98) || (num2 != 99) || (num2 != 100) || (num2 != 101))
											{
												gotoxy(16,11);            // fim da verificação
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
										
											
											gotoxy(15,18);
											printf("                 "); 
											
											if(num == result) //conferindo o resultado
											{
												
												matriz[linha][coluna] = 0;
												gotoxy(16,11);
												printf("            ");  
												pontos = pontos + 3;
												acertos++;
											
												gotoxy(16,11);
												printf("ACERTOU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11); 
												printf("            ");
													
												if(acertos == 12) // desbloqueio chave
												{
													
													gotoxy(15,18);
													printf("CHAVE DESBLOQUEADA");
												    getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,19);
													printf("%i",chave + 1);
												
												}
												
												if(acertos == 18) //desbloqueio porta e proximo nivel
												{
												
													gotoxy(15,18);
													printf("PORTA DESBLOQUEADA");
													getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,20);
													printf("%i",porta + 1);
													getch();
													
													nivel = 3; // variavel para mudar de nivel
													opc = 48; // saindo do nivel 1 
													
												}	
											}
											else if (num == -2)
											{
												num = num;
											}
											else 
											{
												linha = linha;
												coluna = coluna;
												erros = erros + 1;
												gotoxy(16,11);
												printf("            ");
												gotoxy(16,11);
												printf("ERROU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11);
												printf("            ");
												
												if(pontos == 0)
												{
										            pontinhos[jogada] = 0;
													pontos = pontos;
												}
												else
												{
													pontos = pontos - 1;
													
												}
												
												if(erros == 12)
												{
													opc = 49;
													tela_derrota();
													
													//-------------------------------atribuindo pontos para jogadores-------------------//
												if(controle == 0)
												{
													    if(jogada < 5)
													    {
													    	p1 = pontos;
															pontinhos[0] = p1;
													    }
													    else
													    {
													    
													
														    for(i = 0; i < 5; i++)
														    {
														    	if(compara == pontinhos[i])
														    	{
													    	
																	p1 = pontos;
																	pontinhos[i] = p1;
																	i = 5;
																}
														    }
													    }
												}
												else if(controle == 1)
												{
													if(jogada < 5)
													{
													    p2 = pontos;
														pontinhos[1] = p2;
													}
													else
													{
														
													
													
														for(i = 0; i < 5; i++)
														 {
													    	if(compara == pontinhos[i])
													    	{
												    	
																p2 = pontos;
																pontinhos[i] = p2;
																i = 5;
														    }
														}
												    }
													
												}
												else if(controle == 2)
												{
												
														if(jogada < 5)
													    {
													    	p3 = pontos;
															pontinhos[2] = p3;
													    }
														else
														{
																
															for(i = 0; i < 5; i++)
														    {
															    	if(compara == pontinhos[i])
														    		{
														    	
																		p3 = pontos;
																		pontinhos[i] = p3;
																		i = 5;
																	}
														   	 }
														}
												    
												}
												else if(controle == 3)
												{
													
														if(jogada < 5)
													    {
													    	p4 = pontos;
															pontinhos[3] = p4;
													    }
														else
														{
														
													
															for(i = 0; i < 5; i++)
													    	{
													  	 	 	if(compara == pontinhos[i])
													  		  	{
													    	
																	p4 = pontos;
																	pontinhos[i] = p4;
																	i = 5;
																}
														    }
		                                               }
		                                               
												}
												else if(controle == 4)
												{
														
														if(jogada < 5)
													    {
													    	p5 = pontos;
															pontinhos[4] = p5;
													    }
													    else
													    {
													    
															for(i = 0; i < 5; i++)
													   		{
													   		 	if(compara == pontinhos[i])
													    		{
													    	
																	p5 = pontos;
																	pontinhos[i] = p5;
																	i = 5;
																}
													   	 	}
		                                            
		                                               }
												}
												else
												{
													
													 if(ultimo == 1) 
										   			{
										   				
										   					p6 = pontos;
										   				
														   	if(p6 >= p1)
														   	{
														   	
												   				p1 = p6;			
														        pontinhos[4] = p6;    
										   			     	    strcpy(j1,nome1);
												   		        controle = 0;
										   		        	}
										   		        	else
										   		        	{
										   		        		p1 = p1;
													   			strcpy(j1,j1);
													   			controle = 0;
										   		        	}
													   
													   
													   
											 		}
									   				else if (ultimo == 2) 
									   				{	
									   				
														p6 = pontos;
																							   				
									   					if (p6 >= p2)
									   					{
									   					
											   				p2 = p6;	
											   				pontinhos[4] = p6;		
											   				strcpy(j2,nome1);
											   				controle = 1;
										   				
										   			    }
										   				else
										   				{
										   					p2 = p2;
													   		strcpy(j2,j2);
													   		controle = 1;
										   				}
										   				
										   			}
										   			else if (ultimo == 3) 
										  	 		{
										  	 			p6 = pontos;
										  	 			
										   				if(p6 >= p3)
														{
														   		
											   				p3 = p6;		
											   				pontinhos[4] = p6;
															strcpy(j3,nome1);
															controle = 2;
														}
														else
														{
															p3 = p3;
													   		strcpy(j3,j3);
													   		controle = 2;
														}
									  				
									  				}
									 				else if (ultimo == 4) 
										  			{
										   					
										   				p6 = pontos;
														   	
												   		if(p6 >= p4)
														{
														   			
											   				p4 = p6;		
															pontinhos[4] = p6;
											   				strcpy(j4,nome1);
											  				controle = 3;
										  	 			}
										  	 			else
										  	 			{
										  	 				p4 = p4;
													   		strcpy(j2,j2);
													   		controle = 3;
										  	 			}
										  	 			
													}
							 		  				else if (ultimo == 5) 
								  					{
								  						p6 = pontos;
								  						
										   				if(p6 >= p5)
														{
															
											 		  		p5 = p6;			
											   				pontinhos[4] = p6;
										   					strcpy(j5,nome1);
									  						controle = 4;
									 				    }
									 				    else
									 				    {
									 				    	p5 = p5;
													   		strcpy(j5,j5);
													   		controle = 4;
									 				    }
									 				}
													
												}
										    	//----------------fim atribuicao-----------------------//
										    	
										    	
										    	//----------------------ORDENADO VETOR----------------//
												for(i = 0; i < 5; i++)
												{
													for(j = i; j < 5; j++)
													{
														if(pontinhos[i] < pontinhos[j])
														{
															aux = pontinhos[i];
															pontinhos[i] = pontinhos[j];
															pontinhos[j] = aux;
				
														}
													}
												}
												//-------------------fim ordenacao-------------------//
												
											
												//-------------------reiniciando vetor aux-----------//
												
												for(i = 0; i < 10; i++)
												{
													vaux[i] = 1;
												}
												
												//------------------vim vetot aux--------------------//
											
											    
											    //--------------------------------posicionando jogador 1---------------------------------//
												if((p1 == pontinhos[0]) && (vaux[0] != 0))  
												{
													gotoxy(55,9);
													printf("%s",j1);
													vaux[0] = 0;
													
												}
												else if((p1 == pontinhos[1]) && (vaux[1] != 0))
												{
												    gotoxy(55,10);
													printf("%s",j1);
													vaux[1] = 0;
													
													
												}
												else if((p1 == pontinhos[2]) && (vaux[2] != 0))
												{
												    gotoxy(55,11);
													printf("%s",j1);
													vaux[2] = 0;
													
												}
												else if((p1 == pontinhos[3]) && (vaux[3] != 0))
												{
												    gotoxy(55,12);
													printf("%s",j1);
													vaux[3] = 0;
													
												}
												else if((p1 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j1);
													vaux[4] = 0;
													ultimo = 1;
												}
											
											
											
												
												
												//------------------------- posicionando jogador 2 ----------------------------------//
												if((p2 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j2);
													vaux[0] = 0;
													
														
												}
												else if((p2 == pontinhos[1]) && (vaux[1] != 0))
												{
											    	gotoxy(55,10);
													printf("%s",j2);
													vaux[1] = 0;
													
												}
												else if((p2 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j2);
													vaux[2] = 0;
													
												}
												else if((p2 == pontinhos[3]) && (vaux[3] !=0))
												{
												 	gotoxy(55,12);
													printf("%s",j2);
													vaux[3] = 0;
													
												}
												else if((p2 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j2);
													vaux[4] = 0;
													ultimo = 2;
												}
											
												
												
												//-----------------------------posicionando jogador 3 ---------------------------//
												if((p3 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j3);
													vaux[0] = 0;
													
													
												}
												else if((p3 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j3);
													vaux[1] = 0;
													
												}
												else if((p3 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j3);
													vaux[2] = 0;
													
												}
												else if((p3 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j3);
													vaux[3] = 0;
													
												}
												else if((p3 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j3);
													vaux[4] = 0;
													
												}
												
												
												
												//------------------------posicionando jogador 4 --------------------------------//
												if((p4 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j4);
													vaux[0] = 0;
													
												}
												else if((p4 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j4);
													vaux[1] = 0;
													
												}
												else if((p4 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j4);
													vaux[2] = 0;
													
												}
												else if((p4 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j4);
													vaux[3] = 0;
													
												}
												else if((p4 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j4);
													vaux[4] = 0;
													ultimo = 4;
												}
												
												
												
												//------------------------posicionando jogador 5---------------------//
												if((p5 == pontinhos[0]) && (vaux[0] != 0))
												{
													gotoxy(55,9);
													printf("%s",j5);
													vaux[0] = 0;
													
												}
												else if((p5 == pontinhos[1]) && (vaux[1] != 0))
												{
													gotoxy(55,10);
													printf("%s",j5);
													vaux[1] = 0;
													
												}
												else if((p5 == pontinhos[2]) && (vaux[2] != 0))
												{
													gotoxy(55,11);
													printf("%s",j5);
													vaux[2] = 0;
													
												}
												else if((p5 == pontinhos[3]) && (vaux[3] != 0))
												{
													gotoxy(55,12);
													printf("%s",j5);
													vaux[3] = 0;
													
												}
												else if((p5 == pontinhos[4]) && (vaux[4] != 0))
												{
													gotoxy(55,13);
													printf("%s",j5);
													vaux[4] = 0;
													ultimo = 5;
												}
											   //-------------------- fim do pocisionamento--------------------//
												
												
												imprimi(pontinhos); //mostra rank
													
													
													
													
													while(opc != 48) 
													{
														opc = getch();
														
													    if(opc == 48)
														{
															system("cls");
															opc = 48;
														}
														else
														{
															opc = opc;
														}						
													}								
												}	
											}	
										}
									}
									//limpando opcs
									gotoxy(18,17);
									printf("    ");
												
											
									gotoxy(18,16);
									printf("    ");
												
											    
								    gotoxy(18,15);
									printf("    ");
												
												
									gotoxy(18,14);
									printf("    ");
												
									gotoxy(18,13);
									printf("    ");
	
							    }
						    }
						    
						    if(nivel == 3)
						    {
						    	//funcao p reiciar matriz
						    	reiniciar(matriz);
	
						    	opc = 49;
						    	system("cls");
						    	tutorial3();
						    	getch();
						    	system("cls");
						    	
						    	tabuleiro(nivel);
							    while((opc != 48) && (opc != 13)) //comandos para o nivel 2
								{
								
								// possicionando na tela
								gotoxy(24,2);//apagando os pontos
								printf("   ");
								
								gotoxy(24,2);
								printf("%i",pontos);
								
								gotoxy(24,4);
								printf("%i",acertos);
								
								gotoxy(22,6);
								printf("%i",erros);
								// fim do possicionamento	
									
								gotoxy(coluna,linha); //possicionando personagem
								printf("%c",64);
								
	                            gotoxy(0,23);
								tecla = getch(); 
								
								if(matriz[linha][coluna] == 1) // 1 = desbloqueado
								{
								    // preenchendo a possicao q o personagem deixa para tras
									mgotoxy(coluna,linha);
									printf("="); 
							    }
								if(matriz[linha][coluna] == 0)// 0 = bloqueado
								{
									//limpando o quadrado qundo acerta
									gotoxy(coluna-1,linha);
									printf("    ");
									gotoxy(coluna - 1,linha - 1);
									printf("    ");
									gotoxy(coluna - 1,linha + 1);
									printf("____");
									
								}
	                                // COMANDOS DA SETA BAIXO							
									if(tecla == ABAIXO)
									{
										if ((linha == 19) && (coluna == 51) || (linha == 19) && (coluna == 44) || (linha == 19) && (coluna == 37))  
										{
											linha = linha;
											coluna = coluna;
											
										}
										else if((linha == 19) && (coluna == 58) || (linha == 19) && (coluna == 65) || (linha == 19) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if((linha == 19) && (coluna == 79) || (linha == 19) && (coluna == 86) || (linha == 19) && (coluna == 93) || (linha == 19) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha + 4;
										}
									}
									// COMANDOS DA SETA ESQUERDA
									else if (tecla == ESQUERDA)
									{
										if ((linha == 15) && (coluna == 37) || (linha == 19) && (coluna == 37) || (linha == 11) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 37) || (linha == 3) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna - 7;
										}
									}
									//COMANDOS SETA CIMA
									else if (tecla == ACIMA)
									{
										if((linha == 3) && (coluna == 37) || (linha == 3) && (coluna == 44) || (linha == 3) && (coluna == 51))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 58) || (linha == 3) && (coluna == 65) || (linha == 3) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 79) || (linha == 3) && (coluna == 86) || (linha == 3) && (coluna == 93) || (linha == 3) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha - 4;
										}
									}
									// COMANDOS SETA DIREIRA
									else if(tecla == DIREITA)
									{
											if ((linha == 15) && (coluna == 100) || (linha == 100) && (coluna == 100) || (linha == 100) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 100) || (linha == 3) && (coluna == 100) || (linha == 19) && (coluna == 100) || (linha == 11) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna + 7;
										}
									}
									
									if(tecla == 13) //tecla enter
									{
									
										if(matriz[linha][coluna] == 1)
										{
											
											n2 = rand() %10 * rand() %10;    
											n1 = rand() %10 * rand() %10;   
											n3 = rand() %15 * rand() %10;
											n4 = rand() %14 * rand() %10;      //numeros aleatorios para as opcoes
											n5 = rand() %13 * rand() %10;
											n6 = rand() %12 * rand() %10;
											result = n1 * n2;
											
											if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
											{
												while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													n2 = rand() %10 * rand() %10;    
													n1 = rand() %10 * rand() %10;   
													n3 = rand() %10 * rand() %10;
													n4 = rand() %10 * rand() %10;      
													n5 = rand() %10 * rand() %10;
													n6 = rand() %10 * rand() %10;
														
													result = n1 * n2;
													
												}	
											}
															
											gotoxy(18,11);
											printf("%2.f",n1);
				
											gotoxy(21,11);
											printf("X");
											
											gotoxy(23,11);
											printf("%2.f",n2);
											
											gotoxy(15,18);
											printf("ESCOLHA A OPCAO: ");
							
											sort = rand()%5; //selecionando a letra que o result caira
											
											if(sort == 4)
											{
												
												matriz[17][18] = result;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
												matriz[16][18] = n3;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 3)
											{
												matriz[16][18] = result;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 2)
											{
												matriz[15][18] = result;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else if (sort == 1)
											{
												matriz[14][18] = result;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[15][18] = n5;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else
											{
												matriz[13][18] = result;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [15][18] = n6;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
											}// fim do selecionamento
											
											gotoxy(31,18);
											num2 = getch();
											
											if((num2 == 101) || (num2 == 69)) //veredicando resposta na matriz
											{
											    if (matriz[17][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 68) || (num2 == 100))
											{
												if (matriz[16][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 67) || (num2 == 99))
											{
												if (matriz[15][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 66) || (num2 == 98))
											{
												if (matriz[14][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 65) || (num2 == 97))
											{
												if (matriz[13][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}// fim da verificação
											else if((num2 != 65) || (num2 != 66) || (num2 != 67) || (num2 != 68) || (num2 != 69))
											{
												gotoxy(16,11);           // verificando opcao escolhida
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
											else if((num2 != 97) || (num2 != 98) || (num2 != 99) || (num2 != 100) || (num2 != 101))
											{
												gotoxy(16,11);            // fim da verificação
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
										
											
											gotoxy(15,18);
											printf("                 "); 
											
											if(num == result) //conferindo o resultado
											{
												
												matriz[linha][coluna] = 0;
												gotoxy(16,11);
												printf("            ");  
												pontos = pontos + 3;
												
																					
												acertos++;
												gotoxy(16,11);
												printf("ACERTOU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11); 
												printf("            ");
													
												if(acertos == 20) // desbloqueio chave
												{
													
													gotoxy(15,18);
													printf("CHAVE DESBLOQUEADA");
												    getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,19);
													printf("%i",chave + 1);
												
												}
												
												if(acertos == 25) //desbloqueio porta e proximo nivel
												{
												
													gotoxy(15,18);
													printf("PORTA DESBLOQUEADA");
													getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,20);
													printf("%i",porta + 1);
													getch();
													
													nivel = 4; // variavel para mudar de nivel
													opc = 48; // saindo do nivel 1 
													
												}	
											}
											else if (num == -2)
											{
												num = num;
											}
											else 
											{
												linha = linha;
												coluna = coluna;
												erros = erros + 1;
												gotoxy(16,11);
												printf("            ");
												gotoxy(16,11);
												printf("ERROU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11);
												printf("            ");
												
												if(pontos == 0)
												{
													
													pontos = pontos;
												}
												else
												{
													pontos = pontos - 1;
													
												}
												
												if(erros == 30)
												{
													opc = 49;
													tela_derrota();
													  //-------------------------------atribuindo pontos para jogadores-------------------//
													if(controle == 0)
													{
														    if(jogada < 5)
														    {
														    	p1 = pontos;
																pontinhos[0] = p1;
														    }
														    else
														    {
														    	
														    
														
														    	for(i = 0; i < 5; i++)
														   		{
														    		if(compara == pontinhos[i])
														    		{
														    	
																		p1 = pontos;
																		pontinhos[i] = p1;
																		i = 5;
																	}
														    	}
															}
													}
													else if(controle == 1)
													{
														if(jogada < 5)
														{
														    p2 = pontos;
															pontinhos[1] = p2;
														}
														else
														{
															
														
														
															for(i = 0; i < 5; i++)
															 {
														    	if(compara == pontinhos[i])
														    	{
													    	
																	p2 = pontos;
																	pontinhos[i] = p2;
																	i = 5;
															    }
															}
													    }
														
													}
													else if(controle == 2)
													{
													
															if(jogada < 5)
														    {
														    	p3 = pontos;
																pontinhos[2] = p3;
														    }
															else
															{
																	
																for(i = 0; i < 5; i++)
															    {
																    	if(compara == pontinhos[i])
															    		{
															    	
																			p3 = pontos;
																			pontinhos[i] = p3;
																			i = 5;
																		}
															   	 }
															}
													    
													}
													else if(controle == 3)
													{
														
															if(jogada < 5)
														    {
														    	p4 = pontos;
																pontinhos[3] = p4;
														    }
															else
															{
															
														
																for(i = 0; i < 5; i++)
														    	{
														  	 	 	if(compara == pontinhos[i])
														  		  	{
														    	
																		p4 = pontos;
																		pontinhos[i] = p4;
																		i = 5;
																	}
															    }
			                                               }
			                                               
													}
													else if(controle == 4)
													{
															
															if(jogada < 5)
														    {
														    	p5 = pontos;
																pontinhos[4] = p5;
														    }
														    else
														    {
														    
																for(i = 0; i < 5; i++)
														   		{
														   		 	if(compara == pontinhos[i])
														    		{
														    	
																		p5 = pontos;
																		pontinhos[i] = p5;
																		i = 5;
																	}
														   	 	}
			                                            
			                                               }
													}
													else
													{
														
														 if(ultimo == 1) 
											   			{
											   				
											   					p6 = pontos;
											   				
															   	if(p6 >= p1)
															   	{
															   	
													   				p1 = p6;			
															        pontinhos[4] = p6;    
											   			     	    strcpy(j1,nome1);
													   		        controle = 0;
											   		        	}
											   		        	else
											   		        	{
											   		        		p1 = p1;
														   			strcpy(j1,j1);
														   			controle = 0;
											   		        	}
														   
														   
														   
												 		}
										   				else if (ultimo == 2) 
										   				{	
										   				
															p6 = pontos;
																								   				
										   					if (p6 >= p2)
										   					{
										   					
												   				p2 = p6;	
												   				pontinhos[4] = p6;		
												   				strcpy(j2,nome1);
												   				controle = 1;
											   				
											   			    }
											   				else
											   				{
											   					p2 = p2;
														   		strcpy(j2,j2);
														   		controle = 1;
											   				}
											   				
											   			}
											   			else if (ultimo == 3) 
											  	 		{
											  	 			p6 = pontos;
											  	 			
											   				if(p6 >= p3)
															{
															   		
												   				p3 = p6;		
												   				pontinhos[4] = p6;
																strcpy(j3,nome1);
																controle = 2;
															}
															else
															{
																p3 = p3;
														   		strcpy(j3,j3);
														   		controle = 2;
															}
										  				
										  				}
										 				else if (ultimo == 4) 
											  			{
											   					
											   				p6 = pontos;
															   	
													   		if(p6 >= p4)
															{
															   			
												   				p4 = p6;		
																pontinhos[4] = p6;
												   				strcpy(j4,nome1);
												  				controle = 3;
											  	 			}
											  	 			else
											  	 			{
											  	 				p4 = p4;
														   		strcpy(j2,j2);
														   		controle = 3;
											  	 			}
											  	 			
														}
								 		  				else if (ultimo == 5) 
									  					{
									  						p6 = pontos;
									  						
											   				if(p6 >= p5)
															{
																
												 		  		p5 = p6;			
												   				pontinhos[4] = p6;
											   					strcpy(j5,nome1);
										  						controle = 4;
										 				    }
										 				    else
										 				    {
										 				    	p5 = p5;
														   		strcpy(j5,j5);
														   		controle = 4;
										 				    }
										 				}
														
													}
											    	//----------------fim atribuicao-----------------------//
											    	
											    	
											    	//----------------------ORDENADO VETOR----------------//
													for(i = 0; i < 5; i++)
													{
														for(j = i; j < 5; j++)
														{
															if(pontinhos[i] < pontinhos[j])
															{
																aux = pontinhos[i];
																pontinhos[i] = pontinhos[j];
																pontinhos[j] = aux;
					
															}
														}
													}
													//-------------------fim ordenacao-------------------//
													
												
													//-------------------reiniciando vetor aux-----------//
													
													for(i = 0; i < 10; i++)
													{
														vaux[i] = 1;
													}
													
													//------------------vim vetot aux--------------------//
												
												    
												    //--------------------------------posicionando jogador 1---------------------------------//
													if((p1 == pontinhos[0]) && (vaux[0] != 0))  
													{
														gotoxy(55,9);
														printf("%s",j1);
														vaux[0] = 0;
														
													}
													else if((p1 == pontinhos[1]) && (vaux[1] != 0))
													{
													    gotoxy(55,10);
														printf("%s",j1);
														vaux[1] = 0;
														
														
													}
													else if((p1 == pontinhos[2]) && (vaux[2] != 0))
													{
													    gotoxy(55,11);
														printf("%s",j1);
														vaux[2] = 0;
														
													}
													else if((p1 == pontinhos[3]) && (vaux[3] != 0))
													{
													    gotoxy(55,12);
														printf("%s",j1);
														vaux[3] = 0;
														
													}
													else if((p1 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j1);
														vaux[4] = 0;
														ultimo = 1;
													}
												
												
												
													
													
													//------------------------- posicionando jogador 2 ----------------------------------//
													if((p2 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j2);
														vaux[0] = 0;
														
															
													}
													else if((p2 == pontinhos[1]) && (vaux[1] != 0))
													{
												    	gotoxy(55,10);
														printf("%s",j2);
														vaux[1] = 0;
														
													}
													else if((p2 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j2);
														vaux[2] = 0;
														
													}
													else if((p2 == pontinhos[3]) && (vaux[3] !=0))
													{
													 	gotoxy(55,12);
														printf("%s",j2);
														vaux[3] = 0;
														
													}
													else if((p2 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j2);
														vaux[4] = 0;
														ultimo = 2;
													}
												
													
													
													//-----------------------------posicionando jogador 3 ---------------------------//
													if((p3 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j3);
														vaux[0] = 0;
														
														
													}
													else if((p3 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j3);
														vaux[1] = 0;
														
													}
													else if((p3 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j3);
														vaux[2] = 0;
														
													}
													else if((p3 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j3);
														vaux[3] = 0;
														
													}
													else if((p3 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j3);
														vaux[4] = 0;
														ultimo = 3;
													}
													
													
													
													//------------------------posicionando jogador 4 --------------------------------//
													if((p4 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j4);
														vaux[0] = 0;
														
													}
													else if((p4 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j4);
														vaux[1] = 0;
														
													}
													else if((p4 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j4);
														vaux[2] = 0;
														
													}
													else if((p4 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j4);
														vaux[3] = 0;
														
													}
													else if((p4 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j4);
														vaux[4] = 0;
														ultimo = 4;
													}
													
													
													
													//------------------------posicionando jogador 5---------------------//
													if((p5 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j5);
														vaux[0] = 0;
														
													}
													else if((p5 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j5);
														vaux[1] = 0;
														
													}
													else if((p5 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j5);
														vaux[2] = 0;
														
													}
													else if((p5 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j5);
														vaux[3] = 0;
														
													}
													else if((p5 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j5);
														vaux[4] = 0;
														ultimo = 5;
													}
												   //-------------------- fim do pocisionamento--------------------//
													
													
													imprimi(pontinhos);
													
													while(opc != 48) 
													{
														opc = getch();
														
													    if(opc == 48)
														{
															system("cls");
															opc = 48;
														}
														else
														{
															opc = opc;
														}						
													}								
												}	
											}	
										}
									}
									//limpando opcs
									gotoxy(18,17);
									printf("    ");
												
											
									gotoxy(18,16);
									printf("    ");
												
											    
								    gotoxy(18,15);
									printf("    ");
												
												
									gotoxy(18,14);
									printf("    ");
												
									gotoxy(18,13);
									printf("    ");
	
							    }
						    }
						    
						    if(nivel == 4)
						    {
						    	//funcao p reiciar matriz
						    	reiniciar(matriz);
	                          
						    	opc = 49;
						    	system("cls");
						    	tutorial4();
						    	getch();
						    	system("cls");
						    	
						    	tabuleiro(nivel);
							    while((opc != 48) && (opc != 13)) //comandos para o nivel 2
								{
								
								// possicionando na tela
								gotoxy(24,2);//apagando pontos
								printf("  ");
								
								gotoxy(24,2);
								printf("%i",pontos);
								
								gotoxy(24,4);
								printf("%i",acertos);
								
								gotoxy(22,6);
								printf("%i",erros);
								// fim do possicionamento	
									
								gotoxy(coluna,linha); //possicionando personagem
								printf("%c",64);
								
	                            gotoxy(0,23);
								tecla = getch(); 
								
								if(matriz[linha][coluna] == 1) // 1 = desbloqueado
								{
								    // preenchendo a possicao q o personagem deixa para tras
									mgotoxy(coluna,linha);
									printf("="); 
							    }
								if(matriz[linha][coluna] == 0)// 0 = bloqueado
								{
									//limpando o quadrado qundo acerta
									gotoxy(coluna-1,linha);
									printf("    ");
									gotoxy(coluna - 1,linha - 1);
									printf("    ");
									gotoxy(coluna - 1,linha + 1);
									printf("____");
									
								}
	                                // COMANDOS DA SETA BAIXO							
									if(tecla == ABAIXO)
									{
										if ((linha == 19) && (coluna == 51) || (linha == 19) && (coluna == 44) || (linha == 19) && (coluna == 37))  
										{
											linha = linha;
											coluna = coluna;
											
										}
										else if((linha == 19) && (coluna == 58) || (linha == 19) && (coluna == 65) || (linha == 19) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if((linha == 19) && (coluna == 79) || (linha == 19) && (coluna == 86) || (linha == 19) && (coluna == 93) || (linha == 19) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha + 4;
										}
									}
									// COMANDOS DA SETA ESQUERDA
									else if (tecla == ESQUERDA)
									{
										if ((linha == 15) && (coluna == 37) || (linha == 19) && (coluna == 37) || (linha == 11) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 37) || (linha == 3) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna - 7;
										}
									}
									//COMANDOS SETA CIMA
									else if (tecla == ACIMA)
									{
										if((linha == 3) && (coluna == 37) || (linha == 3) && (coluna == 44) || (linha == 3) && (coluna == 51))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 58) || (linha == 3) && (coluna == 65) || (linha == 3) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 79) || (linha == 3) && (coluna == 86) || (linha == 3) && (coluna == 93) || (linha == 3) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha - 4;
										}
									}
									// COMANDOS SETA DIREIRA
									else if(tecla == DIREITA)
									{
										if ((linha == 15) && (coluna == 100) || (linha == 100) && (coluna == 100) || (linha == 100) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 100) || (linha == 3) && (coluna == 100) || (linha == 19) && (coluna == 100) || (linha == 11) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna + 7;
										}
									}
									
									if(tecla == 13) //tecla enter
									{
									
										if(matriz[linha][coluna] == 1)
										{
											
											n2 = rand() %10;    
											n1 = rand() %10;   
											n3 = rand() %15;
											n4 = rand() %14;      //numeros aleatorios para as opcoes
											n5 = rand() %13;
											n6 = rand() %12;
											
											if(n2 == 0)//anulando divisao por 0
											{
												n2 = 1;
											}
											
											result = n1 / n2;
											
											if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
											{
												while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													n2 = rand() %10;    
													n1 = rand() %10;   
													n3 = rand() %10;
													n4 = rand() %10;      //nmeros aleatorios para opcs
													n5 = rand() %10;
													n6 = rand() %10;
													if(n2 == 0) //anulando divisao por 0
													{
														n2 = 1;
													}
													if((n1 == 0) && (n2 == 0))
													{
														n1 = 1;
														n2 = 1;
													}
														
													result = n1 / n2;		
												}	
											}
											
											gotoxy(18,11);
											printf("%2.f",n1);
				
											gotoxy(21,11);
											printf("/");
											
											gotoxy(23,11);
											printf("%2.f",n2);
											
											gotoxy(15,18);
											printf("ESCOLHA A OPCAO: ");
							
											sort = rand()%5; //selecionando a letra que o result caira
											
											if(sort == 4)
											{
												
												matriz[17][18] = result;
												
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
												matriz[16][18] = n3;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
												
											}
											else if (sort == 3)
											{
												matriz[16][18] = result;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
												
											}
											else if (sort == 2)
											{
												matriz[15][18] = result;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
											}
											else if (sort == 1)
											{
												matriz[14][18] = result;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
												matriz[15][18] = n5;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
											}
											else
											{
												matriz[13][18] = result;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												
												matriz [15][18] = n6;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
											}// fim do selecionamento
											
											gotoxy(31,18);
											num2 = getch();
											
											if((num2 == 101) || (num2 == 69)) //veredicando resposta na matriz
											{
											    if (matriz[17][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 68) || (num2 == 100))
											{
												if (matriz[16][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 67) || (num2 == 99))
											{
												if (matriz[15][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 66) || (num2 == 98))
											{
												if (matriz[14][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 65) || (num2 == 97))
											{
												if (matriz[13][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}// fim da verificação
											else if((num2 != 65) || (num2 != 66) || (num2 != 67) || (num2 != 68) || (num2 != 69))
											{
												gotoxy(16,11);           // verificando opcao escolhida
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
											else if((num2 != 97) || (num2 != 98) || (num2 != 99) || (num2 != 100) || (num2 != 101))
											{
												gotoxy(16,11);            // fim da verificação
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
										
											
											gotoxy(15,18);
											printf("                 "); 
											
											if(num == result) //conferindo o resultado
											{
												
												matriz[linha][coluna] = 0;
												gotoxy(16,11);
												printf("            ");  
												pontos = pontos + 3;
												acertos++;
												
								
												gotoxy(16,11);
												printf("ACERTOU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11); 
												printf("            ");
													
												if(acertos == 30) // desbloqueio chave
												{
													
													gotoxy(15,18);
													printf("CHAVE DESBLOQUEADA");
												    getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,19);
													printf("%i",chave + 1);
												
												}
												
												if(acertos == 35) //desbloqueio porta e proximo nivel
												{
												
													gotoxy(15,18);
													printf("PORTA DESBLOQUEADA");
													getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,20);
													printf("%i",porta + 1);
													getch();
													
													nivel = 5; // variavel para mudar de nivel
													opc = 48; // saindo do nivel 1 
													
												}	
											}
											else if (num == -2)
											{
												num = num;
											}
											else 
											{
												linha = linha;
												coluna = coluna;
												erros = erros + 1;
												gotoxy(16,11);
												printf("            ");
												gotoxy(16,11);
												printf("ERROU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11);
												printf("            ");
												
												if(pontos == 0)
												{													
													pontos = pontos;
												}
												else
												{
													pontos = pontos - 1;
													
												}
												
												if(erros == 30)
												{
													opc = 49;
													tela_derrota();
													
													//-------------------------------atribuindo pontos para jogadores-------------------//
													if(controle == 0)
													{
														    if(jogada < 5)
														    {
														    	p1 = pontos;
																pontinhos[0] = p1;
														    }
														    else
														    {
														    	
														    
														
														    	for(i = 0; i < 5; i++)
														   		{
														    		if(compara == pontinhos[i])
														    		{
														    	
																		p1 = pontos;
																		pontinhos[i] = p1;
																		i = 5;
																	}
														    	}
															}
													}
													else if(controle == 1)
													{
														if(jogada < 5)
														{
														    p2 = pontos;
															pontinhos[1] = p2;
														}
														else
														{
														
															for(i = 0; i < 5; i++)
															 {
														    	if(compara == pontinhos[i])
														    	{
													    	
																	p2 = pontos;
																	pontinhos[i] = p2;
																	i = 5;
															    }
															}
													    }
														
													}
													else if(controle == 2)
													{
													
															if(jogada < 5)
														    {
														    	p3 = pontos;
																pontinhos[2] = p3;
														    }
															else
															{
																	
																for(i = 0; i < 5; i++)
															    {
																    	if(compara == pontinhos[i])
															    		{
															    	
																			p3 = pontos;
																			pontinhos[i] = p3;
																			i = 5;
																		}
															   	 }
															}
													    
													}
													else if(controle == 3)
													{
														
															if(jogada < 5)
														    {
														    	p4 = pontos;
																pontinhos[3] = p4;
														    }
															else
															{
															
														
																for(i = 0; i < 5; i++)
														    	{
														  	 	 	if(compara == pontinhos[i])
														  		  	{
														    	
																		p4 = pontos;
																		pontinhos[i] = p4;
																		i = 5;
																	}
															    }
			                                               }
			                                               
													}
													else if(controle == 4)
													{
															
															if(jogada < 5)
														    {
														    	p5 = pontos;
																pontinhos[4] = p5;
														    }
														    else
														    {
														    
																for(i = 0; i < 5; i++)
														   		{
														   		 	if(compara == pontinhos[i])
														    		{
														    	
																		p5 = pontos;
																		pontinhos[i] = p5;
																		i = 5;
																	}
														   	 	}
			                                            
			                                               }
													}
													else
													{
														
														 if(ultimo == 1) 
											   			{
											   				
											   					p6 = pontos;
											   				
															   	if(p6 >= p1)
															   	{
															   	
													   				p1 = p6;			
															        pontinhos[4] = p6;    
											   			     	    strcpy(j1,nome1);
													   		        controle = 0;
											   		        	}
											   		        	else
											   		        	{
											   		        		p1 = p1;
														   			strcpy(j1,j1);
														   			controle = 0;
											   		        	}
														   
														   
														   
												 		}
										   				else if (ultimo == 2) 
										   				{	
										   				
															p6 = pontos;
																								   				
										   					if (p6 >= p2)
										   					{
										   					
												   				p2 = p6;	
												   				pontinhos[4] = p6;		
												   				strcpy(j2,nome1);
												   				controle = 1;
											   				
											   			    }
											   				else
											   				{
											   					p2 = p2;
														   		strcpy(j2,j2);
														   		controle = 1;
											   				}
											   				
											   			}
											   			else if (ultimo == 3) 
											  	 		{
											  	 			p6 = pontos;
											  	 			
											   				if(p6 >= p3)
															{
															   		
												   				p3 = p6;		
												   				pontinhos[4] = p6;
																strcpy(j3,nome1);
																controle = 2;
															}
															else
															{
																p3 = p3;
														   		strcpy(j3,j3);
														   		controle = 2;
															}
										  				
										  				}
										 				else if (ultimo == 4) 
											  			{
											   					
											   				p6 = pontos;
															   	
													   		if(p6 >= p4)
															{
															   			
												   				p4 = p6;		
																pontinhos[4] = p6;
												   				strcpy(j4,nome1);
												  				controle = 3;
											  	 			}
											  	 			else
											  	 			{
											  	 				p4 = p4;
														   		strcpy(j2,j2);
														   		controle = 3;
											  	 			}
											  	 			
														}
								 		  				else if (ultimo == 5) 
									  					{
									  						p6 = pontos;
									  						
											   				if(p6 >= p5)
															{
																
												 		  		p5 = p6;			
												   				pontinhos[4] = p6;
											   					strcpy(j5,nome1);
										  						controle = 4;
										 				    }
										 				    else
										 				    {
										 				    	p5 = p5;
														   		strcpy(j5,j5);
														   		controle = 4;
										 				    }
										 				}
														
													}
											    	//----------------fim atribuicao-----------------------//
											    	
											    	
											    	//----------------------ORDENADO VETOR----------------//
													for(i = 0; i < 5; i++)
													{
														for(j = i; j < 5; j++)
														{
															if(pontinhos[i] < pontinhos[j])
															{
																aux = pontinhos[i];
																pontinhos[i] = pontinhos[j];
																pontinhos[j] = aux;
					
															}
														}
													}
													//-------------------fim ordenacao-------------------//
													
												
													//-------------------reiniciando vetor aux-----------//
													
													for(i = 0; i < 10; i++)
													{
														vaux[i] = 1;
													}
													
													//------------------vim vetot aux--------------------//
												
												    
												    //--------------------------------posicionando jogador 1---------------------------------//
													if((p1 == pontinhos[0]) && (vaux[0] != 0))  
													{
														gotoxy(55,9);
														printf("%s",j1);
														vaux[0] = 0;
														
													}
													else if((p1 == pontinhos[1]) && (vaux[1] != 0))
													{
													    gotoxy(55,10);
														printf("%s",j1);
														vaux[1] = 0;
														
														
													}
													else if((p1 == pontinhos[2]) && (vaux[2] != 0))
													{
													    gotoxy(55,11);
														printf("%s",j1);
														vaux[2] = 0;
														
													}
													else if((p1 == pontinhos[3]) && (vaux[3] != 0))
													{
													    gotoxy(55,12);
														printf("%s",j1);
														vaux[3] = 0;
														
													}
													else if((p1 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j1);
														vaux[4] = 0;
														ultimo = 1;
													}
												
													
													//------------------------- posicionando jogador 2 ----------------------------------//
													if((p2 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j2);
														vaux[0] = 0;
														
															
													}
													else if((p2 == pontinhos[1]) && (vaux[1] != 0))
													{
												    	gotoxy(55,10);
														printf("%s",j2);
														vaux[1] = 0;
														
													}
													else if((p2 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j2);
														vaux[2] = 0;
														
													}
													else if((p2 == pontinhos[3]) && (vaux[3] !=0))
													{
													 	gotoxy(55,12);
														printf("%s",j2);
														vaux[3] = 0;
														
													}
													else if((p2 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j2);
														vaux[4] = 0;
														ultimo = 2;
													}
												
													
													
													//-----------------------------posicionando jogador 3 ---------------------------//
													if((p3 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j3);
														vaux[0] = 0;
														
														
													}
													else if((p3 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j3);
														vaux[1] = 0;
														
													}
													else if((p3 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j3);
														vaux[2] = 0;
														
													}
													else if((p3 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j3);
														vaux[3] = 0;
														
													}
													else if((p3 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j3);
														vaux[4] = 0;
														ultimo = 3;
													}
													
													
													
													//------------------------posicionando jogador 4 --------------------------------//
													if((p4 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j4);
														vaux[0] = 0;
														
													}
													else if((p4 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j4);
														vaux[1] = 0;
														
													}
													else if((p4 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j4);
														vaux[2] = 0;
														
													}
													else if((p4 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j4);
														vaux[3] = 0;
														
													}
													else if((p4 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j4);
														vaux[4] = 0;
														ultimo = 4;
													}
													
													
													
													//------------------------posicionando jogador 5---------------------//
													if((p5 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j5);
														vaux[0] = 0;
														
													}
													else if((p5 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j5);
														vaux[1] = 0;
														
													}
													else if((p5 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j5);
														vaux[2] = 0;
														
													}
													else if((p5 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j5);
														vaux[3] = 0;
														
													}
													else if((p5 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j5);
														vaux[4] = 0;
														ultimo = 5;
													}
												   //-------------------- fim do pocisionamento--------------------//
													
													
													imprimi(pontinhos);
									
													while(opc != 48)
													{
														opc = getch();
														
													    if(opc == 48)
														{
															system("cls");
															opc = 48;
														}
														else
														{
															opc = opc;
														}						
													}								
												}	
											}	
										}
									}
									//limpando opcs
									gotoxy(18,17);
									printf("    ");
												
											
									gotoxy(18,16);
									printf("    ");
												
											    
								    gotoxy(18,15);
									printf("    ");
												
												
									gotoxy(18,14);
									printf("    ");
												
									gotoxy(18,13);
									printf("    ");
	
							    }
						    }
						    
						    if(nivel == 5)
						    {
						    	//funcao p reiciar matriz
						    	reiniciar(matriz);
	                          
						    	opc = 49;
						    	system("cls");
						    	tutorial5();
						    	getch(); //colocar aqui o tutorial 4 
						    	system("cls");
						    	
						    	tabuleiro(nivel);
							    while((opc != 48) && (opc != 13)) //comandos para o nivel 5
								{
								
								// possicionando na tela
								
								gotoxy(24,2);//apagando os pontos 
								printf("   ");
								
								gotoxy(24,2);
								printf("%i",pontos);
								
								gotoxy(24,4);
								printf("%i",acertos);
								
								gotoxy(22,6);
								printf("%i",erros);
								// fim do possicionamento	
									
								gotoxy(coluna,linha); //possicionando personagem
								printf("%c",64);
								
	                            gotoxy(0,23);
								tecla = getch(); 
								
								if(matriz[linha][coluna] == 1) // 1 = desbloqueado
								{
								    // preenchendo a possicao q o personagem deixa para tras
									mgotoxy(coluna,linha);
									printf("="); 
							    }
								if(matriz[linha][coluna] == 0)// 0 = bloqueado
								{
									//limpando o quadrado qundo acerta
									gotoxy(coluna-1,linha);
									printf("    ");
									gotoxy(coluna - 1,linha - 1);
									printf("    ");
									gotoxy(coluna - 1,linha + 1);
									printf("____");
									
								}
	                                // COMANDOS DA SETA BAIXO							
									if(tecla == ABAIXO)
									{
										if ((linha == 19) && (coluna == 51) || (linha == 19) && (coluna == 44) || (linha == 19) && (coluna == 37))  
										{
											linha = linha;
											coluna = coluna;
											
										}
										else if((linha == 19) && (coluna == 58) || (linha == 19) && (coluna == 65) || (linha == 19) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if((linha == 19) && (coluna == 79) || (linha == 19) && (coluna == 86) || (linha == 19) && (coluna == 93) || (linha == 19) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha + 4;
										}
									}
									// COMANDOS DA SETA ESQUERDA
									else if (tecla == ESQUERDA)
									{
										if ((linha == 15) && (coluna == 37) || (linha == 19) && (coluna == 37) || (linha == 11) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 37) || (linha == 3) && (coluna == 37))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna - 7;
										}
									}
									//COMANDOS SETA CIMA
									else if (tecla == ACIMA)
									{
										if((linha == 3) && (coluna == 37) || (linha == 3) && (coluna == 44) || (linha == 3) && (coluna == 51))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 58) || (linha == 3) && (coluna == 65) || (linha == 3) && (coluna == 72))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 3) && (coluna == 79) || (linha == 3) && (coluna == 86) || (linha == 3) && (coluna == 93) || (linha == 3) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											linha = linha - 4;
										}
									}
									// COMANDOS SETA DIREIRA
									else if(tecla == DIREITA)
									{
											if ((linha == 15) && (coluna == 100) || (linha == 100) && (coluna == 100) || (linha == 100) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else if ((linha == 7) && (coluna == 100) || (linha == 3) && (coluna == 100) || (linha == 19) && (coluna == 100) || (linha == 11) && (coluna == 100))
										{
											linha = linha;
											coluna = coluna;
										}
										else
										{
											coluna = coluna + 7;
										}
									}
									
									if(tecla == 13) //tecla enter
									{
									
										if(matriz[linha][coluna] == 1)
										{
											
											n2 = rand() %10 + rand()%10;    
											n1 = rand() %10 + rand()%10;   
											n3 = rand() %15 + rand()%10;
											n4 = rand() %14 + rand()%10;      //numeros aleatorios para as opcoes
											n5 = rand() %13 + rand()%10;
											n6 = rand() %12 + rand()%10;
											
											if(n2 == 0)//anulando divisao por 0
											{
												n2 = 1;
											} 
											
											gotoxy(15,18);
											printf("ESCOLHA A OPCAO: ");
							
											sort = rand()%5; //selecionando a letra que o result caira
											
											if(sort == 4)
											{
												gotoxy(21,11);
											    printf("/");
											    result = n1 / n2;
											    
											    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
													{
														n2 = rand() %10;    
														n1 = rand() %10;   
														n3 = rand() %10;
														n4 = rand() %10;      
														n5 = rand() %10;
														n6 = rand() %10;
														if(n2 == 0) //anulando divisao por 0
														{
															n2 = 1;
														}
														if((n1 == 0) && (n2 == 0))
														{
															n1 = 1;
															n2 = 1;
														}
														
														result = n1 / n2;		
													}	
												}
												
												gotoxy(18,11);
												printf("%2.f",n1);
				
											
												gotoxy(23,11);
												printf("%2.f",n2);
											    
												matriz[17][18] = result;
												
												gotoxy(18,17);
												printf("%2.1f",matriz[17][18]);
												
												matriz[16][18] = n3;
												gotoxy(18,16);
												printf("%2.1f",matriz[16][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.1f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.1f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.1f",matriz[13][18]);
												
											}
											else if (sort == 3)
											{
												gotoxy(21,11);
											    printf("X");
											    result = n1 * n2;
											    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
													{
														n2 = rand() %10 * rand()%10;    
														n1 = rand() %10 * rand()%10;   
														n3 = rand() %10 * rand()%10;
														n4 = rand() %10 * rand()%10;      //evitando result igual
														n5 = rand() %10 * rand()%10;
														n6 = rand() %10 * rand()%10;
														
														result = n1 * n2;
													
													}	
												}
												
												gotoxy(18,11);
												printf("%2.f",n1);
				
											
												gotoxy(23,11);
												printf("%2.f",n2);
												
												matriz[16][18] = result;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[15][18] = n4;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
											}
											else if (sort == 2)
											{
												gotoxy(21,11);
											    printf("-");
											    
											    if (n2 > n1)
												{
													n1 = n2 + rand()%5; //evitando nmeros negativos
												}
																				
											    result = n1 - n2;
											    
											    
											    
											    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
													{
														n2 = rand() %10;    
														n1 = rand() %10;   
														n3 = rand() %10;
														n4 = rand() %10;      //sorteio nmeros aleatorios para opcoes
														n5 = rand() %10;
														n6 = rand() %10;
														
														if (n2 > n1)
														{
															n1 = n2 + rand()%5;  //evitando numeros negativo
														}
														
														result = n1 - n2;
													
													}	
												}
												
												gotoxy(18,11);
												printf("%2.f",n1);
				
											
												gotoxy(23,11);
												printf("%2.f",n2);
												
												matriz[15][18] = result;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else if (sort == 1)
											{
												gotoxy(21,11);
											    printf("+");
											    result = n1 + n2;
											    
											    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
												{
													while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
													{
														n2 = rand() %10 + rand()%10;     
														n1 = rand() %10 + rand()%10;   
														n3 = rand() %10 + rand()%10;
														n4 = rand() %10 + rand()%10;      // evitando result igual
														n5 = rand() %10 + rand()%10;
														n6 = rand() %10 + rand()%10;
															
														result = n1 + n2;
													
													}	
												}
												
												gotoxy(18,11);
												printf("%2.f",n1);
				
											
												gotoxy(23,11);
												printf("%2.f",n2);
												
												matriz[14][18] = result;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[15][18] = n5;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
												
												
												matriz [13][18] = n6;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
											}
											else
											{
												gotoxy(21,11);
											    printf("X");
											    result = n1 * n2;
											    
											    if((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
						 				   		{
													while((result == n1) || (result == n2) || (result == n3) || (result == n4) || (result == n5) || (result == n6))
													{
														n2 = rand() %10 * rand()%10;    
														n1 = rand() %10 * rand()%10;   
														n3 = rand() %10 * rand()%10;
														n4 = rand() %10 * rand()%10;      //evitando result igual
														n5 = rand() %10 * rand()%10;
														n6 = rand() %10 * rand()%10;
														
														result = n1 * n2;
														
													}	
												}
												
												gotoxy(18,11);
												printf("%2.f",n1);
				
											
												gotoxy(23,11);
												printf("%2.f",n2);
											    
												
												matriz[13][18] = result;
												gotoxy(18,13);
												printf("%2.f",matriz[13][18]);
												
												matriz[17][18] = n3;
												gotoxy(18,17);
												printf("%2.f",matriz[17][18]);
												
											    matriz[16][18] = n4;
												gotoxy(18,16);
												printf("%2.f",matriz[16][18]);
												
												matriz[14][18] = n5;
												gotoxy(18,14);
												printf("%2.f",matriz[14][18]);
												
												
												matriz [15][18] = n6;
												gotoxy(18,15);
												printf("%2.f",matriz[15][18]);
											}// fim do selecionamento
											
											gotoxy(31,18);
											num2 = getch();
											
											if((num2 == 101) || (num2 == 69)) //veredicando resposta na matriz
											{
											    if (matriz[17][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 68) || (num2 == 100))
											{
												if (matriz[16][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 67) || (num2 == 99))
											{
												if (matriz[15][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 66) || (num2 == 98))
											{
												if (matriz[14][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}
											else if ((num2 == 65) || (num2 == 97))
											{
												if (matriz[13][18] == result)
											    {
											    	
											    	num = result;
											    }
											    else
											    {
											    	num = -1;
											    }
											}// fim da verificação
											else if((num2 != 65) || (num2 != 66) || (num2 != 67) || (num2 != 68) || (num2 != 69))
											{
												gotoxy(16,11);           // verificando opcao escolhida
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
											else if((num2 != 97) || (num2 != 98) || (num2 != 99) || (num2 != 100) || (num2 != 101))
											{
												gotoxy(16,11);            // fim da verificação
												printf("invalido  ");
												getch();
												gotoxy(16,11);
												printf("           ");
												
												num = -2;
											}
										
											
											gotoxy(15,18);
											printf("                 "); 
											
											if(num == result) //conferindo o resultado
											{
												
												matriz[linha][coluna] = 0;
												gotoxy(16,11);
												printf("            ");  
												pontos = pontos + 3;
												acertos++;
						
												gotoxy(16,11);
												printf("ACERTOU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11); 
												printf("            ");
													
												if(acertos == 48) // desbloqueio chave
												{
													
													gotoxy(15,18);
													printf("CHAVE DESBLOQUEADA");
												    getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,19);
													printf("%i",chave + 1);
												
												}
												
												if(acertos == 57) //desbloqueio porta e proximo nivel
												{
												
													gotoxy(15,18);
													printf("PORTA DESBLOQUEADA");
													getch();
													
													gotoxy(15,18);
													printf("                    ");
													
													gotoxy(23,20);
													printf("%i",porta + 1);
													getch();
													
													nivel = 4; // variavel para mudar de nivel
													opc = 48; // saindo do nivel 1 
													
												}	
											}
											else if (num == -2)
											{
												num = num;
											}
											else 
											{
												linha = linha;
												coluna = coluna;
												erros = erros + 1;
												gotoxy(16,11);
												printf("            ");
												gotoxy(16,11);
												printf("ERROU   ");
												getch(); // usar sleep(1)  no lugar de getch();
												gotoxy(16,11);
												printf("            ");
												
												if(pontos == 0)
												{
													
													pontos = pontos;
												}
												else
												{
													pontos = pontos - 1;
													
												}
												
												if(erros == 35)
												{
													opc = 49;
													tela_derrota();
													
														//-------------------------------atribuindo pontos para jogadores-------------------//
													if(controle == 0)
													{
														    if(jogada < 5)
														    {
														    	p1 = pontos;
																pontinhos[0] = p1;
														    }
														    else
														    {
														    
														
															    for(i = 0; i < 5; i++)
															    {
															    	if(compara == pontinhos[i])
															    	{
														    	
																		p1 = pontos;
																		pontinhos[i] = p1;
																		i = 5;
																	}
														   		 }
														    }
													}
													else if(controle == 1)
													{
														if(jogada < 5)
														{
														    p2 = pontos;
															pontinhos[1] = p2;
														}
														else
														{
															
														
														
															for(i = 0; i < 5; i++)
															 {
														    	if(compara == pontinhos[i])
														    	{
													    	
																	p2 = pontos;
																	pontinhos[i] = p2;
																	i = 5;
															    }
															}
													    }
														
													}
													else if(controle == 2)
													{
													
															if(jogada < 5)
														    {
														    	p3 = pontos;
																pontinhos[2] = p3;
														    }
															else
															{
																	
																for(i = 0; i < 5; i++)
															    {
																    	if(compara == pontinhos[i])
															    		{
															    	
																			p3 = pontos;
																			pontinhos[i] = p3;
																			i = 5;
																		}
															   	 }
															}
													    
													}
													else if(controle == 3)
													{
														
															if(jogada < 5)
														    {
														    	p4 = pontos;
																pontinhos[3] = p4;
														    }
															else
															{
															
														
																for(i = 0; i < 5; i++)
														    	{
														  	 	 	if(compara == pontinhos[i])
														  		  	{
														    	
																		p4 = pontos;
																		pontinhos[i] = p4;
																		i = 5;
																	}
															    }
			                                               }
			                                               
													}
													else if(controle == 4)
													{
															
															if(jogada < 5)
														    {
														    	p5 = pontos;
																pontinhos[4] = p5;
														    }
														    else
														    {
														    
																for(i = 0; i < 5; i++)
														   		{
														   		 	if(compara == pontinhos[i])
														    		{
														    	
																		p5 = pontos;
																		pontinhos[i] = p5;
																		i = 5;
																	}
														   	 	}
			                                            
			                                               }
													}
													else
													{
														
														 if(ultimo == 1) 
											   			{
											   				
											   					p6 = pontos;
											   				
															   	if(p6 >= p1)
															   	{
															   	
													   				p1 = p6;			
															        pontinhos[4] = p6;    
											   			     	    strcpy(j1,nome1);
													   		        controle = 0;
											   		        	}
											   		        	else
											   		        	{
											   		        		p1 = p1;
														   			strcpy(j1,j1);
														   			controle = 0;
											   		        	}
														   
														   
														   
												 		}
										   				else if (ultimo == 2) 
										   				{	
										   				
															p6 = pontos;
																								   				
										   					if (p6 >= p2)
										   					{
										   					
												   				p2 = p6;	
												   				pontinhos[4] = p6;		
												   				strcpy(j2,nome1);
												   				controle = 1;
											   				
											   			    }
											   				else
											   				{
											   					p2 = p2;
														   		strcpy(j2,j2);
														   		controle = 1;
											   				}
											   				
											   			}
											   			else if (ultimo == 3) 
											  	 		{
											  	 			p6 = pontos;
											  	 			
											   				if(p6 >= p3)
															{
															   		
												   				p3 = p6;		
												   				pontinhos[4] = p6;
																strcpy(j3,nome1);
																controle = 2;
															}
															else
															{
																p3 = p3;
														   		strcpy(j3,j3);
														   		controle = 2;
															}
										  				
										  				}
										 				else if (ultimo == 4) 
											  			{
											   					
											   				p6 = pontos;
															   	
													   		if(p6 >= p4)
															{
															   			
												   				p4 = p6;		
																pontinhos[4] = p6;
												   				strcpy(j4,nome1);
												  				controle = 3;
											  	 			}
											  	 			else
											  	 			{
											  	 				p4 = p4;
														   		strcpy(j2,j2);
														   		controle = 3;
											  	 			}
											  	 			
														}
								 		  				else if (ultimo == 5) 
									  					{
									  						p6 = pontos;
									  						
											   				if(p6 >= p5)
															{
																
												 		  		p5 = p6;			
												   				pontinhos[4] = p6;
											   					strcpy(j5,nome1);
										  						controle = 4;
										 				    }
										 				    else
										 				    {
										 				    	p5 = p5;
														   		strcpy(j5,j5);
														   		controle = 4;
										 				    }
										 				}
														
													}
											    	//----------------fim atribuicao-----------------------//
											    	
											    	
											    	//----------------------ORDENADO VETOR----------------//
													for(i = 0; i < 5; i++)
													{
														for(j = i; j < 5; j++)
														{
															if(pontinhos[i] < pontinhos[j])
															{
																aux = pontinhos[i];
																pontinhos[i] = pontinhos[j];
																pontinhos[j] = aux;
					
															}
														}
													}
													//-------------------fim ordenacao-------------------//
													
												
													//-------------------reiniciando vetor aux-----------//
													
													for(i = 0; i < 10; i++)
													{
														vaux[i] = 1;
													}
													
													//------------------vim vetot aux--------------------//
												
												    
												    //--------------------------------posicionando jogador 1---------------------------------//
													if((p1 == pontinhos[0]) && (vaux[0] != 0))  
													{
														gotoxy(55,9);
														printf("%s",j1);
														vaux[0] = 0;
														
													}
													else if((p1 == pontinhos[1]) && (vaux[1] != 0))
													{
													    gotoxy(55,10);
														printf("%s",j1);
														vaux[1] = 0;
														
														
													}
													else if((p1 == pontinhos[2]) && (vaux[2] != 0))
													{
													    gotoxy(55,11);
														printf("%s",j1);
														vaux[2] = 0;
														
													}
													else if((p1 == pontinhos[3]) && (vaux[3] != 0))
													{
													    gotoxy(55,12);
														printf("%s",j1);
														vaux[3] = 0;
														
													}
													else if((p1 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j1);
														vaux[4] = 0;
														ultimo = 1;
													}
												
												
												
													
													
													//------------------------- posicionando jogador 2 ----------------------------------//
													if((p2 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j2);
														vaux[0] = 0;
														
															
													}
													else if((p2 == pontinhos[1]) && (vaux[1] != 0))
													{
												    	gotoxy(55,10);
														printf("%s",j2);
														vaux[1] = 0;
														
													}
													else if((p2 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j2);
														vaux[2] = 0;
														
													}
													else if((p2 == pontinhos[3]) && (vaux[3] !=0))
													{
													 	gotoxy(55,12);
														printf("%s",j2);
														vaux[3] = 0;
														
													}
													else if((p2 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j2);
														vaux[4] = 0;
														ultimo = 2;
													}
												
													
													
													//-----------------------------posicionando jogador 3 ---------------------------//
													if((p3 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j3);
														vaux[0] = 0;
														
														
													}
													else if((p3 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j3);
														vaux[1] = 0;
														
													}
													else if((p3 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j3);
														vaux[2] = 0;
														
													}
													else if((p3 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j3);
														vaux[3] = 0;
														
													}
													else if((p3 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j3);
														vaux[4] = 0;
														ultimo = 3;
													}
													
													
													
													//------------------------posicionando jogador 4 --------------------------------//
													if((p4 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j4);
														vaux[0] = 0;
														
													}
													else if((p4 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j4);
														vaux[1] = 0;
														
													}
													else if((p4 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j4);
														vaux[2] = 0;
														
													}
													else if((p4 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j4);
														vaux[3] = 0;
														
													}
													else if((p4 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j4);
														vaux[4] = 0;
														ultimo = 4;
													}
													
													
													
													//------------------------posicionando jogador 5---------------------//
													if((p5 == pontinhos[0]) && (vaux[0] != 0))
													{
														gotoxy(55,9);
														printf("%s",j5);
														vaux[0] = 0;
														
													}
													else if((p5 == pontinhos[1]) && (vaux[1] != 0))
													{
														gotoxy(55,10);
														printf("%s",j5);
														vaux[1] = 0;
														
													}
													else if((p5 == pontinhos[2]) && (vaux[2] != 0))
													{
														gotoxy(55,11);
														printf("%s",j5);
														vaux[2] = 0;
														
													}
													else if((p5 == pontinhos[3]) && (vaux[3] != 0))
													{
														gotoxy(55,12);
														printf("%s",j5);
														vaux[3] = 0;
														
													}
													else if((p5 == pontinhos[4]) && (vaux[4] != 0))
													{
														gotoxy(55,13);
														printf("%s",j5);
														vaux[4] = 0;
														ultimo = 5;
													}
												   //-------------------- fim do pocisionamento--------------------//
													
													
													imprimi(pontinhos);
													
													while(opc != 48)
													{
														opc = getch();
														
													    if(opc == 48)
														{
															system("cls");
															opc = 48;
														}
														else
														{
															opc = opc;
														}						
													}								
												}	
											}	
										}
									}
									//limpando opcs
									gotoxy(18,17);
									printf("    ");
												
											
									gotoxy(18,16);
									printf("    ");
												
											    
								    gotoxy(18,15);
									printf("    ");
												
												
									gotoxy(18,14);
									printf("    ");
												
									gotoxy(18,13);
									printf("    ");
	
							    }
						    }
						    
						    if(opc == 13)
						    {
						    	opc = 53;
						    }
						    else
						    {
						    	opc = 48;
						    }
						    
						    
			
						}
						
					}
					else if(opc == 48)
					{
						opc = 48;
					}
					else
					{
						opc = 49;
					}
					// FIM DO MENU DENTRO DO JOGO
				}
			}
			else
			{
			
				tela_erro_logar();
				getch();
				system("cls");
				opc = 49;
			}
			
			
		}
		else if (opc == 48)
		{
			
			opc = 48;
		}
		else
		{
			menuprincipal();
			opc = getch();
		}
	}
	// FIM DO MENU PRINCIPAL
	
	erros = 0;
	acertos = 0;
	pontos = 0;
	reiniciar(matriz);
	jogada++;
	nivel = 1;
	
 }//fim do while jogada
 
		
}

