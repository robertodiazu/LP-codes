package reflection;

import java.lang.reflect.Method;
import java.lang.reflect.Field;

class Main {
    public static void main(String[] args){
        Alumno a1 = new Alumno("Nicolas");
        Profesor p1 = new Profesor("Roberto");
        Cuadrado c1 = new Cuadrado();

        Object o = p1; // puede apuntar a cualquiera de los tres
        Method[] ms = o.getClass().getMethods(); // obtiene metodos publicos 
        // System.out.println(o.getClass());
        try {

            // usando reflection para ver si clase tiene metodo getNombre
            for( Method m : ms ){
                // System.out.println(m.getName());
                if( m.getName().equals("getNombre") ){
                    String s = (String) m.invoke(o);
                    System.out.println(s);
                }
            }

            Field f = o.getClass().getDeclaredField("nombre"); 
            f.setAccessible(true);
            String nombreprivado = (String) f.get(o);
            System.out.println("Mostrando nombre privado: " + nombreprivado);

        } catch( Exception e ){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        
    }

}

class Alumno {
    private String nombre;
    private int nota;

    public Alumno(String n){
        nombre = n;
    }

    public String getInfo(){
        return nombre + " " + nota;
    }

    public void setNota(int n){
        nota = n;
        System.out.println("La nota de "+nombre+" es: "+nota);
    }

}

class Profesor {
    private String nombre;

    public Profesor(String n){
        nombre = n;
    }

    String getNombre(){
        return nombre;
    }
}

class Cuadrado {
    //... no tienen nombre
}


