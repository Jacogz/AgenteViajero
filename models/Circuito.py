class Circuito:
    def __init__(self, nombre, ciudades):
        self.nombre = nombre
        self.ciudades = ciudades
        self.tiempoAtencion = sum(ciudad.tiempoAtencion for ciudad in ciudades)

    def __repr__(self):
        return f"Circuito({self.nombre}, {self.tiempoAtencion} horas)"