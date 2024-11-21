#include <iostream>
#include <regex>
using namespace std;

class Asistencia {
public:
    string fecha;  // Fecha en formato YYYY-MM-DD
    string materia;
    string estado; // Asistió, Falta, Tardanza

    void registrarAsistencia(const string& fechaInput, const string& materiaInput, const string& estadoInput) {
        if (validarFecha(fechaInput)) {
            fecha = fechaInput;
            materia = materiaInput;
            estado = estadoInput;
            cout << "Registro de asistencia exitoso:" << endl;
            mostrarAsistencia();
        } else {
            cerr << "Error: Formato de fecha inválido. Use YYYY-MM-DD." << endl;
        }
    }

    void mostrarAsistencia() const {
        cout << "Fecha: " << fecha << ", Materia: " << materia << ", Estado: " << estado << endl;
    }

private:
    bool validarFecha(const string& fechaInput) {
        regex formatoFecha("^\\d{4}-\\d{2}-\\d{2}$");
        return regex_match(fechaInput, formatoFecha);
    }
};
