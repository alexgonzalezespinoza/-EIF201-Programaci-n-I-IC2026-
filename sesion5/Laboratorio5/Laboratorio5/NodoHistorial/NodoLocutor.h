#pragma once

#include <iostream>
#include<string>

using namespace std;

namespace EIF201 {

    struct NodoLocutor {
        string         nombre;
        NodoLocutor* siguiente;  // en la lista circular, el último apunta al primero
        int turnosAsignados;
        NodoLocutor(const string& n)
            : nombre(n), siguiente(nullptr) ,turnosAsignados(0){
            cout << "[NodoLocutor creado: " << n << "]" << endl;
        }

        ~NodoLocutor() {
            cout << "[NodoLocutor destruido: " << nombre << "]" << endl;
        }
    };

} 


