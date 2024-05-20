



def Pathfinder(grafo, ciudad, tiempo_total):
    inicio_jornada = 8.5
    fin_jornada = 17    
    
    def calcular_horario(hora):
        if inicio_jornada <= hora < fin_jornada:
            return fin_jornada - hora
    
    ciudad_actual = ciudad
    tiempo_transcurrido = 0
    path = []
    
    while tiempo_transcurrido < tiempo_total:
        
        tiempo_restante = tiempo_total - tiempo_transcurrido
        
        tiempo_restante_hoy = calcular_horario(tiempo_restante%24 + 8.5)
        
        vecinos = grafo.get_vecinos(ciudad_actual)
        
        if tiempo_restante_hoy:
            
            path.append(ciudad_actual)
            tiempo_transcurrido += ciudad.tiempoAtencion
            grafo.retirar_ciudad(ciudad_actual.nombre)
            
            vecinos.sort(key = lambda vecino: vecino.tiempoAtencion - (tiempo_restante_hoy - grafo.get_distancia(ciudad_actual.nombre, vecino.nombre)), reverse=True)
            
            ciudad_actual = vecinos[0]
            tiempo_transcurrido += grafo.get_distancia(ciudad_actual.nombre, vecinos[0].nombre)
        
        else:
            
            vecinos.sort(key = lambda vecino: vecino.tiempoAtencion, reverse = True)
            
            if vecinos[0].tiempoAtencion > ciudad_actual.tiempoAtencion:
                ciudad_actual = vecinos[0]
                tiempo_transcurrido += grafo.get_distancia(ciudad_actual.nombre, vecinos[0].nombre)
            
            else:
                while calcular_horario(tiempo_restante%24) != 8.5:
                    tiempo_transcurrido+=0.1
    
    return path