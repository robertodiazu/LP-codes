package interfaceexample;

public class AClass implements CustomInterface {

  public void AClassMetodo(){
    return;
  }

  public void metodoAImplementar(){
    System.out.println("metodoAImplementar() implementado en AClass");
  }

  public int otroMetodoMas(int nombreParametro){
    return 2*nombreParametro;
  }

}
