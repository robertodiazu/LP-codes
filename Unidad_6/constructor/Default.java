package constructor;

class Persona {
  private String nombre;

  public Persona(String s){
    nombre = s;
  }

  public String getNombre(){
    return nombre;
  }
}

class Animal {
  public String nombre;

  public void setNombre(String nombre){
    this.nombre = nombre;
  }

  public String getNombre(){
    return nombre;
  }
}

class Main {

  public static void main(String[] args){
    // Persona p = new Persona();  //<- error: constructor Persona in class Persona cannot be applied to given types;
    Persona p = new Persona("Roberto");
    Animal a = new Animal(); a.setNombre("Perro");
    System.out.println(p.getNombre());
    System.out.println(a.getNombre());
  }
}
