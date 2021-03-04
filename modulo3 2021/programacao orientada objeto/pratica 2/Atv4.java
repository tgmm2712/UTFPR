import java.util.Scanner;

public class Atv4 {
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner (System.in);
        int n = entrada.nextInt();
        for(int i = 1;i<=n;i++){
            System.out.printf("%d ", i);
        }

        System.out.printf("\n");
        entrada.close();
    }
}
