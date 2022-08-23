
import java.util.Random;

class HelloWorldApp {

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.

        int[] a = {0,2,4,6,8,10,12,14,16,18};
        Random rand = new Random();
        for(int i=0;i<100;i++){
            System.out.println( a [ rand.nextInt(0,a.length) ] );
        }
        
        // int cont = 0;
        // for(int i=0;i<100;i++){
        //     if( <= 0.4 ){
        //         cont++;
        //     }
        // }
        // System.out.println(cont);
    }

}