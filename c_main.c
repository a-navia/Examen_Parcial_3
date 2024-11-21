#include <string.h>
#include "Est.h"

int main() {
    struct Estudiante estudiante;
//inicia las variables de la estructura
    strncpy(estudiante.nombre, "Juan Perez", sizeof(estudiante.nombre) - 1);
    estudiante.nombre[sizeof(estudiante.nombre) - 1] = '\0';
    estudiante.edad = 20;
    estudiante.promedio = 8.5;
    estudiante.num_materias = 0;
    estudiante.num_asistencias = 0;

    // llama la funcion agregarMateria para agregar materias
    agregarMateria(&estudiante, "Matematicas");
    agregarMateria(&estudiante, "Fisica");
    agregarMateria(&estudiante, "Quimica");

    // llama la funcion registrarAsistencia para registrar asistencias
    registrarAsistencia(&estudiante, "2023-10-01", "Matematicas", "asistio");
    registrarAsistencia(&estudiante, "2023-10-02", "Fisica", "falta");
    registrarAsistencia(&estudiante, "2023-10-03", "Quimica", "tardanza");

    // llama la funcion mostrarEstudiante para mostrar la informacion del estudiante
    mostrarEstudiante(estudiante);
   //llama la funcion eliminarMateria para eliminar una materia
    eliminarMateria(&estudiante, "Fisica");
    //mostrar la informacion de materias
    mostrarMaterias(estudiante);
    return 0;
}