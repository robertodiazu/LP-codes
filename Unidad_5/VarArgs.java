public class VarArgs {
    public static void main(String[] args) {
        AlgunaClase a = new AlgunaClase();
        a.metodoVariable( new String[]{"perro","gato","pajaro"} );

        a.metodoVariable( new String[]{"roberto","nicolas","juan","jose","pedro"} );

        a.metodoVariable( "a", "b", "c","d", "e", "f" );

    }
}

class AlgunaClase {
    void metodoVariable(String... args){
        for( String a : args ){
            System.out.println(a);
        }
    }
}
