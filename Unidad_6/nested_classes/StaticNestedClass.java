//package nested_classes;

class ClaseExterna  {
   static int i = 0;

   static class ClaseInterna {

      public void print() {
         System.out.println("Esta es la clase interna " + i++);
      }

   }

}

public class Main {

   public static void main(String args[]) {
      new ClaseExterna.ClaseInterna().print();
      new ClaseExterna.ClaseInterna().print();
      new ClaseExterna.ClaseInterna().print();
   }
}
