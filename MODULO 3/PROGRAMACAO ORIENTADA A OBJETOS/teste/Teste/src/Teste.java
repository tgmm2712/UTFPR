import java.util.Scanner

public class Teste {
    
    public static void main(String[] args) {

  
        Scanner entr = new Scanner(System.in);

        int num1 = entr.nextInt();
        double  num2 = entr.nextDouble();
        String nome = entr.next();

        System.out.println(num1);
        System.out.println(num2);
        System.out.println(nome);

        entr.close();
    }

}