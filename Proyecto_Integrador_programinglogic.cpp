#include <iostream>
using namespace std;

// funcion para mostrar el menu
void mostrar_menu() {
	cout << "  \n                          Misterio Anime!!! \n";
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
	     << "    1: Naruto"
	     << "    2: One Piece"
	     << "    3: Attack on Titan"
	     << "    4: Regresar al menu: principal\n"
	     << "\n    Ingresa tu eleccicion: \n";
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
		cout << "    B!Correcto! El equipo de Naruto es el Equipo 7.\n";
	}
	else {
		cout << "Incorrecto. La respuesta correcta es: Equipo 7.\n";
	}

	// Pausa hasta que el usuario presione Enter
	cout << "             \nPresione Enter para regresar al menu del cuestionario...";
	cin.ignore(); // Ignora el salto de lC-nea pendiente
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
			cout << "\n                              Cuestionario sobre One Piece \n";
			cout << "________________________________________________________________________________ \n";
			cout << "\n 1. B?QuiC)n fue el primer miembro en unirse a la tripulaciC3n de los Sombrero de Paja?\n";
			cout << "    " << "(a) Sanji";
			cout << "    " << "(b) Nami";
			cout << "    " << "(c) Usopp";
			cout << "    " << "(d) Zoro\n";

			cout << "Conteste (a, b, c, d): ";
			char respuesta;
			cin >> respuesta;
			if (respuesta == 'd') {
				cout << "    B!Correcto! El primer miembro fue Zoro.\n";
			}
			else {
				cout << "Incorrecto. La respuesta correcta es: Zoro.\n";
			}

			// Pausa hasta que el usuario presione Enter
			cout << "\nPresione Enter para regresar al menu del cuestionario...";
			cin.ignore();
			cin.get();
			break;

		case 3:
			cout << "\nCuestionario de Attack on Titan aC:n no estC! implementado.\n";

			// Pausa hasta que el usuario presione Enter
			cout << "\nPresione Enter para regresar al menu del cuestionario...";
			cin.ignore();
			cin.get();
			break;

		case 4:
			cout << "Regresando al menC: principal...\n";
			break;

		default:
			cout << "OpciC3n no vC!lida. Por favor, intente de nuevo.\n";
			break;
		}
	} while (eleccion_cuestionario != 4);
}

// swish para opciones...FALTA LA INFORMACION DE LOS ANIMES
void opcion_menu(int opcion) {
	switch (opcion) {
	case 1:
		cout << "\n opcion 1: Naruto.\n";
		cout << "\n Personajes: Naruto, Sasuke, Sakura, Kakashi\n";
		cout << "\n Info: Naruto sigue la historia de un joven ninja rechazado por su aldea que, con esfuerzo y amistad, \n";
		cout << " busca convertirse en Hokage mientras enfrenta poderosos enemigos y descubre los secretos de su mundo. \n";
		break;
	case 2:
		cout << "\n opcion 2: One Piece.\n";
		cout << "\n Personajes: Luffy, Zoro, Nami, Usopp, Sanji\n";
		cout << "\n Info: One Piece narra las aventuras de Monkey D. Luffy y su tripulaciC3n en busca del tesoro legendario \n";
		cout << " para convertirse en el Rey de los Piratas, enfrentando enemigos y explorando un mundo lleno de misterios.\n";
		break;
	case 3:
		cout << "\n opcion 3: Attack on Titan.\n";
		cout << "\n Personajes: Eren Yeager, Mikasa Ackerman, Armin Arlert, Levi Ackerman\n";
		cout << "\n Info: Attack on Titan sigue a la humanidad, que vive en ciudades rodeadas por enormes muros para protegerse \n";
		cout << " de los titanes, monstruos gigantes que devoran personas, mientras Eren Yeager y sus amigos luchan por descubrir \n";
		cout << " la verdad detrC!s de estas criaturas y el origen de su mundo.\n";
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
	// Pausa hasta que el usuario presione Enter
	cout << "             \nPresione Enter para regresar al menu principal...";
	cin.ignore(); // Ignora el salto de lC-nea pendiente
	cin.get();    // Espera a que se presione Enter
}

int main() {
	int opcion, score;

	mostrar_menu();
	cin >> opcion;

	while (opcion != 5) { //error arreglado
		opcion_menu(opcion);
		mostrar_menu();
		cin >> opcion;
	}

	cout << "\n Programa terminado. B!Gracias por participar!\n";
	return 0;
}

