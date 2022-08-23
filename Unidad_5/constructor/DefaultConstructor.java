package constructor;

class DefaultConstructor {

  public static void main(String[] args){
    // Persona p = new Persona();  //<- error: constructor Persona in class Persona cannot be applied to given types;
    Ser p = new Persona("Roberto");
    Ser a = new Animal(); 

    ((Animal)a).setNombre("Perro");
    System.out.println(p.getNombre());
    System.out.println(a.getNombre());
  }
}

abstract class Ser {
  int x, y;

  public Ser(){
    x = 0;
    y = 1;
    System.out.println("Creando un Ser");
  }

  abstract String getNombre();
}

final class Persona extends Ser {
  private String nombre;

  public Persona(String s){
    System.out.println("Creando Persona con nombre " + s);
    nombre = s;
  }

  public String getNombre(){
    return nombre;
  }
}

class Animal extends Ser{
  private String nombre;

  public Animal(){
    System.out.println("Creando Animal");
  }

  public void setNombre(String nombre){
    this.nombre = nombre;
  }

  public String getNombre(){
    return nombre;
  }
}





