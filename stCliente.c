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
void altaClienteAuto(stCliente *c) {
    static int id = 0;
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

void muestraCliente(stCliente c) {
    printf("\nId....................: %d", c.id);
    printf("\nNro Cliente...........: %d", c.nroCliente);
    printf("\nNombre................: %s", c.nombre);
    printf("\nApellido..............: %s", c.apellido);
    printf("\nDNI...................: %s", c.dni);
    printf("\nEmail.................: %s", c.email);
    printf("\nTelefono Fijo.........: %s", c.telefonoFijo);
    printf("\nTelefono Movil........: %s", c.telefonoMovil);
    printf("\nDomicilio:");
    printf("\n  Calle...............: %s", c.domicilio.calle);
    printf("\n  Numero..............: %d", c.domicilio.nro);
    printf("\n  Ciudad..............: %s", c.domicilio.localidad);
    printf("\n  Provincia...........: %s", c.domicilio.provincia);
    printf("\n  Codigo Postal.......: %s", c.domicilio.cpos);
    printf("\n__________________________________________\n");
}

void cargaCliente(stCliente *cliente, char path[]){

    FILE *clientes = fopen(path, "ab");
    if(clientes) {
        fwrite(cliente, sizeof(stCliente), 1, clientes);
        fclose(clientes);
    }
}

int buscaCliente(stCliente cliente, char path[]){
    FILE *clientes = fopen(path, "rb+");
    int flag = 0;
    stCliente c;
    if(clientes){
        while(flag == 0 && fread(&c, sizeof(stCliente), 1, clientes))
        {
            if(c.id == cliente.id)
            {
                flag = 1;
            }
        }
    }
    return c.id;
};

void copiaClientes2ArchivoTemp(char path[], int idClienteAEliminar){
    FILE *archivo = fopen(path,"rb");
    stCliente cliente;
    int flag = 0;
    if(archivo){
        FILE *temp = fopen("temp.bin","wb");
        if(temp){
            while(fread(&cliente, sizeof(stCliente), 1, archivo)){
                if(cliente.id != idClienteAEliminar) {
                    fwrite(&cliente, sizeof(stCliente), 1, temp);
                }
            }
            fclose(temp);
        }
        fclose(archivo);
    }
}

void cargaClientesAuto(int cantidad, char path[]){
    stCliente cliente;
    FILE *clientes = fopen(path,"ab");
    if(clientes) {
        for(int i = 0;i<cantidad;i++)
            {
                altaClienteAuto(&cliente);
                fwrite(&cliente, sizeof(stCliente), 1, clientes);
                muestraCliente(cliente);
            }
        fclose(clientes);
    }
}

void muestraClientes(char path[]){
    stCliente cliente;
    FILE *clientes = fopen(path,"rb");
    if(clientes){
        while(fread(&cliente, sizeof(stCliente), 1, clientes))
        {
            muestraCliente(cliente);
        }
    }
}

void copiaTemp2ArchivoClientes(char path[]){
    FILE *archivo = fopen(path,"wb");
    stCliente cliente;
    if(archivo){
        FILE *temp = fopen("temp.bin","rb");
        if(temp){
            while(fread(&cliente, sizeof(stCliente), 1, temp)){
                    fwrite(&cliente,sizeof(stCliente), 1,archivo);
            }
            fclose(temp);
        }
        fclose(archivo);
    }
}

void remueveCliente(stCliente *cliente, char path[]){
    copiaClientes2ArchivoTemp(path, cliente -> id);
    copiaTemp2ArchivoClientes(path);
}
