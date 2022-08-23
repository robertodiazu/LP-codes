

public class Overload {
    public static void main(String[] s) {
        OtraClaseA a = new OtraClaseA();
        a.metodo(5);
        a.metodo(5, "sdasd");
    }
}

class OtraClaseA {
    void metodo(int a){
        System.out.println("metodo con un entero");
    }

    void metodo(int a, String b){
        System.out.println("metodo con un entero y un string");
    }
}
