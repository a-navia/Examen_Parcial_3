#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Materias {
public:
    vector<string> listaMaterias;

    void agregarMateria(const string& materia) {
        listaMaterias.push_back(materia);
        cout << "Materia agregada: " << materia << endl;
    }

    void eliminarMateria(const string& materia) {
        auto it = find(listaMaterias.begin(), listaMaterias.end(), materia);
        if (it != listaMaterias.end()) {
            listaMaterias.erase(it);
            cout << "Materia eliminada: " << materia << endl;
        } else {
            cout << "Error: La materia no existe." << endl;
        }
    }

    void mostrarMaterias() {
        cout << "Materias actuales:" << endl;
        for (const string& materia : listaMaterias) {
            cout << "- " << materia << endl;
        }
    }
};
