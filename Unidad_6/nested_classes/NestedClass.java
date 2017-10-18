package nested_classes;

class ClaseExterna  {
   int i = 0;

   public class ClaseInterna {
     ClaseInterna(){
       i++;
     }

      public void print() {
         System.out.println("Esta es la clase interna " + i);
      }
   }

   void mostrarInterna() {
      ClaseInterna interna = new ClaseInterna();
      interna.print();
   }
}

public class Main {

   public static void main(String args[]) {

      ClaseExterna externa = new ClaseExterna();

      externa.mostrarInterna();
      externa.mostrarInterna();
      externa.mostrarInterna();

      ClaseExterna.ClaseInterna interna = externa.new ClaseInterna();
      interna.print();
      interna.print();
      interna.print();

   }
}
