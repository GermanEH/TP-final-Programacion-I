#ifndef MOCKS_H_INCLUDED
#define MOCKS_H_INCLUDED

void cargaNombre(char nombre[]);
void cargaApellido(char apellido[]);
void cargaDni(char dni[]);
int cargaLegajo();
void cargaEmail(char email[], char nombre[], char apellido[]);
void cargaTelefonoFijo(char telefono[]);
void cargaTelefonoMovil(char telefono[]);
void cargaDomicilio(stDomicilio* d);

#endif // MOCKS_H_INCLUDED
