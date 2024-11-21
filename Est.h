#ifndef Est_H
#define Est_H
//definicion de constantes
#define MAX_MATERIAS 10
#define MAX_NOMBRE_MATERIA 50
#define MAX_ASISTENCIAS 120
//declaracion de la estructura asistencia
struct Asistencia {
    char fecha[11]; // formato "YYYY-MM-DD"
    char materia[MAX_NOMBRE_MATERIA];
    char estado[10]; // "asistió", "falta", "tardanza"
};
//declaracion de la estructura estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][MAX_NOMBRE_MATERIA];
    int num_materias;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int num_asistencias;
};
//funciones
void mostrarEstudiante(struct Estudiante estudiante);
void agregarMateria(struct Estudiante *estudiante, const char *materia);
void eliminarMateria(struct Estudiante *estudiante, const char *materia);
void mostrarMaterias(struct Estudiante estudiante);
void registrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, const char *estado);
void mostrarAsistencias(struct Estudiante estudiante);

#endif  //Est_H
