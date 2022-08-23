package interfaces;

class Multiple{

  public static void main(String[] args){
    ObjetoB o = new ObjetoB();
    o.unMetodo();
    o.otroMetodo(3);
  }
}

interface InterfazA {
  void unMetodo();
}

interface InterfazC {
  int unMetodo();
  void otroMetodoMas();
}

interface InterfazB extends InterfazA, InterfazC{
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

  public void otroMetodoMas(){
    //
  }
}


