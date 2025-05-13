#ifndef STCLIENTE_H_INCLUDED
#define STCLIENTE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stDomicilio.h"

typedef struct {
    int id; /// campo único y autoincremental
    int nroCliente;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char email[30];
    stDomicilio domicilio;
    char telefonoFijo[12];
    char telefonoMovil[12];
    int eliminado; /// 0 si está activo - 1 si está eliminado
} stCliente;

void cargaCliente(stCliente *c);

#endif // STCLIENTE_H_INCLUDED
