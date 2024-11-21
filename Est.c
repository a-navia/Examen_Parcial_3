// Creado: 17/07/2021
#include <stdio.h>
#include <string.h>
#include "Est.h"
//funcion para mostrar la informacion del estudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    mostrarMaterias(estudiante);
    mostrarAsistencias(estudiante);
}
//funcion para agregar materias
void agregarMateria(struct Estudiante *estudiante, const char *materia) {
    if (estudiante->num_materias < MAX_MATERIAS) {
        //copia la materia en la posicion num_materias
        strncpy(estudiante->materias[estudiante->num_materias], materia, MAX_NOMBRE_MATERIA - 1);
        estudiante->materias[estudiante->num_materias][MAX_NOMBRE_MATERIA - 1] = '\0';
        estudiante->num_materias++;
    } else {
        printf("Error: No se pueden agregar más materias.\n");//mensaje de error, ya qu ehay un numero definido de materias
    }
}
//funcion para eliminar materias
void eliminarMateria(struct Estudiante *estudiante, const char *materia) {
    int found = 0;//variable para saber si se encontro la materia
    for (int i = 0; i < estudiante->num_materias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) { //compara la materia con la materia en la posicion i
            found = 1; //se encontro la materia
            for (int j = i; j < estudiante->num_materias - 1; j++) {
                strncpy(estudiante->materias[j], estudiante->materias[j + 1], MAX_NOMBRE_MATERIA);//copia la materia en la posicion j+1 en la posicion j
            }
            estudiante->num_materias-- ; //Zona de eliminacion de la materia
            break;
        }
    }
    if (!found) { //si no se encontro la materia (usa el found de la linea 107)
        printf("Error: Materia no encontrada.\n");
    }
}
//funcion para mostrar las materias
void mostrarMaterias(struct Estudiante estudiante) {
    printf("Materias:\n");
    for (int i = 0; i < estudiante.num_materias; i++)  //recorre las materias
        printf("  %s\n", estudiante.materias[i]);
}


//funcion para registrar asistencias
void registrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, const char *estado) {
    if (estudiante->num_asistencias < MAX_ASISTENCIAS) { //si el numero de asistencias es menor al maximo de asistencias
        strncpy(estudiante->asistencias[estudiante->num_asistencias].fecha, fecha, 10); //copia la fecha en la posicion num_asistencias
        estudiante->asistencias[estudiante->num_asistencias].fecha[10] = '\0';
        strncpy(estudiante->asistencias[estudiante->num_asistencias].materia, materia, MAX_NOMBRE_MATERIA - 1);
        estudiante->asistencias[estudiante->num_asistencias].materia[MAX_NOMBRE_MATERIA - 1] = '\0';
        strncpy(estudiante->asistencias[estudiante->num_asistencias].estado, estado, 9);
        estudiante->asistencias[estudiante->num_asistencias].estado[9] = '\0';
        estudiante->num_asistencias++; //aumenta el numero de asistencias
    } else {
        printf("limite de aasistencias\n");
    }
}

void mostrarAsistencias(struct Estudiante estudiante) { //funcion para mostrar las asistencias
    printf("Asistencias:\n");
    for (int i = 0; i < estudiante.num_asistencias; i++) {
        printf("  Fecha: %s, Materia: %s, Estado: %s\n", estudiante.asistencias[i].fecha, estudiante.asistencias[i].materia, estudiante.asistencias[i].estado);
    }
}