package clones;

class ClaseA implements Cloneable {
    int a1; 
    int a2;
    ClaseB b;

    public Object clone() throws CloneNotSupportedException {
        ClaseA r = (ClaseA)super.clone();
        r.b = (ClaseB)this.b.clone();
        return r;
    }
}

class ClaseB implements Cloneable {
    int b1;
    int b2;

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

}

public class DeepCopy {
    public static void main(String[] args) throws CloneNotSupportedException {
        ClaseA a = new ClaseA();
        a.a1 = 0;
        a.a2 = 1;
        a.b = new ClaseB();
        a.b.b1 = 2;
        a.b.b2 = 3;

        ClaseA a2 = (ClaseA)a.clone();
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


