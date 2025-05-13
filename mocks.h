#ifndef MOCKS_H_INCLUDED
#define MOCKS_H_INCLUDED

void cargaNombre(char nombre[]){
    char nombres[][30]= {
    "Juan", "Maria", "Carlos", "Ana", "Luis", "Laura", "Pedro", "Sofia", "Jorge", "Lucia",
    "Miguel", "Valentina", "Jose", "Isabella", "David", "Camila", "Alejandro", "Paula", "Daniel", "Fernanda",
    "Andres", "Valeria", "Manuel", "Mariana", "Ricardo", "Gabriela", "Felipe", "Daniela", "Javier", "Alejandra",
    "Roberto", "Victoria", "Raul", "Juana", "Fernando", "Antonella", "Diego", "Ximena", "Arturo", "Adriana",
    "Eduardo", "Natalia", "Alberto", "Claudia", "Francisco", "Andrea", "Antonio", "Patricia", "Ruben", "Monica",
    "Sergio", "Alicia", "Enrique", "Carolina", "Óscar", "Rosa", "Pablo", "Teresa", "Hugo", "Sara",
    "Guillermo", "Elena", "Rodrigo", "Beatriz", "Salvador", "Julia", "Emilio", "Raquel", "Mario", "Diana",
    "Alfonso", "Olga", "Armando", "Angelica", "Gerardo", "Silvia", "Rafael", "Carmen", "Jaime", "Irene",
    "Ignacio", "Pilar", "Hector", "Concepcion", "Cesar", "Lourdes", "Victor", "Consuelo", "Ramon", "Eva",
    "Alfredo", "Luisa", "Julio", "Amparo", "Joaquin", "Rocio", "Gustavo", "Manuela", "Lorenzo", "Veronica", "Lorenzo", "Veronica"
    };
    strcpy(nombre, nombres[rand()%(sizeof(nombres)/30)]);
}

void cargaApellido(char apellido[]){
    char apellidos[][30]={
        "Garcia", "Rodriguez", "Gonzalez", "Fernandez", "Lopez",
        "Martinez", "Sanchez", "Perez", "Gomez", "Martin",
        "Jimenez", "Ruiz", "Hernandez", "Diaz", "Moreno",
        "Alvarez", "Munoz", "Romero", "Alonso", "Gutierrez",
        "Navarro", "Torres", "Dominguez", "Vazquez", "Ramos",
        "Gil", "Ramirez", "Serrano", "Blanco", "Suarez",
        "Molina", "Morales", "Ortega", "Delgado", "Castro",
        "Ortiz", "Rubio", "Marin", "Sanz", "Iglesias",
        "Medina", "Cortes", "Garrido", "Castillo", "Santos",
        "Lozano", "Guerrero", "Cano", "Prieto", "Mendez",
        "Cruz", "Calvo", "Gallego", "Vidal", "Leon",
        "Herrera", "Marquez", "Pena", "Flores", "Cabrera",
        "Campos", "Vega", "Fuentes", "Carrasco", "Diez",
        "Reyes", "Caballero", "Nunez", "Aguilar", "Pascual",
        "Santana", "Herrero", "Montero", "Lorenzo", "Hidalgo",
        "Gimenez", "Ibanez", "Ferrer", "Duran", "Santiago",
        "Benitez", "Mora", "Vicente", "Vargas", "Arias",
        "Carmona", "Crespo", "Roman", "Pastor", "Soto",
        "Saez", "Velasco", "Moya", "Soler", "Parra",
        "Esteban", "Bravo", "Gallardo", "Rojas", "Pardo"
    };
    strcpy(apellido, apellidos[rand()%(sizeof(apellidos)/30)]);
}

void cargaDni(char dni[]){
    itoa(rand()%100 * 1000000 + rand()%1000 * 1000 + rand()%1000, dni, 10);
}

int cargaLegajo(){
    return rand()%10000;
}

void cargaEmail(char email[], char nombre[], char apellido[]) {
    char dominios[][20] = {"@gmail.com", "@hotmail.com", "@yahoo.com", "@outlook.com"};
    int indice = rand() % 4;
    sprintf(email, "%s.%s%d%s", nombre, apellido, rand() % 100, dominios[indice]);
}

void cargaTelefonoFijo(char telefono[]) {
    sprintf(telefono, "4%03d-%04d", rand() % 1000, rand() % 10000);
}

void cargaTelefonoMovil(char telefono[]) {
    sprintf(telefono, "15-%04d-%04d", rand() % 10000, rand() % 10000);
}

void cargaDomicilio(stDomicilio* d) {
    char calles[][30] = {"San Martin", "Belgrano", "Mitre", "Rivadavia", "Sarmiento", "Lavalle", "Independencia", "Urquiza", "Alsina", "Castelli"};
    char ciudades[][30] = {"Buenos Aires", "Cordoba", "Rosario", "Mendoza", "La Plata"};
    char provincias[][30] = {"Buenos Aires", "Cordoba", "Santa Fe", "Mendoza", "Salta"};

    strcpy(d->calle, calles[rand() % 10]);
    d->numero = 100 + rand() % 900;
    strcpy(d->ciudad, ciudades[rand() % 5]);
    strcpy(d->provincia, provincias[rand() % 5]);
    sprintf(d->codigoPostal, "%04d", 1000 + rand() % 9000);
}


#endif // MOCKS_H_INCLUDED
