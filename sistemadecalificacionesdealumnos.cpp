#include <iostream>
#include <string>

using namespace std;

int main() {
    // Definimos el límite y los arreglos para guardar los datos
    const int MAX_ALUMNOS = 5;
    string nombres[MAX_ALUMNOS];
    float calificaciones[MAX_ALUMNOS];
    
    int cantidadAlumnos = 0;
    int opcion;

    do {
        // Menú principal
        cout << "\n===== SISTEMA DE CALIFICACIONES =====\n";
        cout << "1. Registrar alumno\n";
        cout << "2. Mostrar alumnos\n";
        cout << "3. Calcular promedio\n";
        cout << "4. Buscar alumno\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Registrar alumno
                if (cantidadAlumnos < MAX_ALUMNOS) {
                    cout << "\nNombre del alumno: ";
                    cin >> nombres[cantidadAlumnos];

                    cout << "Calificación (0 a 10): ";
                    cin >> calificaciones[cantidadAlumnos];

                    // Validamos que la nota sea correcta
                    if (calificaciones[cantidadAlumnos] >= 0 && calificaciones[cantidadAlumnos] <= 10) {
                        cantidadAlumnos++;
                        cout << "¡Alumno registrado con éxito!\n";
                    } else {
                        cout << "Error: La calificación debe estar entre 0 y 10.\n";
                    }
                } else {
                    cout << "Error: El grupo ya está lleno (máximo 5 alumnos).\n";
                }
                break;
            }

            case 2: {
                // Mostrar alumnos
                if (cantidadAlumnos == 0) {
                    cout << "\nNo hay alumnos registrados.\n";
                } else {
                    cout << "\n--- LISTA DE ALUMNOS ---\n";
                    for (int i = 0; i < cantidadAlumnos; i++) {
                        cout << i + 1 << ". " << nombres[i] << " - Calificación: " << calificaciones[i];
                        
                        // Evaluamos si aprobó o reprobó
                        if (calificaciones[i] >= 6.0) {
                            cout << " [APROBADO]\n";
                        } else {
                            cout << " [REPROBADO]\n";
                        }
                    }
                }
                break;
            }

            case 3: {
                // Calcular promedio
                if (cantidadAlumnos == 0) {
                    cout << "\nNo hay alumnos para calcular el promedio.\n";
                } else {
                    float suma = 0;
                    for (int i = 0; i < cantidadAlumnos; i++) {
                        suma += calificaciones[i];
                    }
                    float promedio = suma / cantidadAlumnos;
                    cout << "\nEl promedio general del grupo es: " << promedio << endl;
                }
                break;
            }

            case 4: {
                // Buscar alumno por nombre
                if (cantidadAlumnos == 0) {
                    cout << "\nNo hay alumnos registrados.\n";
                } else {
                    string nombreBuscado;
                    cout << "\nIngresa el nombre del alumno a buscar: ";
                    cin >> nombreBuscado;

                    bool encontrado = false;
                    for (int i = 0; i < cantidadAlumnos; i++) {
                        if (nombres[i] == nombreBuscado) {
                            cout << "\n¡Alumno encontrado!\n";
                            cout << "Nombre: " << nombres[i] << endl;
                            cout << "Calificación: " << calificaciones[i] << endl;
                            
                            if (calificaciones[i] >= 6.0) {
                                cout << "Estado: APROBADO\n";
                            } else {
                                cout << "Estado: REPROBADO\n";
                            }
                            
                            encontrado = true;
                            break; // Detiene la búsqueda al encontrarlo
                        }
                    }

                    if (!encontrado) {
                        cout << "El alumno '" << nombreBuscado << "' no fue encontrado.\n";
                    }
                }
                break;
            }

            case 5:
                cout << "\n¡Gracias por usar el sistema! Hasta luego.\n";
                break;

            default:
                cout << "\nOpción no válida. Intenta de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}