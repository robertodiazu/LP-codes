package messages;

class Objeto{
  private int numero = 0;

  int getNumero(){
    return numero;
  }

  void setNumero(int n){
    this.numero = n;
  }
}

class ObjetoCliente {

  int mandarMensaje(Objeto o){
    int n = o.getNumero();
    o.setNumero(n+1);
    return n;
  }

}

public class Mensaje {
  public static void main(String[] args) {

    ObjetoCliente oc = new ObjetoCliente();
    Objeto o = new Objeto();

    System.out.println( oc.mandarMensaje(o) );
    System.out.println( oc.mandarMensaje(o) );
  }
}
