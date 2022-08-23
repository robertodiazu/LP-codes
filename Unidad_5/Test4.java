

public class Test4 {
    public static void main(String[] s) {
        ClaseA a = new ClaseA();
        ClaseB b = new ClaseB();
        int denmain = 0;

        a.metodo( denmain, b );

        System.out.format("en main(): %d %d %d\n", b.a, b.b, denmain );
    }
}

class ClaseA {
    void metodo(int c, ClaseB b){
        c = 10;
        b.a = 5;
        b = new ClaseB();
        b.b = 10;
        System.out.format("en metodo(): %d %d %d\n", b.a, b.b, c );
    }
}

class ClaseB {
    int a = 1; 
    int b = 2;
}

