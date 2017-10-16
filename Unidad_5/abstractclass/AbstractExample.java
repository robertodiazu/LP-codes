package abstractclass;

import abstractclass.geometria.*;

public class AbstractExample {

  public static void main(String[] args) {
    //Figura f = new Figura();
    Figura f; // = new Circulo(0,0,1.0);
    f = new Circulo(0,0,1.0);
    f.rotar(30);
    f.dibujar();

    f = new Cuadrado(0,0,1.0);
    f.dibujar();
    f.rotar(45);
    f.dibujar();


  }
}
