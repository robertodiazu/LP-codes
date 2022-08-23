

class A {
    private int a;
    int c; 
    protected int b;
    public int d;

    private void otrometodoa(){
        System.out.println(a);
        System.out.println(b);
    }

}

class B extends A {
    void metodo(){
        System.out.println(a);
        System.out.println(c);
        System.out.println(b);
    }
}


public class Test5 {

    public static void main(String[] args){
        
    }
}

