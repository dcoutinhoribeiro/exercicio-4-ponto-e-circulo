#include <stdlib.h>
#include <stdio.h>
#include "ponto.h"
#include <math.h>

//declaracao struct _ponto
struct ponto_ {
    float x;
    float y;
};

//funcao para criar novo ponto
PONTO *ponto_criar() {
    PONTO *newp;
    
    newp = (PONTO *) malloc(sizeof(PONTO));

    return newp;
};

//funcao para apagar ponto
void ponto_apagar(PONTO *p) { 
    if(p == NULL) return; //não apaga caso pointeiro aponte para null
    free(p);
};

/*
 *Função para modificar as coordenadas de um ponto
 */
bool ponto_set(PONTO *p, float x, float y) {
    if(x < 0 || y < 0) return false;

    p->x = x;//seta cordenadas
    p->y = y;

    return true;
};

/*
 *Função para calcular a distancia entre dois pontos
 */
float distancia(PONTO *p1, PONTO *p2) {
    float deltaX = ponto_get_x(p1) - ponto_get_x(p2);
    float deltaY = ponto_get_y(p1) - ponto_get_y(p2);

    return sqrtf(pow(deltaX, 2) + pow(deltaY, 2));
};

/*
 *Função que retorna a coordenada x de um ponto
 */
float ponto_get_x(PONTO *p) {
    return p->x;
};

/*
 *Função que retorna a coordenada y de um ponto
 */
float ponto_get_y(PONTO *p) {
    return p->y;
};

/*
 *Função que imprime um ponto
 */
void ponto_print(PONTO *p) {
    printf("ponto: %f, %f", ponto_get_x(p), ponto_get_y(p));
};
