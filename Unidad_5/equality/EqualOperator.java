package equality;

public class EqualOperator {
    public static void main(String[] args){
        ClaseA a = new ClaseA();
        a.a1 = 0;
        a.a2 = 1;
        a.b = new ClaseB();
        a.b.b1 = 2;
        a.b.b2 = 3;
        a.c = "Roberto";

        ClaseA a2 = new ClaseA();
        a2.a1 = 0;
        a2.a2 = 1;
        a2.b = new ClaseB();
        a2.b.b1 = 2;
        a2.b.b2 = 3;
        a2.c = "Roberto";

        System.out.printf("a:  .a1=%d .a2=%d .b.b1=%d .b.b2=%d .c=%s%n",a.a1,a.a2,a.b.b1,a.b.b2,a.c);
        System.out.printf("a2: .a1=%d .a2=%d .b.b1=%d .b.b2=%d .c=%s%n",a2.a1,a2.a2,a2.b.b1,a2.b.b2,a.c);
        System.out.println( a == a2 );
        System.out.println( a.equals(a2) );

    }
}



class ClaseA {
    int a1; 
    int a2;
    ClaseB b;
    String c;
}

class ClaseB {
    int b1;
    int b2;
}

