package system_properties;

public class Properties {

  public static void main(String[] args){
    String nombre;
    nombre = System.getProperty("user.name");
    System.out.println(nombre);
  }
  
}
