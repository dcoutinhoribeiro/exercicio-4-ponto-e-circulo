#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"
#include "./../ponto/ponto.h"

//define struct circulo_
 struct circulo_ {
    PONTO *centro;
    float raio;
};

/*
 *Função para inicializar o tipo de dados CIRCULO
 */
CIRCULO *circulo_criar(PONTO *p, float raio) {

    CIRCULO *newc;
    
    newc =  (CIRCULO *) malloc(sizeof(CIRCULO));
    newc->centro = p;

    if(!circulo_set_raio(newc, raio)) exit(2);

    return newc;
};

/*
 *Função para modificar o centro de um CIRCULO
 */
bool circulo_set_ponto(CIRCULO *c, PONTO *p) {
    return ponto_set(c->centro, ponto_get_x(p), ponto_get_y(p));
};


/*
 *Função para modificar o raio de um CIRCULO
 */
bool circulo_set_raio(CIRCULO *c, float raio) {
    if(raio < 0) return false;
    c->raio = raio;

    return true;
};


/*Função que retorna o centro do CIRCULO
 * @param *c    o CIRCULO de que se trata
 * @return      ponto que é o centro do CIRCULO
 */
PONTO *circulo_get_ponto(CIRCULO *c) {
    return c -> centro;
};

/*Função que retorna o centro do CIRCULO
 * @param *c    o CIRCULO de que se trata
 * @return      o raio do CIRCULO
 */
float circulo_get_raio(CIRCULO *c) {
    return c -> raio;
};

/*
 * Função que apaga o CIRCULO, após isso ele deve ser inicializado novamente
 */
void circulo_apagar(CIRCULO *circulo) {
    if(circulo == NULL) return;
    
    free(circulo);
};

