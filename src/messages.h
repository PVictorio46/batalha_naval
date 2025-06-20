#ifndef _MENSSAGEM_
#define _MENSSAGEM_

#include "player.h"

#define DIR "lang/"
#define EXT ".dat"

typedef struct TEXTO
{
        int qtd;
        char **txt;
} texto;

/* variaveis exportadas */

texto txt_default;
texto txt_perguntas;
texto txt_falhas;
texto txt_barcos;
texto txt_tiro_certo;
texto txt_tiro_errado;

texto txt_menu;

/* Funcoes exportadas */

// Cria novo grupo de mensagens
void set_language(char *lingua);

// Libera Memoria
void free_textos();

// Imprime o cabecalho do jogo
void print_banner(int largura);

// Imprime as pecas de cada jogador
void print_status (jogador j1, jogador j2, char *spaco);

// Imprime a mensagens de parabenizacao pelo tiro
void congratulation_message();
void fail_message();



#endif
