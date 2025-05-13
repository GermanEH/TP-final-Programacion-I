#include <stdio.h>
#include <stdlib.h>

#include "stCliente.h"
#include "stCuenta.h"
#include "stDomicilio.h"
#include "stMovimiento.h"
#include "mocks.h"

int main()
{
    stCliente cliente;
    cargaCliente(&cliente);
    printf("\n Nombre: %s", cliente.nombre);
    printf("Hello world!\n");
    return 0;
}
