//COMP2120
//Hecho por Mariana Rivera Vazquez, Christopher A. Roman Gonzalez.
#include <iostream>
#include <cmath>
using namespace std;

// Variable global para el puntaje
int score = 0; // Hecho por Christopher Roman

// Definicion de la funcion para hacer preguntas
void hacer_pregunta(string pregunta, string opciones[], char respuesta_correcta) {
    cout << pregunta << endl;
    for (int i = 0; i < 4; i++) {
        cout << opciones[i] << endl;  // Mostrar las opciones
    }

    char respuesta_usuario;
    cout << "Tu respuesta: ";
    cin >> respuesta_usuario;

    // Verificar la respuesta
    if (respuesta_usuario == respuesta_correcta) {
        cout << "�Correcto!" << endl;
        // Incrementar el puntaje utilizando sqrt de cmath
        score += static_cast<int>(std::sqrt(10)); // Por ejemplo, sumar la ra�z cuadrada de 10. Hecho por Christopher Roman
    }
    else {
        cout << "Incorrecto. La respuesta correcta es: " << respuesta_correcta << endl;
    }
    cout << "Puntaje actual: " << score << endl; // Mostrar puntaje acumulado. Hecho por Christopher Roman
}

//Mariana: Me encargu� del men�.
// Definicion de la funcion que muestra el menu principal
void mostrar_menu() {
    cout << "\n                    AnimeTrivia\n";
    cout << "_________________________________________________________\n";
    cout << "1. Historia del Anime  |  2. Cuestionarios  |  3. Salir\n";
    cout << "\n Seleccione una opcion: ";
}

//Mariana: Estuve a cargo de crear todo el sistema de los cuestionarios, arrays, if/else, bucles, etc...
// Funciones de cuestionarios para cada anime
void cuestionario_naruto() {
    cout << "\n                              Cuestionario sobre Naruto \n";
    cout << "________________________________________________________________________________ \n";

    string opciones_de_respuesta[][4] = {
        {"(a) Equipo 8", "(b) Equipo 10", "(c) Equipo 7", "(d) Equipo 3"},
        {"(a) Convertirse en Hokage", "(b) Dominar todas las tecnicas ninja", "(c) Superar a Sasuke", "(d) Convertirse en un maestro en taijutsu"},
        {"(a) Sasuke Hatake", "(b) Sasuke Hyuga", "(c) Sasuke Uchiha", "(d) Sasuke Uzumaki"}
    };

    string preguntas[] = {
        "�C�mo se llama el equipo al que pertenece Naruto?",
        "�Cu�l es el sue�o de Naruto Uzumaki?",
        "�Cu�l es el nombre completo de Sasuke?"
    };

    char respuestas[] = { 'c', 'a', 'c' };

    for (int i = 0; i < 3; i++) {
        hacer_pregunta(preguntas[i], opciones_de_respuesta[i], respuestas[i]);

        cout << "\n Presiona enter para continuar...\n";
        cin.ignore();
        cin.get();
    }

    cout << "Puntaje final en Naruto: " << score << endl; // Mostrar puntaje final del cuestionario. Hecho por Christopher Roman
}
void cuestionario_onepiece() {
    cout << "\n                              Cuestionario sobre One Piece \n";
    cout << "________________________________________________________________________________ \n";

    string opciones_de_respuesta[][4] = {
        {"(a) Zoro", "(b) Luffy", "(c) Sanji", "(d) Nami"},
        {"(a) El One Piece", "(b) El tesoro de Gold Roger", "(c) La Gran Pir�mide", "(d) La Isla del Tesoro"},
        {"(a) Barbanegra", "(b) Ace", "(c) Shanks", "(d) Kizaru"}
    };

    string preguntas[] = {
        "�Qui�n es el primero en unirse a la tripulaci�n de Luffy?",
        "�Qu� es el 'One Piece'?",
        "�Qui�n es el principal enemigo de Luffy durante el arco de Marineford?"
    };

    char respuestas[] = { 'b', 'a', 'a' };

    for (int i = 0; i < 3; i++) {
        hacer_pregunta(preguntas[i], opciones_de_respuesta[i], respuestas[i]);

        cout << "\n Presiona enter para continuar...\n";
        cin.ignore();
        cin.get();
    }
    cout << "Puntaje final en One Piece: " << score << endl; // Mostrar puntaje final del cuestionario. Hecho por Christopher Roman
}

