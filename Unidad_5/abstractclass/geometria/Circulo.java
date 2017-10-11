package abstractclass.geometria;

public class Circulo {
  protected double radio;

public Circulo(int x, int y, double radio){
    this.x = x;
    this.y = y;
    this.radio = radio;
  }

  void rotar(int g) {
    //Rotar un circulo no hace nada
  }

  void dibujar(){
    System.out.println("Dibujando circulo: O");
  }

};
