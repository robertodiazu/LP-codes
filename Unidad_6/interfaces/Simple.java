package interfaces;

interface Interfaz {
  void unMetodo();
  int otroMetodo(int a);
}

class ObjetoA implements Interfaz{

  public void unMetodo(){
    System.out.println("ObjetoA.unMetodo()");
  }

  public int otroMetodo(int a){
    return a;
  }

}

class ObjetoDistinto implements Interfaz{

  public void unMetodo(){
    System.out.println("ObjetoDistinto.unMetodo()");
  }

  public int otroMetodo(int a){
    return 2*a;
  }

}

class Simple{

  public static void main(String[] args){
    ObjetoA oa = new ObjetoA();
    ObjetoDistinto od = new ObjetoDistinto();
    oa.unMetodo();
    od.unMetodo();
  }
}
