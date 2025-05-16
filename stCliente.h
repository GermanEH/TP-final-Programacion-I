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

void altaClienteAuto(stCliente *c);
void muestraCliente(stCliente c);
void cargaCliente(stCliente *cliente, char path[]);
int buscaCliente(stCliente cliente, char path[]);
void copiaClientes2ArchivoTemp(char path[], int limite);
void copiaTemp2ArchivoClientes(char path[]);
void remueveCliente(stCliente *cliente, char path[]);
void cargaClientesAuto(int cantidad, char path[]);

#endif // STCLIENTE_H_INCLUDED
