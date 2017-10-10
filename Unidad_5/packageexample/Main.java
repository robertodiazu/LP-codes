package packageexample;

public class Main {
  public static void main(String args[]){
    packageexample.uno.ClaseGlobal cg = new packageexample.uno.ClaseGlobal();
    cg.uno = "Uno";
    System.out.println(cg.uno);

    packageexample.dos.ClaseGlobal cg2 = new packageexample.dos.ClaseGlobal();
    cg2.dos = "Dos";
    System.out.println(cg2.dos);
  }
}
