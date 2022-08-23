package nested_classes;

public class NestedClass {

   public static void main(String args[]) {

      ClaseExterna externa = new ClaseExterna();
      ClaseExterna externa2 = new ClaseExterna();
      externa.printExt();
      externa2.printExt();

      externa.mostrarInterna();
      externa.mostrarInterna();
      externa.mostrarInterna();

      ClaseExterna.ClaseInterna interna = externa.new ClaseInterna();
      ClaseExterna.ClaseInterna interna2 = externa.new ClaseInterna();
      interna.print();
      interna.print();
      interna.print();

      interna2.print();

      System.out.println("interna.a: "+ interna.a + " interna2.a:" + interna2.a );

      externa.printExt();

      externa2.mostrarInterna();
      externa2.printExt();

   }
}

class ClaseExterna {
   int i = 0;

   public void printExt() {
      System.out.println("El valor de i: " + i);
   }

   public class ClaseInterna {
      public int a = 0;
      // public static int b = 10;

      public void metodo1(){ }

      ClaseInterna() {
         a = i;
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
