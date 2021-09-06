#ifndef PONTO_H
#define PONTO_H
#include <stdbool.h>

//avisa o programa que existe um novo tipo de dados que é o PONTO
typedef struct ponto_ PONTO;

/*
 *Função para inicializar o tipo de dados PONTO
 * @retun  um ponteiro do tipo PONTO devidamente inicializado
 */
PONTO *ponto_criar();

/*
 * Função que apaga o PONTO, após isso ele deve ser inicializado novamente
 * @param **p ponteiro de PONTO que deseja ser apagado
 */
void ponto_apagar(PONTO *p);

/*
 *Função para modificar as coordenadas de um ponto
 * @param *p    o PONTO que deseja ser modificado
 * @param x     coordenada x
 * @param y     coordenada y
 * @return      um booleano informando se a operação deu certo
 */
bool ponto_set(PONTO *p, float x, float y);
/*
 *Função para calcular a distancia entre dois pontos
 * @param *p1  primeiro PONTO
 * @param *p2  segundo PONTO
 
 */
float distancia(PONTO *p1, PONTO *p2);
/*
 *Função que retorna a coordenada x de um ponto
 * @param *p    PONTO que se trata
 * @return      retorna a coordena x
 */
float ponto_get_x(PONTO *p);
/*
 *Função que retorna a coordenada y de um ponto
 * @param *p PONTO que se trata
 * @return      retorna a coordena y
 */
float ponto_get_y(PONTO *p);

/*
 *Função que imprime um ponto
 * @param *p PONTO que se trata
 */
void ponto_print(PONTO *p);

#endif
