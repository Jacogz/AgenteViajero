#ifndef CIRCUITO_H
#define CIRCUITO_H


#include <iostream>
#include <vector>
#include <memory>
#include <string>

#include "Ciudad.h"

class Circuito {
    private:
        std::vector<std::shared_ptr<Ciudad>> ciudades;
        double tiempo_total;

    public:
        Circuito();
};

#endif