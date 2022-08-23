package singleton;

public class SingleTonClass {

    private static SingleTonClass obj = null;

    private SingleTonClass() {
        /* Constructor privado, no se puede instanciar directamente */
    }

    public static SingleTonClass objectCreationMethod() {
        /* Este metodo crea el objeto y luego evitara que se cree otro objeto */
        if (obj == null) {
            obj = new SingleTonClass();
        }
        return obj;
    }

    public void display() {
        System.out.println("Singleton class Example");
    }

    public static void main(String args[]) {
        SingleTonClass myobject = SingleTonClass.objectCreationMethod();
        myobject.display();
    }
}