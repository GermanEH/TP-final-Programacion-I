#include "stCuenta.h"

/**
 * @brief Carga una cuenta de forma automática y la retorna
 *
 * @param stCuenta* c
 * @return stCliente.
 *
 * @author Germán Ezequiel Horianski
 * @date 2025/05/13
 * @version 1.0
 *
 * @pre Recibe una cuenta y un idCliente
 * @post La estructura se retorna con un id autoincremental y el resto de los datos generados automáticamente.
 *
 * @code
 * stCuenta c = cargaCuenta();
 * @endcode
 */
void cargaCuenta(stCuenta *c, int idCliente){
    static id = 0;
    id++;
    c -> id = id;
    c -> idCliente = idCliente;
    //c -> nroCuenta = cargaCuenta(c, idCliente);
    //c -> cbu = cargaCbu();
    c -> tipoDeCuenta;
    //cargaCostoMenusal(c->costoMensual);
    c -> saldo = 0;
    c -> eliminado = 0;
}
