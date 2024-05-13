#include "Grafo.h"

#include <iostream>
#include <memory>
#include <string>


// Función principal
int main() {
    Grafo grafo;

    // Agregar vértices
    grafo.agregarCiudad(0, std::make_shared<Ciudad>(" Leticia", 0));
    grafo.agregarCiudad(1, std::make_shared<Ciudad>(" Medellín", 1));
    grafo.agregarCiudad(2, std::make_shared<Ciudad>("Arauca", 2));
    grafo.agregarCiudad(3, std::make_shared<Ciudad>(" Barranquilla", 3));
    grafo.agregarCiudad(4, std::make_shared<Ciudad>("Cartagena de Indias", 4));
    grafo.agregarCiudad(5, std::make_shared<Ciudad>("Tunja", 5));
    grafo.agregarCiudad(6, std::make_shared<Ciudad>("Manizales", 6));
    grafo.agregarCiudad(7, std::make_shared<Ciudad>(" Florencia", 7));
    grafo.agregarCiudad(8, std::make_shared<Ciudad>("Yopal", 8));
    grafo.agregarCiudad(9, std::make_shared<Ciudad>("Popayán", 9));
    grafo.agregarCiudad(10, std::make_shared<Ciudad>("Valledupar", 10));
    grafo.agregarCiudad(11, std::make_shared<Ciudad>("Quibdó", 11));
    grafo.agregarCiudad(12, std::make_shared<Ciudad>("Montería", 12));
    grafo.agregarCiudad(13, std::make_shared<Ciudad>("Bogotá", 13));
    grafo.agregarCiudad(14, std::make_shared<Ciudad>("Inírida", 14));
    grafo.agregarCiudad(15, std::make_shared<Ciudad>("San José del Guaviare", 15));
    grafo.agregarCiudad(16, std::make_shared<Ciudad>("Neiva", 16));
    grafo.agregarCiudad(17, std::make_shared<Ciudad>("Riohacha", 17));
    grafo.agregarCiudad(18, std::make_shared<Ciudad>("Santa Marta", 18));
    grafo.agregarCiudad(19, std::make_shared<Ciudad>("Villavicencio", 19));
    grafo.agregarCiudad(20, std::make_shared<Ciudad>("San Juan de Pasto", 20));
    grafo.agregarCiudad(21, std::make_shared<Ciudad>("San José de Cúcuta", 21));
    grafo.agregarCiudad(22, std::make_shared<Ciudad>("Mocoa", 22));
    grafo.agregarCiudad(23, std::make_shared<Ciudad>("Armenia", 23));
    grafo.agregarCiudad(24, std::make_shared<Ciudad>("Pereira", 24));
    grafo.agregarCiudad(25, std::make_shared<Ciudad>("Bucaramanga", 25));
    grafo.agregarCiudad(26, std::make_shared<Ciudad>("Sincelejo", 26));
    grafo.agregarCiudad(27, std::make_shared<Ciudad>("Ibagué", 27));
    grafo.agregarCiudad(28, std::make_shared<Ciudad>("Cali", 28));
    grafo.agregarCiudad(29, std::make_shared<Ciudad>("Mitú", 29));

    // Agregar aristas con distancias en metros
    grafo.agregarArista(  0 , 1 , 14.36);
grafo.agregarArista(  0 , 2 , 13.55 );
grafo.agregarArista(  0 , 3 , 19.35 );
grafo.agregarArista(  0 , 4 , 19.3 );
grafo.agregarArista(  0 , 5 , 12.4 );
grafo.agregarArista(  0 , 6 , 13.2 );
grafo.agregarArista(  0 , 7 , 10 );
grafo.agregarArista(  0 , 8 , 12 );
grafo.agregarArista(  0 , 9 , 11.36 );
grafo.agregarArista(  0 , 10 , 18.3 );
grafo.agregarArista(  0 , 11 , 14.43 );
grafo.agregarArista(  0 , 12 , 17.3 );
grafo.agregarArista(  0 , 13 , 12 );
grafo.agregarArista(  0 , 14 , 10.14 );
grafo.agregarArista(  0 , 15 , 9 );
grafo.agregarArista(  0 , 16 , 11 );
grafo.agregarArista(  0 , 17 , 19.42 );
grafo.agregarArista(  0 , 18 , 19.42 );
grafo.agregarArista(  0 , 19 , 11.13 );
grafo.agregarArista(  0 , 20 , 11.5 );
grafo.agregarArista(  0 , 21 , 15.12 );
grafo.agregarArista(  0 , 22 , 10.35 );
grafo.agregarArista(  0 , 23 , 13 );
grafo.agregarArista(  0 , 24 , 13.1 );
grafo.agregarArista(  0 , 25 , 14.28 );
grafo.agregarArista(  0 , 26 , 18 );
grafo.agregarArista(  0 , 27 , 12.3 );
grafo.agregarArista(  0 , 28 , 12.25 );
grafo.agregarArista(  0 , 29 , 6.44 );


grafo.agregarArista(  1 , 2 , 6 );
grafo.agregarArista(  1 , 3 , 5.56 );
grafo.agregarArista(  1 , 4 , 5 );
grafo.agregarArista(  1 , 5 , 2.5 );
grafo.agregarArista(  1 , 6 , 1.27 );
grafo.agregarArista(  1 , 7 , 5.41 );
grafo.agregarArista(  1 , 8 , 4 );
grafo.agregarArista(  1 , 9 , 4.51 );
grafo.agregarArista(  1 , 10 , 5.53 );
grafo.agregarArista(  1 , 11 , 1.3 );
grafo.agregarArista(  1 , 12 , 3 );
grafo.agregarArista(  1 , 13 , 2.43 );
grafo.agregarArista(  1 , 14 , 9.51 );
grafo.agregarArista(  1 , 15 , 5.46 );
grafo.agregarArista(  1 , 16 , 4 );
grafo.agregarArista(  1 , 17 , 7.16 );
grafo.agregarArista(  1 , 18 , 6.21 );
grafo.agregarArista(  1 , 19 , 3.31 );
grafo.agregarArista(  1 , 20 , 6.32 );
grafo.agregarArista(  1 , 21 , 4.15 );
grafo.agregarArista(  1 , 22 , 6.24 );
grafo.agregarArista(  1 , 23 , 2.06 );
grafo.agregarArista(  1 , 24 , 1.46 );
grafo.agregarArista(  1 , 25 , 3.11 );
grafo.agregarArista(  1 , 26 , 3.45 );
grafo.agregarArista(  1 , 27 , 2.15 );
grafo.agregarArista(  1 , 28 , 3.39 );
grafo.agregarArista(  1 , 29 , 9 );


grafo.agregarArista(  2 , 3 , 6.5 );
grafo.agregarArista(  2 , 4 , 7.5 );
grafo.agregarArista(  2 , 5 , 3.43 );
grafo.agregarArista(  2 , 6 , 6.21 );
grafo.agregarArista(  2 , 7 , 9 );
grafo.agregarArista(  2 , 8 , 2.56 );
grafo.agregarArista(  2 , 9 , 9.11 );
grafo.agregarArista(  2 , 10 , 5.09 );
grafo.agregarArista(  2 , 11 , 7.27 );
grafo.agregarArista(  2 , 12 , 6.35 );
grafo.agregarArista(  2 , 13 , 5.05 );
grafo.agregarArista(  2 , 14 , 5.16 );
grafo.agregarArista(  2 , 15 , 6 );
grafo.agregarArista(  2 , 16 , 7.33 );
grafo.agregarArista(  2 , 17 , 6.43 );
grafo.agregarArista(  2 , 18 , 6.36 );
grafo.agregarArista(  2 , 19 , 5.03 );
grafo.agregarArista(  2 , 20 , 10.48 );
grafo.agregarArista(  2 , 21 , 2.21 );
grafo.agregarArista(  2 , 22 , 10.17 );
grafo.agregarArista(  2 , 23 , 6.5 );
grafo.agregarArista(  2 , 24 , 6.41 );
grafo.agregarArista(  2 , 25 , 2.53 );
grafo.agregarArista(  2 , 26 , 6.18 );
grafo.agregarArista(  2 , 27 , 6.23 );
grafo.agregarArista(  2 , 28 , 8.23 );
grafo.agregarArista(  2 , 29 , 7.11 );


grafo.agregarArista(  3 , 4 , 1.07 );
grafo.agregarArista(  3 , 5 , 6.53 );
grafo.agregarArista(  3 , 6 , 7.18 );
grafo.agregarArista(  3 , 7 , 11.32 );
grafo.agregarArista(  3 , 8 , 7.3 );
grafo.agregarArista(  3 , 9 , 10.43 );
grafo.agregarArista(  3 , 10 , 1.57 );
grafo.agregarArista(  3 , 11 , 6.52 );
grafo.agregarArista(  3 , 12 , 3.02 );
grafo.agregarArista(  3 , 13 , 7.51 );
grafo.agregarArista(  3 , 14 , 12.07 );
grafo.agregarArista(  3 , 15 , 10.38 );
grafo.agregarArista(  3 , 16 , 9.54 );
grafo.agregarArista(  3 , 17 , 2.22 );
grafo.agregarArista(  3 , 18 , 0.46 );
grafo.agregarArista(  3 , 19 , 8.3 );
grafo.agregarArista(  3 , 20 , 12.22 );
grafo.agregarArista(  3 , 21 , 4.41 );
grafo.agregarArista(  3 , 22 , 12.16 );
grafo.agregarArista(  3 , 23 , 8 );
grafo.agregarArista(  3 , 24 , 7.38 );
grafo.agregarArista(  3 , 25 , 5.08 );
grafo.agregarArista(  3 , 26 , 2.1 );
grafo.agregarArista(  3 , 27 , 8 );
grafo.agregarArista(  3 , 28 , 9.29 );
grafo.agregarArista(  3 , 29 , 13.1 );


grafo.agregarArista(  4 , 5 , 6.31 );
grafo.agregarArista(  4 , 6 , 6.33 );
grafo.agregarArista(  4 , 7 , 10.47 );
grafo.agregarArista(  4 , 8 , 7.17 );
grafo.agregarArista(  4 , 9 , 9.52 );
grafo.agregarArista(  4 , 10 , 2.45 );
grafo.agregarArista(  4 , 11 , 5.57 );
grafo.agregarArista(  4 , 12 , 2 );
grafo.agregarArista(  4 , 13 , 7.19 );
grafo.agregarArista(  4 , 14 , 12.47 );
grafo.agregarArista(  4 , 15 , 10.14 );
grafo.agregarArista(  4 , 16 , 9.11 );
grafo.agregarArista(  4 , 17 , 3.27 );
grafo.agregarArista(  4 , 18 , 1.54 );
grafo.agregarArista(  4 , 19 , 8 );
grafo.agregarArista(  4 , 20 , 11.3 );
grafo.agregarArista(  4 , 21 , 4.47 );
grafo.agregarArista(  4 , 22 , 11.26 );
grafo.agregarArista(  4 , 23 , 7.12 );
grafo.agregarArista(  4 , 24 , 6.52 );
grafo.agregarArista(  4 , 25 , 5 );
grafo.agregarArista(  4 , 26 , 1.21 );
grafo.agregarArista(  4 , 27 , 7.19 );
grafo.agregarArista(  4 , 28 , 8.28 );
grafo.agregarArista(  4 , 29 , 12.58 );


grafo.agregarArista(  5 , 6 , 2.42 );
grafo.agregarArista(  5 , 7 , 5.33 );
grafo.agregarArista(  5 , 8 , 1.13 );
grafo.agregarArista(  5 , 9 , 5.31 );
grafo.agregarArista(  5 , 10 , 6 );
grafo.agregarArista(  5 , 11 , 4 );
grafo.agregarArista(  5 , 12 , 5 );
grafo.agregarArista(  5 , 13 , 1.26 );
grafo.agregarArista(  5 , 14 , 7 );
grafo.agregarArista(  5 , 15 , 3.44 );
grafo.agregarArista(  5 , 16 , 3.58 );
grafo.agregarArista(  5 , 17 , 7.24 );
grafo.agregarArista(  5 , 18 , 7.5 );
grafo.agregarArista(  5 , 19 , 1.44 );
grafo.agregarArista(  5 , 20 , 7.1 );
grafo.agregarArista(  5 , 21 , 3.5 );
grafo.agregarArista(  5 , 22 , 6.44 );
grafo.agregarArista(  5 , 23 , 3 );
grafo.agregarArista(  5 , 24 , 3 );
grafo.agregarArista(  5 , 25 , 1.59 );
grafo.agregarArista(  5 , 26 , 5.15 );
grafo.agregarArista(  5 , 27 , 2.4 );
grafo.agregarArista(  5 , 28 , 4.39 );
grafo.agregarArista(  5 , 29 , 6.31 );


grafo.agregarArista(  6 , 7 , 4.14 );
grafo.agregarArista(  6 , 8 , 3.51 );
grafo.agregarArista(  6 , 9 , 3.3 );
grafo.agregarArista(  6 , 10 , 7.11 );
grafo.agregarArista(  6 , 11 , 1.36 );
grafo.agregarArista(  6 , 12 , 4.32 );
grafo.agregarArista(  6 , 13 , 1.51 );
grafo.agregarArista(  6 , 14 , 9.28 );
grafo.agregarArista(  6 , 15 , 4.41 );
grafo.agregarArista(  6 , 16 , 2.38 );
grafo.agregarArista(  6 , 17 , 8.34 );
grafo.agregarArista(  6 , 18 , 7.45 );
grafo.agregarArista(  6 , 19 , 2.35 );
grafo.agregarArista(  6 , 20 , 5.12 );
grafo.agregarArista(  6 , 21 , 5 );
grafo.agregarArista(  6 , 22 , 5 );
grafo.agregarArista(  6 , 23 , 0.41 );
grafo.agregarArista(  6 , 24 , 0.23 );
grafo.agregarArista(  6 , 25 , 3.52 );
grafo.agregarArista(  6 , 26 , 5.12 );
grafo.agregarArista(  6 , 27 , 0.51 );
grafo.agregarArista(  6 , 28 , 2.21 );
grafo.agregarArista(  6 , 29 , 8 );


grafo.agregarArista(  7 , 8 , 6.03 );
grafo.agregarArista(  7 , 9 , 1.36 );
grafo.agregarArista(  7 , 10 , 11.5 );
grafo.agregarArista(  7 , 11 , 5.1 );
grafo.agregarArista(  7 , 12 , 8.46 );
grafo.agregarArista(  7 , 13 , 4);
grafo.agregarArista(  7 , 14 , 9.43 );
grafo.agregarArista(  7 , 15 , 3.5 );
grafo.agregarArista(  7 , 16 , 1.39 );
grafo.agregarArista(  7 , 17 , 12.38 );
grafo.agregarArista(  7 , 18 , 11.57 );
grafo.agregarArista(  7 , 19 , 3.57 );
grafo.agregarArista(  7 , 20 , 3.5 );
grafo.agregarArista(  7 , 21 , 2.07 );
grafo.agregarArista(  7 , 22 , 1.23 );
grafo.agregarArista(  7 , 23 , 3.35 );
grafo.agregarArista(  7 , 24 , 3.5 );
grafo.agregarArista(  7 , 25 , 7.25 );
grafo.agregarArista(  7 , 26 , 9.27 );
grafo.agregarArista(  7 , 27 , 3.3 );
grafo.agregarArista(  7 , 28 , 2.3 );
grafo.agregarArista(  7 , 29 , 6.39 );


grafo.agregarArista(  8 , 9 , 6.18 );
grafo.agregarArista(  8 , 10 , 6.23 );
grafo.agregarArista(  8 , 11 , 5.15 );
grafo.agregarArista(  8 , 12 , 6 );
grafo.agregarArista(  8 , 13 , 2.12 );
grafo.agregarArista(  8 , 14 , 5.48 );
grafo.agregarArista(  8 , 15 , 3.24 );
grafo.agregarArista(  8 , 16 , 4.37 );
grafo.agregarArista(  8 , 17 , 7.39 );
grafo.agregarArista(  8 , 18 , 7.34 );
grafo.agregarArista(  8 , 19 , 2.06 );
grafo.agregarArista(  8 , 20 , 7.52 );
grafo.agregarArista(  8 , 21 , 3.08 );
grafo.agregarArista(  8 , 22 , 7.21 );
grafo.agregarArista(  8 , 23 , 4.1 );
grafo.agregarArista(  8 , 24 , 4.07 );
grafo.agregarArista(  8 , 25 , 2.22 );
grafo.agregarArista(  8 , 26 , 6 );
grafo.agregarArista(  8 , 27 , 3.39 );
grafo.agregarArista(  8 , 28 , 5.35 );
grafo.agregarArista(  8 , 29 , 5.4 );


grafo.agregarArista(  9 , 10 , 10.41 );
grafo.agregarArista(  9 , 11 , 4 );
grafo.agregarArista(  9 , 12 , 7.48 );
grafo.agregarArista(  9 , 13 , 4 );
grafo.agregarArista(  9 , 14 , 10.52 );
grafo.agregarArista(  9 , 15 , 4.54 );
grafo.agregarArista(  9 , 16 , 1.45 );
grafo.agregarArista(  9 , 17 , 12 );
grafo.agregarArista(  9 , 18 , 11.12 );
grafo.agregarArista(  9 , 19 , 4.14 );
grafo.agregarArista(  9 , 20 , 1.42 );
grafo.agregarArista(  9 , 21 , 8.23 );
grafo.agregarArista(  9 , 22 , 1.34 );
grafo.agregarArista(  9 , 23 , 2.49 );
grafo.agregarArista(  9 , 24 , 3 );
grafo.agregarArista(  9 , 25 , 7.11 );
grafo.agregarArista(  9 , 26 , 8.34 );
grafo.agregarArista(  9 , 27 , 3 );
grafo.agregarArista(  9 , 28 , 1.13 );
grafo.agregarArista(  9 , 29 , 8 );


grafo.agregarArista(  10 , 11 , 7.11 );
grafo.agregarArista(  10 , 12 , 3.5 );
grafo.agregarArista(  10 , 13 , 7.15 );
grafo.agregarArista(  10 , 14 , 10.24 );
grafo.agregarArista(  10 , 15 , 9.43 );
grafo.agregarArista(  10 , 16 , 9.35 );
grafo.agregarArista(  10 , 17 , 1.23 );
grafo.agregarArista(  10 , 18 , 1.3 );
grafo.agregarArista(  10 , 19 , 7.46 );
grafo.agregarArista(  10 , 20 , 12.23 );
grafo.agregarArista(  10 , 21 , 3.17 );
grafo.agregarArista(  10 , 22 , 12.1 );
grafo.agregarArista(  10 , 23 , 7.52 );
grafo.agregarArista(  10 , 24 , 7.33 );
grafo.agregarArista(  10 , 25 , 4.06 );
grafo.agregarArista(  10 , 26 , 3 );
grafo.agregarArista(  10 , 27 , 7.47 );
grafo.agregarArista(  10 , 28 , 9.31 );
grafo.agregarArista(  10 , 29 , 11.54 );


grafo.agregarArista(  11 , 12 , 3.52 );
grafo.agregarArista(  11 , 13 , 3.26 );
grafo.agregarArista(  11 , 14 , 11 );
grafo.agregarArista(  11 , 15 , 6.15 );
grafo.agregarArista(  11 , 16 , 3.47 );
grafo.agregarArista(  11 , 17 , 8.31 );
grafo.agregarArista(  11 , 18 , 7.27 );
grafo.agregarArista(  11 , 19 , 4.11 );
grafo.agregarArista(  11 , 20 , 5.33 );
grafo.agregarArista(  11 , 21 , 5.46 );
grafo.agregarArista(  11 , 22 , 5.34 );
grafo.agregarArista(  11 , 23 , 1.51 );
grafo.agregarArista(  11 , 24 , 1.31 );
grafo.agregarArista(  11 , 25 , 4.41 );
grafo.agregarArista(  11 , 26 , 4.42 );
grafo.agregarArista(  11 , 27 , 2.2 );
grafo.agregarArista(  11 , 28 , 2.46 );
grafo.agregarArista(  11 , 29 , 9.37 );


grafo.agregarArista(  12 , 13 , 5.32 );
grafo.agregarArista(  12 , 14 , 11.28 );
grafo.agregarArista(  12 , 15 , 8.34 );
grafo.agregarArista(  12 , 16 , 7.11 );
grafo.agregarArista(  12 , 17 , 5 );
grafo.agregarArista(  12 , 18 , 3.43 );
grafo.agregarArista(  12 , 19 , 6.18 );
grafo.agregarArista(  12 , 20 , 9.24 );
grafo.agregarArista(  12 , 21 , 4.15 );
grafo.agregarArista(  12 , 22 , 9.22 );
grafo.agregarArista(  12 , 23 , 5.11 );
grafo.agregarArista(  12 , 24 , 4.5 );
grafo.agregarArista(  12 , 25 , 3.55 );
grafo.agregarArista(  12 , 26 , 0.54 );
grafo.agregarArista(  12 , 27 , 5.21 );
grafo.agregarArista(  12 , 28 , 6.34 );
grafo.agregarArista(  12 , 29 , 11.32 );


grafo.agregarArista(  13 , 14 , 7.39 );
grafo.agregarArista(  13 , 15 , 3 );
grafo.agregarArista(  13 , 16 , 2.32 );
grafo.agregarArista(  13 , 17 , 8.38 );
grafo.agregarArista(  13 , 18 , 8.08 );
grafo.agregarArista(  13 , 19 , 0.48 );
grafo.agregarArista(  13 , 20 , 5.44 );
grafo.agregarArista(  13 , 21 , 4.28 );
grafo.agregarArista(  13 , 22 , 5.18 );
grafo.agregarArista(  13 , 23 , 1.58 );
grafo.agregarArista(  13 , 24 , 2 );
grafo.agregarArista(  13 , 25 , 3.18 );
grafo.agregarArista(  13 , 26 , 6 );
grafo.agregarArista(  13 , 27 , 1.26 );
grafo.agregarArista(  13 , 28 , 3.2 );
grafo.agregarArista(  13 , 29 , 6.17 );


grafo.agregarArista(  14 , 15 , 6 );
grafo.agregarArista(  14 , 16 , 9.09 );
grafo.agregarArista(  14 , 17 , 11.05 );
grafo.agregarArista(  14 , 18 , 11.5 );
grafo.agregarArista(  14 , 19 , 7.02 );
grafo.agregarArista(  14 , 20 , 12 );
grafo.agregarArista(  14 , 21 , 7.3 );
grafo.agregarArista(  14 , 22 , 11.17 );
grafo.agregarArista(  14 , 23 , 9.36 );
grafo.agregarArista(  14 , 24 , 9.36 );
grafo.agregarArista(  14 , 25 , 7.32 );
grafo.agregarArista(  14 , 26 , 11.21 );
grafo.agregarArista(  14 , 27 , 9 );
grafo.agregarArista(  14 , 28 , 10.37 );
grafo.agregarArista(  14 , 29 , 417 );


grafo.agregarArista(  15 , 16 , 3.17 );
grafo.agregarArista(  15 , 17 , 11 );
grafo.agregarArista(  15 , 18 , 10.49 );
grafo.agregarArista(  15 , 19 , 2.16 );
grafo.agregarArista(  15 , 20 , 5.58 );
grafo.agregarArista(  15 , 21 , 6.32 );
grafo.agregarArista(  15 , 22 , 5.15 );
grafo.agregarArista(  15 , 23 , 4.27 );
grafo.agregarArista(  15 , 24 , 4.39 );
grafo.agregarArista(  15 , 25 , 5.37 );
grafo.agregarArista(  15 , 26 , 8.56 );
grafo.agregarArista(  15 , 27 , 3.55 );
grafo.agregarArista(  15 , 28 , 4.54 );
grafo.agregarArista(  15 , 29 , 3.32 );


grafo.agregarArista(  16 , 17 , 10.58 );
grafo.agregarArista(  16 , 18 , 10.18 );
grafo.agregarArista(  16 , 19 , 2.31 );
grafo.agregarArista(  16 , 20 , 3.14 );
grafo.agregarArista(  16 , 21 , 7 );
grafo.agregarArista(  16 , 22 , 2.45 );
grafo.agregarArista(  16 , 23 , 2 );
grafo.agregarArista(  16 , 24 , 2.22 );
grafo.agregarArista(  16 , 25 , 5.48 );
grafo.agregarArista(  16 , 26 , 7.5 );
grafo.agregarArista(  16 , 27 , 1.51 );
grafo.agregarArista(  16 , 28 , 1.39 );
grafo.agregarArista(  16 , 29 , 6.34 );


grafo.agregarArista(  17 , 18 , 1.36 );
grafo.agregarArista(  17 , 19 , 9.08 );
grafo.agregarArista(  17 , 20 , 13.46 );
grafo.agregarArista(  17 , 21 , 4.3 );
grafo.agregarArista(  17 , 22 , 13.34 );
grafo.agregarArista(  17 , 23 , 9.15 );
grafo.agregarArista(  17 , 24 , 8.56 );
grafo.agregarArista(  17 , 25 , 5.26 );
grafo.agregarArista(  17 , 26 , 4.05 );
grafo.agregarArista(  17 , 27 , 9.11 );
grafo.agregarArista(  17 , 28 , 10.54 );
grafo.agregarArista(  17 , 29 , 13.3 );


grafo.agregarArista(  18 , 19 , 8.45 );
grafo.agregarArista(  18 , 20 , 12.53 );
grafo.agregarArista(  18 , 21 , 4.36 );
grafo.agregarArista(  18 , 22 , 12.45 );
grafo.agregarArista(  18 , 23 , 8.26 );
grafo.agregarArista(  18 , 24 , 8.06 );
grafo.agregarArista(  18 , 25 , 5.13 );
grafo.agregarArista(  18 , 26 , 2.47 );
grafo.agregarArista(  18 , 27 , 8.27 );
grafo.agregarArista(  18 , 28 , 10 );
grafo.agregarArista(  18 , 29 , 13.11 );


grafo.agregarArista(  19 , 20 , 5.46 );
grafo.agregarArista(  19 , 21 , 4.48 );
grafo.agregarArista(  19 , 22 , 5.14 );
grafo.agregarArista(  19 , 23 , 2.34 );
grafo.agregarArista(  19 , 24 , 2.4 );
grafo.agregarArista(  19 , 25 , 3.43 );
grafo.agregarArista(  19 , 26 , 6.42 );
grafo.agregarArista(  19 , 27 , 2 );
grafo.agregarArista(  19 , 28 , 3.4 );
grafo.agregarArista(  19 , 29 , 5.29 );


grafo.agregarArista(  20 , 21 , 10.5 );
grafo.agregarArista(  20 , 22 , 0.46 );
grafo.agregarArista(  20 , 23 , 4.31 );
grafo.agregarArista(  20 , 24 , 4.5 );
grafo.agregarArista(  20 , 25 , 8.53 );
grafo.agregarArista(  20 , 26 , 10.12 );
grafo.agregarArista(  20 , 27 , 4.42 );
grafo.agregarArista(  20 , 28 , 2.52 );
grafo.agregarArista(  20 , 29 , 8.42 );


grafo.agregarArista(  21 , 22 , 9.43 );
grafo.agregarArista(  21 , 23 , 5.4 );
grafo.agregarArista(  21 , 24 , 5.26 );
grafo.agregarArista(  21 , 25 , 1.12 );
grafo.agregarArista(  21 , 26 , 3.56 );
grafo.agregarArista(  21 , 27 , 5.24 );
grafo.agregarArista(  21 , 28 , 7.22 );
grafo.agregarArista(  21 , 29 , 8.37 );


grafo.agregarArista(  22 , 23 , 4.19 );
grafo.agregarArista(  22 , 24 , 4.38 );
grafo.agregarArista(  22 , 25 , 8.32 );
grafo.agregarArista(  22 , 26 , 10.08 );
grafo.agregarArista(  22 , 27 , 4.24 );
grafo.agregarArista(  22 , 28 , 2.48 );
grafo.agregarArista(  22 , 29 , 7.56 );


grafo.agregarArista(  23 , 24 , 0.2 );
grafo.agregarArista(  23 , 25 , 4.28 );
grafo.agregarArista(  23 , 26 , 5.52 );
grafo.agregarArista(  23 , 27 , 0.33 );
grafo.agregarArista(  23 , 28 , 1.42 );
grafo.agregarArista(  23 , 29 , 7.5 );


grafo.agregarArista(  24 , 25 , 4.15 );
grafo.agregarArista(  24 , 26 , 5.31 );
grafo.agregarArista(  24 , 27 , 0.44 );
grafo.agregarArista(  24 , 28 , 1.58 );
grafo.agregarArista(  24 , 29 , 8.02 );


grafo.agregarArista(  25 , 26 , 3.51 );
grafo.agregarArista(  25 , 27 , 4.12 );
grafo.agregarArista(  25 , 28 , 6.1 );
grafo.agregarArista(  25 , 29 , 8.02 );


grafo.agregarArista(  26 , 27 , 5.58 );
grafo.agregarArista(  26 , 28 , 7.2 );
grafo.agregarArista(  26 , 29 , 11.45 );


grafo.agregarArista(  27 , 28 , 2 );
grafo.agregarArista(  27 , 29 , 7.18 );


grafo.agregarArista(  27 , 29 , 8.13 );

    // Imprimir el grafo
    grafo.imprimir();

    return 0;
}
