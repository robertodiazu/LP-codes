public class Stack {
    protected int maximo;
    protected int top = -1;
    protected String[] buffer;

    public Stack(int i) {
        maximo = i;
        buffer = new String[i];
    }

    public int size() {
        return top + 1;
    }

    public void push(String nuevo) {
        if (top < maximo - 1)
            buffer[++top] = nuevo;
        else
            System.err.println("Oops, stack lleno");
    }

    public String pop() {
        String respuesta = "";
        if (top >= 0)
            respuesta = buffer[top--];
        else
            System.err.println("Oops, stack vacio");
        return respuesta;
    }

    public static void main(String[] args) {
        StackPrint stp = new StackPrint(5);
        stp.push("Hola-print");
        stp.push(args[0]);
        stp.print();
        System.out.println(stp.size());
    }
}

/* Definicion */
class StackPrint extends Stack {
    int maximo = 20;
    public StackPrint(int i) {
        super(i);
    }

    public int size(){
        return top + 5;
    }

    public void print() {
        System.out.println( maximo );
        System.out.println( super.maximo );
        System.out.println("size: " + (top + 1));
        for (int i = 0; i < top + 1; i++) {
            System.out.println(i + ": " + buffer[i]);
        }
    }
}