
class Figura:
    def __init__(self, x,y):
        self.posicion = (x,y)
        pass

    def dibujar(self):
        print("Figura.dibujar()")
        print("Posicion:"+str(self.posicion))
        pass

    def rotar(self):
        print("Figura.rotar()")
        pass

class Triangulo(Figura):
    def __init__(self,a,b,c):
        self.vertices = (a,b,c)

    def dibujar(self):
        print("Triangulo.dibujar()")
        print("vertices:"+str(self.vertices))

class Cuadrado(Figura):
    def __init__(self,a,b,c,d):
        self.vertices = (a,b,c,d)

    def dibujar(self):
        print("Cuadrado.dibujar()")
        print("vertices:"+str(self.vertices))

