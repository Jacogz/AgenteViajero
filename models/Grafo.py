from Circuito import Circuito

from Arista import Arista
from Circuito import Circuito

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

    def crear_circuito(self, ciudad_nombres):
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

    #def depurar(self ,  )

    def ciudad_no_idonea(self, tiempo_ciudad, tiempo_viaje):
        return tiempo_ciudad / tiempo_viaje

    def encontrar_ciudades_no_idoneas(self, porcentaje_eliminar=0.1):
        ciudades_no_idoneas = {}
        for ciudad in self.vertices.values():
            if isinstance(ciudad, Circuito):
                continue
            tiempo_para_atender = ciudad.tiempoAtencion
            tiempo_a_bogota = self.get_tiempo_a_bogota(ciudad.nombre)
            ciudad_no_idonea = self.ciudad_no_idonea(tiempo_para_atender, tiempo_a_bogota)
            ciudades_no_idoneas[ciudad.nombre] = ciudad_no_idonea

        
        ciudades_ordenadas = sorted(ciudades_no_idoneas.items(), key=lambda x: x[1])
        
        
        num_eliminar = int(len(ciudades_ordenadas) * porcentaje_eliminar)
        
        
        ciudades_a_eliminar = [nombre for nombre, valor in ciudades_ordenadas[:num_eliminar]]

        return ciudades_a_eliminar

    def eliminar_ciudades_no_idoneas(self, porcentaje_eliminar=0.1):
        ciudades_no_idoneas = self.encontrar_ciudades_no_idoneas(porcentaje_eliminar)
        
        for ciudad_nombre in ciudades_no_idoneas:
            if ciudad_nombre in self.vertices:
                del self.vertices[ciudad_nombre]
                self.aristas = [arista for arista in self.aristas if ciudad_nombre not in [arista.inicio.nombre, arista.fin.nombre]]

        for vertice in list(self.vertices.values()):
            if isinstance(vertice, Circuito):
                ciudades_a_remover = [ciudad for ciudad in vertice.ciudades if ciudad.nombre in ciudades_no_idoneas]
                for ciudad in ciudades_a_remover:
                    vertice.ciudades.remove(ciudad)
                    self.aristas = [arista for arista in self.aristas if ciudad.nombre not in [arista.inicio.nombre, arista.fin.nombre]]
                vertice.tiempoAtencion = sum(ciudad.tiempoAtencion for ciudad in vertice.ciudades)

                # Si el circuito se queda vacío, eliminarlo
                if not vertice.ciudades:
                    del self.vertices[vertice.nombre]

    def get_tiempo_a_bogota(self, ciudad_nombre):
        for arista in self.aristas:
            if arista.inicio.nombre == ciudad_nombre and arista.final.nombre == "Bogota":
                return arista.distancia
            elif arista.final.nombre == ciudad_nombre and arista.inicio.nombre == "Bogota":
                return arista.distancia
        return None