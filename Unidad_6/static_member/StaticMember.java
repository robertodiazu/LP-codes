package static_member;

class Persona {
  private static int nextId = 0;
  private int Id;
  private String nombre;

  public Persona(String s){
    Id = ++nextId;
    nombre = s;
  }

  public int getId(){
    return Id;
  }

  public String getNombre(){
    return nombre;
  }

  public static int getNextId(){
    return nextId;
  }


}

public class StaticMember {

  public static void main(String[] args){
    Persona p1 = new Persona("Roberto");
    Persona p2 = new Persona("Esteban");

    System.out.println("Id:"+p1.getId()+" Nombre:"+p1.getNombre());
    System.out.println("Id:"+p2.getId()+" Nombre:"+p2.getNombre());

    System.out.println( Persona.getNextId() );

  }

}
