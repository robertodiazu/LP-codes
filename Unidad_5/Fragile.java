
class Fragile {
    public static void main(String[] args){
        Super s = new Sub();
        s.inc1();
        s.inc2();
        s.show();
    }
}

class Super {

    private int counter = 0;

    void inc1() {
        counter++;
    }

    void inc2() {
        counter++;
    }

    void show() {
        System.out.println(counter);
    }

}

class Sub extends Super {

    void inc2() {
        inc1();
    }

}
