#include <iostream>
#include "Partida.h"
#include <random>

using namespace std;


int numeroAleatorio() {
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 10.0);
    return dist(mt);
}

void pista(int numJugador, int numPensado) {
    int diferencia = abs(numJugador - numPensado);

    if (diferencia > 5) {
        cout << "Estas lejos" << endl;
    }
    else if (diferencia < 3) {
        cout << "Estas al lado" << endl;
    }
    else {
        cout << "Te estas acercando" << endl;
    }
}

void Partida::acertar()
{
    int numeroPensado = numeroAleatorio();
    int numeroJugador;
    int vidas = 3;

    cout << "Tengo un numero, aciertalo!" << endl;

    do {
        cout << "Tienes " << vidas << " vidas!!";
        cout << "Escribe un numero:" << endl;
        cin >> numeroJugador;

        if (numeroJugador == numeroPensado) {
            cout << "Es el correcto" << endl;
            return;
        }
        else {
            cout << "Fallaste" << endl;
            pista(numeroJugador, numeroPensado);
        }
    } while (--vidas > 0);

    cout << "EL numero pensado es: " << numeroPensado << endl;
}