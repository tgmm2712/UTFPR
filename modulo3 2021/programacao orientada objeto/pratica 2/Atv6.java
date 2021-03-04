import java.util.Scanner;

public class Atv6 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner (System.in);
        int soma = 0, qtd = 1, x = entrada.nextInt();

            while( x >= 0){
                qtd++;
                soma = soma + x;
                x = entrada.nextInt();
            }
        System.out.printf("Quantidade = %d\n", qtd);
        System.out.printf("Soma = %d\n", soma);
        entrada.close();
    }    
}
