package comments_example;

/**
* <h1>Comments</h1>
* El programa Comments muestra como usar comentarios. Muestra por pantalla
* "Hola mundo"
*
* @author Roberto Diaz
* @version 1.0
*/

public class Comments {

  /**
  * Imprime un string por pantalla
  * @param  toPrint string a imprimir por pantalla
  */
  public static void printString(String toPrint){
    System.out.println(toPrint);
  }

  /**
  * Imprime "Hola mundo" por pantalla
  */
  public static void printHolaMundo(){
    printString("Hola Mundo");
  }

  public static void main(String[] args) {
    printHolaMundo();
  }
}
