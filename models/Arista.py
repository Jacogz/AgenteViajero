

class Arista:
    def __init__(self, inicio, final, distancia):
        self.inicio = inicio
        self.final = final
        self.distancia = distancia

    def __repr__(self):
        return f"Arista({self.inicio.nombre} -> {self.final.nombre}, {self.distancia} horas)"