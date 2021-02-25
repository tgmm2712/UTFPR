import java.util.Scanner;

public class Atv4 {
    
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);

        int n = entrada.nextInt();
        int m = entrada.nextInt();

        System.out.println("soma = " + (n + m));
        System.out.println("subtracao = "+ (n - m));

        entrada.close();




    }


}
