package packageexample;

import packageexample.uno.*;
import packageexample.uno.subuno.*;

public class Main {
  public static void main(String args[]){
    ClaseGlobal cg = new ClaseGlobal();
    cg.uno = "Uno";
    System.out.println(cg.uno);

    packageexample.dos.ClaseGlobal cg2 = new packageexample.dos.ClaseGlobal();
    cg2.dos = "Dos";
    System.out.println(cg2.dos);

    ClaseJuguete cj = new ClaseJuguete();
    cj.juguete = "Algo";
    System.out.println(cj.juguete);
  }
}
