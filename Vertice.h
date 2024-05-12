#ifndef VERTICE_H
#define VERTICE_H

#include "Ciudad.h"
#include "Circuito.h"
#include <memory>


// Clase para representar un vértice en el grafo
#include <memory>

class Vertice {
public:
    Vertice(int id, bool esCircuito) : id(id), esCircuito(esCircuito) {}

    int obtenerId() const;

protected:
    int id;
    bool esCircuito;
};

class VerticeCiudad: public Vertice {
public:
    VerticeCiudad(int id, std::shared_ptr<Ciudad> ciudad) : Vertice(id, false), data(ciudad) {}

    std::shared_ptr<Ciudad> obtenerObjeto() const; 

private:
    std::shared_ptr<Ciudad> data;
};

class VerticeCircuito : public Vertice {
public:
    VerticeCircuito(int id, std::shared_ptr<Circuito> circuito) : Vertice(id, true), data(circuito){}

    std::shared_ptr<Circuito> obtenerObjeto() const;

private:
    std::shared_ptr<Circuito> data;
};


#endif // VERTICE_H
