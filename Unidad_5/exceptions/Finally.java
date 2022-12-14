package exceptions;

import java.io.IOException;

class Finally{

  public static void main(String[] args) throws Exception{

    int a = 0;

    try{
      System.out.println("Entrando al try");
      if( a <= 0 ){
        System.out.println("Lanzando Exception");
        throw new Exception();
      }
      if( a == 1 ){
        System.out.println("Retornando en try");
        return;
      }

      System.out.println("Saliendo try");

    }catch(IOException e){
      System.out.println("Manejando Exception");
      if( a == -1 ){
        System.out.println("Relanzando Exception");
        throw e;
      }
      if( a < -1 ){
        System.out.println("Retornando desde Exception");
        return;
      }

    }finally{
      System.out.println("Ejecutando finally");
    }

    System.out.println("Finalizando");

  }
}
