import java.util.Scanner;

public class Atv1 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        double n1,n2,n3,n4;

        n1 = entrada.nextDouble();
        n2 = entrada.nextDouble();
        n3 = entrada.nextDouble();
        n4 = entrada.nextDouble();

        System.out.printf("%.1f\n", (n1 + n2 + n3 + n4)/4);

        
        entrada.close();
    }
}