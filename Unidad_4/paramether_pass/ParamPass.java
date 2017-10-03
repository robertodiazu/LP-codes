package paramether_pass;

class Persona{
  public String nombre;
}

public class ParamPass{

  static int funcion(int a){
    a += 1;
    return a;
  }

  static Persona funcionPersona(Persona a){
    a = new Persona();
    a.nombre = "Esteban";
    return a;
  }

  public static void main(String[] args) {
    int a = 0, b;
    b = funcion(a);
    System.out.println(a);
    System.out.println(b);

    Persona c = new Persona(), d;
    c.nombre = "Roberto";

    d = funcionPersona(c);
    System.out.println(c.nombre);
    System.out.println(d.nombre);

  }

}
