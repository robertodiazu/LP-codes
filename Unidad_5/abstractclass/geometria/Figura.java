package abstractclass.geometria;

public abstract class Figura {
  protected double x,y;

  public void trasladar(double ax, double ay){
    x+= ax;
    y+= ay;
  }

  public abstract void rotar(int g);
  public abstract void dibujar();
};
