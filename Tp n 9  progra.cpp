#include <iostream>
#include <string>
using namespace std;


void Inicializar(string &nombre, string &apellido, string &curso, string &materia, float notas[3]) {
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    cout << "Ingrese curso: ";
    cin >> curso;
    cout << "Ingrese materia: ";
    cin >> materia;
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> notas[i];
    }
}


float calcularPromedio(float notas[3]) {
    return (notas[0] + notas[1] + notas[2]) / 3;
}


string calcularCondicion(float promedio) {
    return (promedio >= 6) ? "Aprobado" : "Reprobado";
}

int main() {
    string nombre, apellido, curso, materia;
    float notas[3];

    Inicializar(nombre, apellido, curso, materia, notas);
    float promedio = calcularPromedio(notas);
    string condicion = calcularCondicion(promedio);

    cout << "\nAlumno: " << nombre << " " << apellido;
    cout << "\nCurso: " << curso << "\nMateria: " << materia;
    cout << "\nPromedio: " << promedio << "\nCondición: " << condicion << endl;

    return 0;
}

