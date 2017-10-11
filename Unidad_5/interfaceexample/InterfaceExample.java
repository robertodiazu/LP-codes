package interfaceexample;

public class InterfaceExample {

  static void invocarMetodo( CustomInterface ci ){
    ci.metodoAImplementar();
  }

  public static void main(String[] args){
    AClass a = new AClass();
    invocarMetodo(a);
  }
}
