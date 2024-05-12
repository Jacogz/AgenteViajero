#include <iostream>
#include <vector>
#include <unordered_map>
#include <memory>
#include <string>

#include "Grafo.h"
#include "Ciudad.h"
#include "Circuito.h"
#include "Peso.h"
#include "Vertice.h"


// Métodos para agregar vértices y aristas al grafo
void Grafo::agregarCiudad(int id, std::shared_ptr<Ciudad> objeto) {
    if (vertices.find(id) == vertices.end()) {
        vertices[id] = std::make_shared<VerticeCiudad>(id, objeto);
    }
}

void Grafo::agregarCircuito(int id, std::shared_ptr<Circuito> objeto) {
    if (vertices.find(id) == vertices.end()) {
        vertices[id] = std::make_shared<VerticeCircuito>(id, objeto);
    }
}

void Grafo::agregarArista(int valorInicio, int valorFin, double distancia) {
    auto itInicio = vertices.find(valorInicio);
    auto itFin = vertices.find(valorFin);
    if (itInicio != vertices.end() && itFin != vertices.end()) {
        auto inicio = itInicio->second;
        auto fin = itFin->second;
        auto peso = std::make_shared<Peso>(distancia);
        aristas.push_back(std::make_shared<Arista>(inicio, fin, peso));
    }
}

// Método para imprimir el grafo
void Grafo::imprimir() const{
    for (const auto& arista : aristas) {
        std::cout << "(" << arista->obtenerInicio()
                << ")--["<< arista->obtenerPeso()->obtenerdistancia() <<"]-->(" << arista->obtenerFin()<< ")" << std::endl;
    }
}
