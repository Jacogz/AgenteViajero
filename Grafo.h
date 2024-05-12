#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <memory>
#include <string>
#include "Ciudad.h"
#include "Circuito.h"
#include "Peso.h"
#include "Vertice.h"
#include "Arista.h"

// Clase para representar el grafo
class Grafo {
public:
    // Métodos para agregar vértices y aristas al grafo
    void agregarCiudad(int valor, std::shared_ptr<Ciudad> objeto);
    void agregarCircuito(int valor, std::shared_ptr<Circuito> objeto);

    void agregarArista(int valorInicio, int valorFin, double distancia);

    // Método para imprimir el grafo
    void imprimir() const;

private:
    std::unordered_map<int, std::shared_ptr<Vertice>> vertices;
    std::vector<std::shared_ptr<Arista>> aristas;
};

#endif // GRAFO_H
