class Ciudad:
    def __init__(self, nombre, tiempoUsado):
        self.nombre = nombre
        self.tiempoUsado = tiempoUsado

    def __repr__(self):
        return f"Ciudad({self.nombre}, {self.tiempoUsado} horas)"