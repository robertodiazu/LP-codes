package finals;

class ObjetoA {
  int a;

  public ObjetoA(int a){
    this.a = a;
  }

  public void setA(int a){
    this.a = a;
  }

  public int getA(){
    return this.a;
  }

}


class FinalVariable {
  static final int numero = 3;
  static final ObjetoA objA = new ObjetoA(50);

  public static void main(String[] args){
    System.out.println(numero);
    // numero = 4; //error: cannot assign a value to final variable numero

    System.out.println(objA.getA());
    objA.setA(10);
    System.out.println(objA.getA());

    // objA = new ObjetoA(50); //error: cannot assign a value to final variable numero

    // ObjetoA otro = new ObjetoA(5);
    // objA = otro;


  }

}
