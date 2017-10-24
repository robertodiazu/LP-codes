package interfaces;

interface InterfazA {
  void unMetodo();
}

interface InterfazB extends InterfazA{
  void otroMetodo(int a);
}

class ObjetoA implements InterfazA{

  public void unMetodo(){
    System.out.println("ObjetoA.unMetodo()");
  }

}

class ObjetoB extends ObjetoA implements InterfazB{

  public void otroMetodo(int a){
    System.out.println("ObjetoB.otroMetodo(" + a + ")");
  }
}

class Multiple{

  public static void main(String[] args){
    ObjetoB o = new ObjetoB();
    o.unMetodo();
    o.otroMetodo(3);
  }
}
