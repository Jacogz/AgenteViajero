class Ciudad:
    def __init__(self, nombre, tiempoAtencion):
        self.nombre = nombre
        self.tiempoAtencion = tiempoAtencion

    def __repr__(self):
        return f"Ciudad({self.nombre}, {self.tiempoAtencion} horas)"