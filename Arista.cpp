#include "Arista.h"
#include <memory>

// Clase para representar una arista en el grafo
std::shared_ptr<Vertice> Arista::obtenerInicio() const { 
    return inicio; 
}

std::shared_ptr<Vertice> Arista::obtenerFin() const { 
    return fin; 
}

std::shared_ptr<Peso> Arista::obtenerPeso() const { 
    return peso; 
}
