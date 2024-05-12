#ifndef ARISTA_H
#define ARISTA_H

#include "Vertice.h"
#include "Peso.h"
#include <memory>

// Clase para representar una arista en el grafo
class Arista {
public:
    Arista(std::shared_ptr<Vertice> inicio, std::shared_ptr<Vertice> fin, std::shared_ptr<Peso> peso) : inicio(inicio), fin(fin), peso(peso) {}
    std::shared_ptr<Vertice> obtenerInicio() const;
    std::shared_ptr<Vertice> obtenerFin() const;
    std::shared_ptr<Peso> obtenerPeso() const;
private:
    std::shared_ptr<Vertice> inicio;
    std::shared_ptr<Vertice> fin;
    std::shared_ptr<Peso> peso;
};

#endif // ARISTA_H