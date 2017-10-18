package static_member;

class Primos {
  private static int primoActual = 2;
  protected static int[] PrimosConocidos = new int[8];
  static { //Inicializacion estatica
    PrimosConocidos[0] = primoActual;
    for (int i = 1; i < PrimosConocidos.length; i++)
      PrimosConocidos[i] = ProximoPrimo();
  }

  static int ProximoPrimo(){
    primoActual++;
    int posibleFact = primoActual-1;
    while(true){
      if( posibleFact == 1 ){
        return primoActual;
      }else{
        if( primoActual%posibleFact == 0 ){
          primoActual++;
        }else{
          posibleFact--;
        }
      }
    }
  }
}

class StaticInit{
  public static void main(String[] args){
    for( int primo : Primos.PrimosConocidos ){
      System.out.println(primo);
    }
  }
}
