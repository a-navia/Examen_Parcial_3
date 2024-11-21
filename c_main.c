#include <string.h>
#include "Est.h"

int main() {
    struct Estudiante estudiante;
//inicia las variables de la estructura
    strncpy(estudiante.nombre, "Juan", sizeof(estudiante.nombre) - 1);
    estudiante.nombre[sizeof(estudiante.nombre) - 1] = '\0'; //termina el string
    estudiante.edad = 24;
    estudiante.promedio = 7.0;
    estudiante.num_materias = 0; //inicia el numero de materias en 0
    estudiante.num_asistencias = 0; //inicia el numero de asistencias en 0

    // llama la funcion agregarMateria para agregar materias
    agregarMateria(&estudiante, "Matematicas 1");
    agregarMateria(&estudiante, "Programacion 1");
    agregarMateria(&estudiante, "Estructuras");

    // llama la funcion registrarAsistencia para registrar asistencias
    registrarAsistencia(&estudiante, "2023-10-01", "Matematicas 1", "asistio");
    registrarAsistencia(&estudiante, "2023-10-02", "Programacion 1", "falta");
    registrarAsistencia(&estudiante, "2023-10-03", "Estructuras", "tardanza");

    // llama la funcion mostrarEstudiante para mostrar la informacion del estudiante
    mostrarEstudiante(estudiante);
   //llama la funcion eliminarMateria para eliminar una materia
    eliminarMateria(&estudiante, "Programacion 1");
    //mostrar la informacion de materias
    mostrarMaterias(estudiante);
    return 0;
}