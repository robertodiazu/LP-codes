package exceptions;

import java.io.*;

class Multiple{

  public static void main(String[] args) throws Exception {

    int a = 2;
    System.out.println("Iniciando programa");
    try{
      if( a == 0 ){
        throw new IOException();
      }else if( a == 1){
        throw new Exception();
      } else if( a == 2 ){
        throw new RuntimeException();
      }

    }catch(IOException e){
      System.out.println("Manejando IOException");
    }catch(RuntimeException e){
      System.out.println("Manejando RuntimeException");
    }

    System.out.println("Finalizando programa");

  }
}
