#include "Grafo.h"

#include <iostream>
#include <memory>
#include <string>


// Función principal
int main() {
    Grafo grafo;

    // Agregar vértices
    grafo.agregarCiudad(1, std::make_shared<Ciudad>("A", 1.5));
    grafo.agregarCiudad(2, std::make_shared<Ciudad>("B", 2.0));
    grafo.agregarCiudad(3, std::make_shared<Ciudad>("C", 1.8));

    // Agregar aristas con distancias en metros
    grafo.agregarArista(1, 2, 100);
    grafo.agregarArista(2, 1, 140);
    grafo.agregarArista(2, 3, 150);
    grafo.agregarArista(3, 1, 200);

    // Imprimir el grafo
    grafo.imprimir();

    return 0;
}
