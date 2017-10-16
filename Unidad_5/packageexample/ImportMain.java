package packageexample;

import packageexample.uno.*;

public class ImportMain {
  public static void main(String args[]){
    ClaseGlobal cg = new ClaseGlobal();
    cg.uno = "Uno";
    System.out.println(cg.uno);

    packageexample.dos.ClaseGlobal cg2 = new packageexample.dos.ClaseGlobal();
    cg2.dos = "Dos";
    System.out.println(cg2.dos);
  }
}
