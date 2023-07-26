// Acertar Num Aleatorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>

int main()
{
    int numeroPensado = numeroAleatorio();
    int numeroJugador;
    int vidas = 3;

    std::cout << "Tengo un numero, aciertalo! Tienes 3 vidas" << std::endl;

    do {
        std::cout << "Escribe un numero:" << std::endl;
        std::cin >> numeroJugador;

        if (numeroJugador == numeroPensado) {
            std::cout << "Es el correcto" << std::endl;
        } else {
            std::cout << "Fallaste" << std::endl;
        }
    } while (--vidas > 0 && numeroJugador != numeroPensado);
    
    if (vidas == 0) {
        std::cout << "EL número pensado es: " << numeroPensado << std::endl;
    }
}

int numeroAleatorio() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 10.0);
    return dist(mt);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
