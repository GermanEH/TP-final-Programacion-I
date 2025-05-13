#include "stCliente.h"

/**
 * @brief Carga un cliente de forma automática y lo retorna
 *
 * @param stCliente* c
 * @return stCliente.
 *
 * @author Germán Ezequiel Horianski
 * @date 2025/05/13
 * @version 1.0
 *
 * @pre Recibe un cliente
 * @post La estructura se retorna con un id autoincremental y el resto de los datos generados automáticamente.
 *
 * @code
 * stCliente cliente = cargaCliente();
 * @endcode
 */
void cargaCliente(stCliente *c) {
    static id = 0;
    id++;
    c->id = id;
    c->nroCliente = cargaLegajo();
    cargaNombre(c->nombre);
    cargaApellido(c->apellido);
    cargaDni(c->dni);
    cargaEmail(c->email, c->nombre, c->apellido);
    cargaDomicilio(&c->domicilio);
    cargaTelefonoFijo(c->telefonoFijo);
    cargaTelefonoMovil(c->telefonoMovil);
    c->eliminado = 0;
}

void mostrarUnCliente(stCliente a) {
    printf("\nId....................: %d", a.id);
    printf("\nNro Cliente...........: %d", a.nroCliente);
    printf("\nNombre................: %s", a.nombre);
    printf("\nApellido..............: %s", a.apellido);
    printf("\nDNI...................: %s", a.dni);
    printf("\nEmail.................: %s", a.email);
    printf("\nTelefono Fijo.........: %s", a.telefonoFijo);
    printf("\nTelefono Movil........: %s", a.telefonoMovil);
    printf("\nDomicilio:");
    printf("\n  Calle...............: %s", a.domicilio.calle);
    printf("\n  Numero..............: %d", a.domicilio.nro);
    printf("\n  Ciudad..............: %s", a.domicilio.localidad);
    printf("\n  Provincia...........: %s", a.domicilio.provincia);
    printf("\n  Codigo Postal.......: %s", a.domicilio.cpos);
    printf("\n__________________________________________\n");
}

