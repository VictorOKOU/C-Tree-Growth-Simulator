#ifndef CROISSANCE_STEP_H
#define CROISSANCE_STEP_H
#include "arbre.h"
#include "queue.h"
typedef struct s_arbre_step {
    t_arbre arbre;
    t_queue bourgeons;
    int saison;
} t_arbre_step;

t_arbre_step createTreeStep(float x, float y, int seed);

void growTreeStep(t_arbre_step *a);

void clearBuds(t_arbre_step *a);

#endif
