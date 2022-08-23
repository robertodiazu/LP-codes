
class Main {
    public static void main(String[] s){
        Persona p1 = new Persona("Roberto", "Diaz");
        System.out.println(p1);
    }
}

class Persona {
    public static int nextID = 0;
    private int ID;
    private String Nombre;
    private String Apellido;

    public Persona (String Nombre) {
        this.ID = ++nextID;
        this.Nombre = Nombre;
        this.Apellido = "";
    }

    public Persona( String s, String a){
        this(s);
        Apellido = a;
    }

    public int getID() {
        return ID;
    }
    
    public void setNombre(String Nombre){
        this.Nombre = Nombre;
    }

    public void mostrarNombre(){
        // System.out.println(Nombre + " " + Apellido);
        mostrarNombre(this);
    }

    public void mostrarNombre(Persona p){
        System.out.println(p.Nombre + " " + p.Apellido);
    }

    public static void mostrarNextId(){
        System.out.println("El siguiente id va a ser:" + nextID);
    }


    public String toStringAsdf(){
        return ID + " : " + Nombre + " " + Apellido;
    }
}

class Alumno extends Persona{
    String Nombre;

    public Alumno( String s, String a, String alias){
        super(s,a);
        this.Nombre = alias;
    }

    public void mostrarNombres(){
        super.mostrarNombre();
        System.out.println(this.Nombre);
    }

}
