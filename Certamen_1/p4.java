
abstract class Tanque {
  protected double x,y,z;
  protected double angulo;
  protected double velocidad;

  protected String tipoTanque;

  protected Tanque(String tipoTanque){
    this.tipoTanque = tipoTanque;
  }

  String tipoTanque(){
    return tipoTanque;
  }

  void girar(int direccion){
    angulo = (angulo + direccion) % 360.0;
  }

  void apuntar(int direccion){
    girar(direccion);
  }

  static Tanque crearTanque(String tipoTanque, boolean conTorreta){
    if( conTorreta ){
      return new TanqueConTorreta(tipoTanque);
    }else{
      return new TanqueSinTorreta(tipoTanque);
    }
  }
}

class TanqueConTorreta extends Tanque{
  protected double anguloTorreta;

  protected TanqueConTorreta(String tipoTanque){
    super(tipoTanque);
  }

  void apuntar(int direccion){
    anguloTorreta = (anguloTorreta + direccion)%360.0;
  }
}

class TanqueSinTorreta extends Tanque {
  protected TanqueSinTorreta(String tipoTanque){
    super(tipoTanque);
  }
}

class p4{

  public static void main(String[] args){
    Tanque t = Tanque.crearTanque("Mediano",true);
    System.out.println(t);
    t = Tanque.crearTanque("Destructor",false);
    System.out.println(t);
  }

}
