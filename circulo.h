/*circulo.h*/
#ifndef CIRCULO_H
#define CIRCULO_H
#include <stdbool.h>

#include "ponto.h"

//avisa o programa que existe um novo tipo de dados que é o CIRCULO
typedef struct circulo_ CIRCULO;

/*
 *Função para inicializar o tipo de dados CIRCULO
 * @param *p    uma variavel ponteiro de PONTO com o centro do CIRCULO
 * @param raio  informa o raio do CIRCULO
 * @retun       um ponteiro do tipo CIRCULO devidamente inicializado
 */
CIRCULO *circulo_criar(PONTO *p, float raio);



/*
 *Função para modificar o centro de um CIRCULO
 * @param *c    o CIRCULO que deseja ser modificado
 * @param *p    uma variavel ponteiro de PONTO com o centro do CIRCULO 
 * @return      um booleano informando se a operação deu certo
 */
bool circulo_set_ponto(CIRCULO *c, PONTO *p);




/*
 *Função para modificar o raio de um CIRCULO
 * @param *c    o CIRCULO que deseja ser modificado
 * @param raio  novo raio do CIRCULO
 * @return      um booleano informando se a operação deu certo
 */
bool circulo_set_raio(CIRCULO *c, int raio);

/*Função que retorna o centro do CIRCULO
 * @param *c    o CIRCULO de que se trata
 * @return      ponto que é o centro do CIRCULO
 */
PONTO *circulo_get_ponto(CIRCULO *c);

/*Função que retorna o centro do CIRCULO
 * @param *c    o CIRCULO de que se trata
 * @return      o raio do CIRCULO
 */
float circulo_get_raio(CIRCULO *c);

/*
 * Função que apaga o CIRCULO, após isso ele deve ser inicializado novamente
 * @param **circulo ponteiro de CIRCULO que deseja ser apagado
 */
void circulo_apagar(CIRCULO **circulo);

#endif
