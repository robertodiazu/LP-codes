class Punto {
  int a;
  int b;

  Punto(int a, int b){
    this.a = a; this.b = b;
  }

  public void mostrar(){
    System.out.format("%d,%d\n",a,b);
  }
}

public class Ref {

    public static void main(String[] args) {
        Punto a ;
        a = new Punto (3 ,4) ;
        Punto b = a ;
        Punto c = new Punto (7 ,5) ;
        a = c;

        a.mostrar();
        b.mostrar();
        c.mostrar();
    }

}
