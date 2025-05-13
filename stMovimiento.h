#ifndef STMOVIMIENTO_H_INCLUDED
#define STMOVIMIENTO_H_INCLUDED

typedef struct {
    int id; /// campo único y autoincremental
    int idCuenta; /// Id de la cuenta char detalle[100];
    float importe;
    int anio;
    int mes; /// 1 a 12 int dia; /// 1 a … dependiendo del mes
    int eliminado; /// 0 si está activo - 1 si está eliminado
} stMovimiento

#endif // STMOVIMIENTO_H_INCLUDED
