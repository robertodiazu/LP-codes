package abstractclass.geometria;

public class Cuadrado {
  protected double lado;
  protected int rotacion;

public Cuadrado(int x, int y, double lado){
    rotacion = 0;
    this.x = x;
    this.y = y;
    this.lado = lado;
  }

  void rotar(int g) {
    System.out.println("Rotando cuadrado " + g + " grados");
    rotacion = g;
  }

  void dibujar(){
    if( rotacion%90 == 0 )
      System.out.println("Dibujando cuadrado: []");
    else
      System.out.println("Dibujando cuadrado: <>");
  }
};
