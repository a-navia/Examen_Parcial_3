#include <iostream>
#include "estudiante.cpp"
#include "materia.cpp"
#include "asistencia.cpp"

int main() {
    // Crear un estudiante
    Estudiante estudiante("Juan Pérez", 21, 8.5);
    estudiante.agregarMateria("Matemáticas");
    estudiante.agregarMateria("Física");
    estudiante.agregarMateria("Programación");

    // Mostrar datos del estudiante
    cout << "Información del estudiante:" << endl;
    estudiante.mostrarEstudiante();
    cout << endl;

    // Gestión de materias
    Materias materias;
    materias.agregarMateria("Química");
    materias.mostrarMaterias();
    materias.eliminarMateria("Física");
    materias.mostrarMaterias();
    cout << endl;

    // Registro de asistencia
    Asistencia asistencia;
    asistencia.registrarAsistencia("2024-11-19", "Matemáticas", "Asistió");
    asistencia.registrarAsistencia("2024-11-19", "Física", "Falta");

    return 0;
}
