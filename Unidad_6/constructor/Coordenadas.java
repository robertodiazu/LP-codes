package constructor;

class Coordenadas {
  private double x;
  private double y;

  private Coordenadas(){

  }

  public void mostrarPosicion(){
    System.out.println("X:" + x + " Y:" + y);
  }

  public static Coordenadas Cartesianas(double x, double y){
    Coordenadas c = new Coordenadas();
    c.x = x;
    c.y = y;
  }

  public static Coordenadas Polares(double angle, double radius){
    Coordenadas c = new Coordenadas();
    c.x = radius * Math.cos(angle);
    c.y = radius * Math.sin(angle);
  }

};

class Main {

  public static void main(String[] args){
    Coordenadas c1,c2;
    c1 = Coordenadas.Cartesianas(3.0,4.0);
    c2 = Coordenadas.Polares(Math.PI/4,3);
    c1.mostrarPosicion();
    c2.mostrarPosicion();
  }

}
