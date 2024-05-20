class Arista:
    def __init__(self, inicio, fin, distancia):
        self.inicio = inicio
        self.fin = fin
        self.distancia = distancia

    def __repr__(self):
        return f"Arista({self.inicio.nombre} -> {self.fin.nombre}, {self.distancia} horas)"