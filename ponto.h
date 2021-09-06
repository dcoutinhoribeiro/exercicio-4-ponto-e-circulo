#ifndef PONTO_H
#include "circulo.h"
#define PONTO_H
#include <stdbool.h>
#include <math.h>

//avisa o programa que existe um novo tipo de dados que é o PONTO
typedef struct ponto_ {
    float x;
    float y;
} PONTO;

/*
 *Função para inicializar o tipo de dados PONTO
 * @retun  um ponteiro do tipo PONTO devidamente inicializado
 */
PONTO *ponto_criar() {
    PONTO *newp;
    
    newp =  (PONTO *) malloc(sizeof(PONTO)); //alocando memoria

    return newp;
};

/*
 * Função que apaga o PONTO, após isso ele deve ser inicializado novamente
 * @param **p ponteiro de PONTO que deseja ser apagado
 */
void ponto_apagar(PONTO **p) {
    free(*p); //
};

/*
 *Função para modificar as coordenadas de um ponto
 * @param *p    o PONTO que deseja ser modificado
 * @param x     coordenada x
 * @param y     coordenada y
 * @return      um booleano informando se a operação deu certo
 */
bool ponto_set(PONTO *p, float x, float y) {
    p->x = x;
    p->y = y;

    if(p->x == x && p->y == y) return true;
    else return false; // checks if values changed
};

/*
 *Função para calcular a distancia entre dois pontos
 * @param *p1  primeiro PONTO
 * @param *p2  segundo PONTO
 
 */
bool distancia(PONTO *p1, PONTO *p2) {
    return sqrt((p1->x - p2->x) * (p1->x - p2->x) + (p1->y - p2->y)*(p1->y - p2->y));
};

/*
 *Função que retorna a coordenada x de um ponto
 * @param *p    PONTO que se trata
 * @return      retorna a coordena x
 */
float ponto_get_x(PONTO *p) {
    return p->x;
};

/*
 *Função que retorna a coordenada y de um ponto
 * @param *p PONTO que se trata
 * @return      retorna a coordena y
 */
float ponto_get_y(PONTO *p) {
    return p->y;
};


/*
 *Função que imprime um ponto
 * @param *p PONTO que se trata
 */
void ponto_print(PONTO *p) {
    printf("ponto: %f, %f", p->x, p->y);
};

#endif
