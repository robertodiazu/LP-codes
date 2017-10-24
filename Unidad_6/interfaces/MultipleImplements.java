package interfaces;

interface InterfazA {
  void unMetodo();
}

interface InterfazB{
  int unMetodo(int a);
}

class ObjetoA implements InterfazA, InterfazB{

  public void unMetodo(){
    System.out.println("void ObjetoA.unMetodo()");
  }

  public int unMetodo(int a){
    System.out.println("int ObjetoA.unMetodo()");
    return a;
  }

}

class MultipleImplements{

  public static void main(String[] args){
    ObjetoA o = new ObjetoA();
    o.unMetodo();
    o.unMetodo(3);
    //o.otroMetodo();
  }
}
