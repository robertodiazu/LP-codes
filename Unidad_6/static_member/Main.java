package static_member;

public class Main {

  public static void main(String[] args){
    Persona p1 = new Persona("Roberto");
    Persona p2 = new Persona("Esteban");

    System.out.println("Id:"+p1.getId()+" Nombre:"+p1.getNombre());
    System.out.println("Id:"+p2.getId()+" Nombre:"+p2.getNombre());

  }

}
