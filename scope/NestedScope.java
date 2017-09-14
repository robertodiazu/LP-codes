package scope;

public class NestedScope{

  public static void main(String[] args) {
    int x=2;
    {
      int y = x*2;
      System.out.println(x);
      System.out.println(y);
    }
  }

}
