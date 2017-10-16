package abstractclass.geometria;

public class Circulo extends Figura{
  protected double radio;

public Circulo(int x, int y, double radio){
    this.x = x;
    this.y = y;
    this.radio = radio;
  }

  public void rotar(int g) {
    //Rotar un circulo no hace nada
  }

  public void dibujar(){
    System.out.println("Dibujando circulo: O");
  }

};
