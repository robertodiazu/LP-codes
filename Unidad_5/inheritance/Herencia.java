package inheritance;

public class Herencia {

  public static void main(String[] args) {
    SuperClase sup = new SuperClase();
    SubClase sub = new SubClase();a
    sup.initMensaje();
    sub.initMensaje();
    sub.addToMensaje();

    System.out.println( sup.getMensaje() );
    System.out.println( sub.getMensaje() );

  }
}
