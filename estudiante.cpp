#include <iostream>
#include <vector>
using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    float promedio;
    vector<string> materias;

    Estudiante(string nombre, int edad, float promedio) {
        this->nombre = nombre;
        this->edad = edad;
        this->promedio = promedio;
    }

    void agregarMateria(const string& materia) {
        materias.push_back(materia);
    }

    void mostrarEstudiante() {
        cout << "Nombre del estudiante: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
        cout << "Materias inscritas:" << endl;
        for (const string& materia : materias) {
            cout << "- " << materia << endl;
        }
    }
};
