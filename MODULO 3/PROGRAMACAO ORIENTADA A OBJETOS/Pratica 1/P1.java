import java.util.Scanner;

public class P1{
    public static void main(String[] args) {
        int qtd = 0;
        double total = 0.0;
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Digite a quantidade de notas:");

        qtd = sc.nextInt();

        double notas[] = new double[qtd];

        for(int i =0; i<qtd;i++){
            System.out.print("Digite a " + (i + 1) + " nota:");
            notas[i] = sc.nextDouble();
        }

        for(int i =0; i<qtd;i++){
            total += notas[i];
        }

        System.out.println("Media:" + (total/qtd));



    }





}