package constructor;

class ObjetoA{
  int a;

  public ObjetoA(){
    this.a = 100;
    System.out.println("ObjetoA()");
  }

  public ObjetoA(int a){
    this.a = a;
    System.out.println("ObjetoA("+this.a+")");
  }

}

class ObjetoB extends ObjetoA{
  int b = 30;

  public ObjetoB(){
    super(10);
    System.out.println("Valor de b:" + b);
    this.b = 50;
    System.out.println("ObjetoB()");
  }
}


class ConstructorInheritance {

  public static void main(String[] args){
    ObjetoB ob = new ObjetoB();
  }

}
