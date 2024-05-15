from Ciudad import Ciudad

class Circuito:
    def __init__(self, nombre, ciudades):
        self.nombre = nombre
        self.ciudades = ciudades
        self.tiempoUsado = sum(ciudad.tiempoUsado for ciudad in ciudades)

    def __repr__(self):
        return f"Circuito({self.nombre}, {self.tiempoUsado} horas)"