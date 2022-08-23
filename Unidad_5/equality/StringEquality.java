package equality;

public class StringEquality {

    public static void main(String[] args){
        String a = new String("eso mismo");
        String b = new String("eso mismo");
        System.out.println(a == b); //false
        System.out.println(a.equals(b)); //true
        a = b;
        System.out.println(a == b); //true
        System.out.println(a.equals(b)); //true
    }
    
}
