#ifndef CIUDAD_H
#define CIUDAD_H

#include <iostream>
#include <string>

class Ciudad {
    private:
        std::string nombre;
        double tiempo_atencion;

        std::string obtenerNombre() const;
        double obtenerTiempo_atencion() const;

    public: 
        Ciudad(const std::string& nombre, double tiempo_atencion) : nombre(nombre), tiempo_atencion(tiempo_atencion) {};
};

#endif