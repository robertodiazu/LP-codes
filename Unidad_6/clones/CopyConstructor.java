package clones;

class ClaseA {
    int a1; 
    int a2;
    ClaseB b;

    public ClaseA(){}
    public ClaseA(ClaseA other){
        this.a1 = other.a1;
        this.a2 = other.a2;
        this.b = new ClaseB( other.b );
    }
}

class ClaseB {
    int b1;
    int b2;

    public ClaseB(){}
    public ClaseB(ClaseB other){
        this.b1 = other.b1;
        this.b2 = other.b2;
    }

}

public class CopyConstructor {
    public static void main(String[] args) {
        ClaseA a = new ClaseA();
        a.a1 = 0;
        a.a2 = 1;
        a.b = new ClaseB();
        a.b.b1 = 2;
        a.b.b2 = 3;

        ClaseA a2 = new ClaseA(a);
        System.out.printf("a:  .a1=%d .a2=%d .b.b1=%d .b.b2=%d %n",a.a1,a.a2,a.b.b1,a.b.b2);
        System.out.printf("a2: .a1=%d .a2=%d .b.b1=%d .b.b2=%d %n",a2.a1,a2.a2,a2.b.b1,a2.b.b2);
        System.out.println();
        a2.a1 = 4;
        a2.a2 = 5; 
        a2.b.b1 = 6;
        a2.b.b2 = 7;

        System.out.printf("a:  .a1=%d .a2=%d .b.b1=%d .b.b2=%d %n",a.a1,a.a2,a.b.b1,a.b.b2);
        System.out.printf("a2: .a1=%d .a2=%d .b.b1=%d .b.b2=%d %n",a2.a1,a2.a2,a2.b.b1,a2.b.b2);
    }
}


