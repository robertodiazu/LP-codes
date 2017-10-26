package exceptions;

import java.io.*;

class Multiple{

  public static void main(String[] args){

    int a = 1;

    try{
      if( a == 0 ){
        throw new IOException();
      }else{
        throw new Exception();
      }

    }catch(IOException e){
      System.out.println("Manejando IOException");
    }catch(Exception e){
      System.out.println("Manejando Exception");
    }

  }
}
