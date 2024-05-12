#include "Vertice.h"
#include <memory>

// Clase para representar un vértice en el grafo
int Vertice::obtenerId() const { 
    return id;
}

std::shared_ptr<Ciudad> VerticeCiudad::obtenerObjeto() const { 
    return data; 
}

std::shared_ptr<Circuito> VerticeCircuito::obtenerObjeto() const{
    return data;
}