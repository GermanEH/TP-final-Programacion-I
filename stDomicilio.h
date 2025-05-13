#ifndef STDOMICILIO_H_INCLUDED
#define STDOMICILIO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char calle[30];
    char nro[6];
    char localidad[50];
    char provincia[40];
    char cpos[6];
} stDomicilio;

#endif // STDOMICILIO_H_INCLUDED