void cuestionario_attack_on_titan() {
    cout << "\n                              Cuestionario sobre Attack on Titan \n";
    cout << "________________________________________________________________________________ \n";

    string opciones_de_respuesta[][4] = {
        {"(a) Eren Yeager", "(b) Mikasa Ackerman", "(c) Levi Ackerman", "(d) Armin Arlert"},
        {"(a) El muro Maria", "(b) El muro Sina", "(c) El muro Rose", "(d) El muro Levi"},
        {"(a) La humanidad est� atrapada por titanes", "(b) Los titanes son los humanos", "(c) Hay un traidor entre los soldados", "(d) Los titanes son invisibles"}
    };

    string preguntas[] = {
        "�Qui�n es el protagonista principal de la serie?",
        "�Cu�l es el primer muro que cae durante el ataque de los titanes?",
        "�Qu� evento inicia la lucha contra los titanes?"
    };

    char respuestas[] = { 'a', 'b', 'a' };

    for (int i = 0; i < 3; i++) {
        hacer_pregunta(preguntas[i], opciones_de_respuesta[i], respuestas[i]);

        cout << "\n Presiona enter para continuar...\n";
        cin.ignore();
        cin.get();
    }
    cout << "Puntaje final en Attack on Titan: " << score << endl; // Mostrar puntaje final del cuestionario. Hecho por Christopher
}

// Funciones para ver historias de los animes
void mostrar_historia_naruto() {
    cout << "\nHistoria de Naruto:\n";
    cout << "Naruto Uzumaki es un joven ninja que lucha por ganarse el respeto de sus compa�eros y encontrar su lugar en el mundo. Su sue�o es convertirse en Hokage, el l�der de su aldea, y proteger a todos los que ama. La serie sigue su crecimiento como ninja y sus batallas contra amenazas peligrosas.\n";
    cout << "\n Presiona enter para continuar...\n";
    cin.ignore();
    cin.get();
}

void mostrar_historia_onepiece() {
    cout << "\nHistoria de One Piece:\n";
    cout << "One Piece sigue a Monkey D. Luffy y su tripulaci�n de piratas en su b�squeda por encontrar el legendario tesoro conocido como 'One Piece' para convertirse en el Rey de los Piratas. A lo largo de sus aventuras, Luffy forma fuertes lazos con su tripulaci�n y enfrenta enemigos poderosos.\n";
    cout << "\n Presiona enter para continuar...\n";
    cin.ignore();
    cin.get();
}

void mostrar_historia_attack_on_titan() {
    cout << "\nHistoria de Attack on Titan:\n";
    cout << "En un mundo donde la humanidad vive protegida por enormes muros para defenderse de los titanes, gigantes humanoides que devoran a las personas, un joven llamado Eren Yeager se une al ej�rcito despu�s de que su ciudad natal fuera destruida por un tit�n. La historia sigue su lucha por la supervivencia y la revelaci�n de los secretos detr�s de los titanes.\n";
    cout << "\n Presiona enter para volver al men�...\n";
    cin.ignore();
    cin.get();
}

int main() {
    int opcion;
    do {
        mostrar_menu();
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "\nSeleccione un anime para ver la historia:\n";
            cout << "1. Naruto\n";
            cout << "2. One Piece\n";
            cout << "3. Attack on Titan\n";
            cout << "4. Regresar al men� principal\n";
            int opcion_historia;
            cin >> opcion_historia;
            switch (opcion_historia) {
            case 1:
                mostrar_historia_naruto();
                break;

            case 2:
                mostrar_historia_onepiece();
                break;

            case 3:
                mostrar_historia_attack_on_titan();
                break;

            case 4:
                break;

            default:
                cout << "Opci�n no v�lida. Regresando al men� principal...\n";
                break;
            }
            break;

        case 2:
            cout << "\nSeleccione un anime para comenzar el cuestionario:\n";
            cout << "1. Naruto\n";
            cout << "2. One Piece\n";
            cout << "3. Attack on Titan\n";
            cout << "4. Regresar al men� principal\n";
            int opcion_cuestionario;
            cin >> opcion_cuestionario;
            switch (opcion_cuestionario) {

            case 1:
                score = 0; // Hecho por Christopher Roman
                cuestionario_naruto();
                break;

            case 2:
                score = 0; // Hecho por Christopher Roman
                cuestionario_onepiece();
                break;

            case 3:
                score = 0; // Hecho por Christopher Roman
                cuestionario_attack_on_titan();
                break;

            case 4:
                break;

            default:
                cout << "Opci�n no v�lida. Regresando al men� principal...\n";
                break;
            }
            break;

        case 3:
            cout << "Gracias por jugar AnimeTrivia. �Adi�s!" << endl;
            break;

        default:
            cout << "Opci�n no v�lida. Por favor, elija una opci�n v�lida.\n";
        }
    } while (opcion != 3);
    return 0;
}

