import Ciudad
import Arista

class Grafo:
    def __init__(self):
        self.vertices = {}
        self.aristas = []

    def add_ciudad(self, ciudad):
        self.vertices[ciudad.nombre] = ciudad

    def add_circuito(self, circuito):
        self.vertices[circuito.nombre] = circuito

    def add_arista(self, inicio, fin, distance):
        arista = Arista(inicio, fin, distance)
        self.aristas.append(arista)

    def get_vertice(self, nombre):
        return self.vertices.get(nombre)

    def get_vecinos(self, vertice):
        vecinos = []
        for arista in self.aristas:
            if arista.inicio == vertice:
                vecinos.append(arista.fin)
            elif arista.fin == vertice:
                vecinos.append(arista.inicio)
        return vecinos

    def create_circuito_and_remove_ciudades(self, ciudad_nombres):
        ciudades = [self.vertices[nombre] for nombre in ciudad_nombres if nombre in self.vertices]
        if len(ciudades) < 2:
            print("At least two ciudades are required to create a circuito.")
            return

        circuito_nombre = "Circuito_" + "_".join(ciudad.nombre for ciudad in ciudades)
        circuito = circuito(circuito_nombre, ciudades)
        self.add_circuito(circuito)

        for ciudad in ciudades:
            del self.vertices[ciudad.nombre]

        for arista in self.aristas:
            if arista.inicio in ciudades:
                arista.inicio = circuito
            if arista.fin in ciudades:
                arista.fin = circuito