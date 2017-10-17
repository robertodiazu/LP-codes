package access;

public class ClaseA {
  public int a = 0;
  int b = 1;
  protected int c = 2;
  private int d = 3;

  public void printVals(ClaseA a){
    System.out.println(a.a);
    System.out.println(a.b);
    System.out.println(a.c);
    System.out.println(a.d);
  }

}
