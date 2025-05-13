#ifndef STCUENTA_H_INCLUDED
#define STCUENTA_H_INCLUDED

typedef struct {
    int id; /// campo único y autoincremental
    int idCliente; /// Id del Cliente dueño de la Cuenta;
    char nroCuenta[24];
    char cbu[24];
    int tipoDeCuenta; /// 1. Caja de Ahorro en Pesos, 2. Caja de Ahorro en Dólares, 3. Cta Cte en $
    float costoMensual; /// Costo de mantenimiento del producto
    float saldo; /// Debe actualizarse al modidificar o cargar un movimiento.
    int eliminado; /// 0 si está activo - 1 si está eliminado
} stCuenta

void cargaCuenta(stCuenta *c, int idCliente);
#endif // STCUENTA_H_INCLUDED
