package array_boundaries;

/**
  Este ejemplo muestra un aumento de confiabilidad del lenguaje Java respecto de C.
  Java a diferencia de C verifica los índices de un arreglo cuando se accede a éste.
  Cualquier acceso fuera de estos índices lanza una excepción la cual luego puede
  ser controlada adecuadamente por el programador.
  Cabe notar que esta verificación, así como la excepción misma disminuyen ligeramente
  el rendimiento
*/
public class ArrayExample {
    public static void main(String[] args) {
        int[] a;
        a = new int[5];
        for(int i=0;i<5;i++){
          a[i] = i;
        }
        // try{
        for(int i=0;i<6;i++){
          System.out.println(a[i]);
        }
        // } catch(Exception e){
        //   System.out.println("Error: se produjo un acceso inválido");
        // }
    }
}
