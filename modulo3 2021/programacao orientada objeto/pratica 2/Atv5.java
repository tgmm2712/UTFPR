import java.util.Scanner;

public class Atv5 {
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner (System.in);
        int n = entrada.nextInt();
        
        while(n>0){

            System.out.printf("%d ", n);
            n--;
        }

        System.out.printf("\n");
        entrada.close();
    }
}
