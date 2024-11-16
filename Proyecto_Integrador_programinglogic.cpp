

/*COSAS QUE FALTAN: falta implementar alguna opcion para continuar o salir por ejemplo luego de acabar cada cuestionario,
o por ejemplo cuando estas en el menu de info....Tambien agregar mas informacion, de los animes o agregar mas opciones de animes
diferentes...*/

#include <iostream>
using namespace std;

// funcion para mostrar el menu
void mostrar_menu() {
    cout << "                              Misterio Anime!!! \n";
    cout << "________________________________________________________________________________ \n";
    cout << "\n    Elige una de las opciones: \n"
         << "    " << "1: Naruto"
         << "    " << "2: One Piece"
         << "    " << "3: Attack on Titan" //si desean pueden poner aun mas opciones :D
         << "    " << "4: Cuestionario"
         << "    " << "5: Salir \n"
         << "    " << "\n    Ingresa tu eleccion: \n ";
}

//Este es el menu de el cuestonario
void cuestionario_menu() {
    cout << "\n                              Cuestionario Anime!!! \n";
    cout << "________________________________________________________________________________ \n";
    cout << "\n    Elige el anime del cuestionario: \n"
         << "    1: Naruto\n"
         << "    2: One Piece\n"
         << "    3: Attack on Titan\n"
         << "    4: Regresar al menC: principal\n"
         << "\n    Ingresa tu elecciC3n: \n";
}

//Preguntas de cuestionario
void cuestionario_naruto() {
    cout << "\n                              Cuestionario sobre Naruto \n";
    cout << "________________________________________________________________________________ \n";
    cout << "\n 1. B?Como se llama el equipo al que pertenece Naruto? \n"
         << "    " << "(a)Equipo 8"
         << "    " << "(b)Equipo 10"
         << "    " << "(c)Equipo 7"
         << "    " << "(d)Equipo 3\n";

    cout << "Conteste (a, b, c, d): ";
    char respuesta;
    cin >> respuesta;
    if (respuesta == 'c') {
        cout << "    ¡Correcto! El equipo de Naruto es el Equipo 7.\n";
    } else {
        cout <<      "Incorrecto. La respuesta correcta es: Equipo 7.\n";
    }

    // Pausa hasta que el usuario presione Enter
    cout << "             \nPresione Enter para regresar al menu del cuestionario...";
    cin.ignore(); // Ignora el salto de línea pendiente
    cin.get();    // Espera a que se presione Enter
}

//aqui se controla el cuestionario
void cuestonario_manage() {
    int eleccion_cuestionario;
    do {
        cuestionario_menu();
        cin >> eleccion_cuestionario;

        switch (eleccion_cuestionario) {
            case 1:
                cuestionario_naruto();
                break;
            case 2:
                cout << "\nCuestionario de One Piece aún no está implementado.\n";

                // Pausa hasta que el usuario presione Enter
                cout << "\nPresione Enter para regresar al menu del cuestionario...";
                cin.ignore();
                cin.get();
                break;

            case 3:
                cout << "\nCuestionario de Attack on Titan aún no está implementado.\n";

                // Pausa hasta que el usuario presione Enter
                cout << "\nPresione Enter para regresar al menu del cuestionario...";
                cin.ignore();
                cin.get();
                break;

            case 4:
                cout << "Regresando al menú principal...\n";
                break;

            default:
                cout << "Opción no válida. Por favor, intente de nuevo.\n";
                break;
        }
    } while (eleccion_cuestionario != 4);
}

// swish para opciones...FALTA LA INFORMACION DE LOS ANIMES
void opcion_menu(int opcion) {
    switch (opcion) {
        case 1:
            cout << "\n opcion 1: Naruto.\n";//estos son ejemplos, falta la informacion
            break;
        case 2:
            cout << "\n opcion 2: One Piece.\n";
            break;
        case 3:
            cout << "\n opcion 3: Attack on Titan.\n";
            break;
        case 4:
            cuestonario_manage();
            break;
        case 5:
            cout << "\n Hasta luego!!! \n";
            break;
        default:
            cout << "\n Opcion No Valida. Por favor, intente de nuevo.\n";
            break;
    }
}

int main() {
    int opcion, score;

    mostrar_menu();
    cin >> opcion;

    while (opcion != 5) {
        opcion_menu(opcion); //error arreglado
        mostrar_menu();
        cin >> opcion;
    }

    cout << "\n Programa terminado. ¡Gracias por participar!\n";
    return 0;
}

