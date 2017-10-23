
class Objeto {
  int a = 0;
  int b = 1;

  public Objeto(int a, int b){
    this.a = a;
    this.b = b;
    //System.out.println("Objeto(a)");
  }

}

class Testing {

  public static void main(String[] args){
    Objeto o1 = new Objeto(0,1);
    Objeto o2 = new Objeto(0,1);

    System.out.println(o1 == o2);
    System.out.println(o1.equals(o2));

    //o2 = o1; 
    System.out.println(o1.hashCode());
    System.out.println(o2.hashCode());


  }

}
