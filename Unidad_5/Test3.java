public class Test3 {
    public static void main(String[] s) {
        SubClase a = new SubClase();
    }
}

class SuperClase {
    protected int x = 0, y = 1;

    public SuperClase(){
        System.out.format("Sup() x:%d y:%d\n", x, y);
    }

    public SuperClase(int i) {
        System.out.format("Sup() x:%d y:%d\n", x, y);
        y = i;
        x = y;
        System.out.format("Sup() x:%d y:%d\n", x, y);
    }

    public SuperClase(SuperClase a){
        this.x = a.x;
        this.y = a.y;
    }

}

class SubClase extends SuperClase {
    protected int z = 2;

    public SubClase() {
        System.out.format("Sub() x:%d y:%d z:%d\n", x, y, z);
        y = z;
        System.out.format("Sub() x:%d y:%d z:%d\n", x, y, z);
    }
}