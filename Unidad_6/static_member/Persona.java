package static_member;

public class Persona {
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

}
