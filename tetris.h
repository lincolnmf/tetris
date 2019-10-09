/*
    Jogo interativo Tetris implementado em linguagem C para uso 
    no console (terminal de comandos)

    Autor: Augusto Luengo Pereira Nunes
    Data: 28/08/2019

*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//Configuração das dimensões da matriz principal do jogo
#define COLUMNS 60
#define ROWS 25
#define ESC 27
#define ARROWS 224
#define LEFT 75
#define RIGHT 77
#define TECLA_a 97
#define TECLA_d 100
#define TECLA_A 65
#define TECLA_D 68
// ORIENTAÇÃO PARA AS PEÇAS 
#define ORIENTACAO_UP 1
#define ORIENTACAO_DOWN 2
#define ORIENTACAO_LEFT 3
#define ORIENTACAO_RIGHT 4
#define TIPO_L 1
#define TIPO_L_R 2  // L REVERSO
#define TIPO_T 3
#define TIPO_Z 4
#define TIPO_Z_R 5  //Z REVERSO
#define TIPO_O 6  // QUADRADO
#define TIPO_I 7

// configurações de layout
#define PIXEL 219
#define EMPTY 32
//estrutura padrão de componentes
typedef struct{
int i;  // pposicao nas linhas da matris
int j;  // pos nas colunas da matriz
int orientacao; // orientaçao da peça 
int tipo;  // tipo da peça
int width; // largura da peça
int height; // altura da peça
}Bloco;

/*
    Inicializa a matriz principal com 'espaços vazios'
*/
void init(char matrix[ROWS][COLUMNS]);

/*
    Mostra o conteúdo da matriz principal na tela 
    do computador.
*/
void printMatrix(char matrix[ROWS][COLUMNS]);