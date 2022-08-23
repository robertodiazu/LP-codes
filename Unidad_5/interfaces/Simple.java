package interfaces;

import java.util.*;

class Simple{

  public static void main(String[] args){

    List<Interfaz> a = new ArrayList<Interfaz>();
    a.add(new ObjetoA());
    a.add(new ObjetoDistinto());
    for(int i=0;i<a.size();i++){
      a.get(i).unMetodo();
    }
  
  }
}


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
