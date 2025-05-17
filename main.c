#include <stdio.h>
#include <stdlib.h>

#include "stCliente.h"
#include "stCuenta.h"
#include "stDomicilio.h"
#include "stMovimiento.h"
#include "mocks.h"

#define NOMBRE_ARCHIVO "clientes.bin"
#define CANTIDAD 5

int main()
{
    stCliente cliente;
    altaClienteAuto(&cliente);
    cargaCliente(&cliente, NOMBRE_ARCHIVO);
    muestraCliente(cliente);
    printf("\n Agregamos mas clientes: ");
    cargaClientesAuto(CANTIDAD, NOMBRE_ARCHIVO);
    printf("\n Mostramos los clientes: ");
    muestraClientes(NOMBRE_ARCHIVO);
    printf("\n Removemos cliente: %s", cliente.nombre);
    remueveCliente(&cliente, NOMBRE_ARCHIVO);
    printf("\n Listado de clientes limpio:");
    muestraClientes(NOMBRE_ARCHIVO);
    return 0;
}
