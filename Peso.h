#ifndef PESO_H
#define PESO_H

// Clase para representar el peso de una arista (distancia en metros)
class Peso {
public:
    Peso(double distancia) : distancia(distancia) {}
    double obtenerdistancia() const;
private:
    double distancia;
};

#endif // PESO_H