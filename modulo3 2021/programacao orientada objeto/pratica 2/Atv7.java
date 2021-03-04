import java.util.Scanner;
public class Atv7 {
	public static void main(String[] args) {
        Scanner entrada = new Scanner (System.in);
        int x = entrada.nextInt();

        switch(x){
            case 1:
                System.out.print("1 - Caixa\n"); 
            break;
            case 2:
                System.out.print("2 - Financiamento\n");
            break;
            case 3:
            System.out.print("3 - Empréstimo\n");
            break;
            case 4:
            System.out.print("4 - Produtor Rural\n");
            break;
            case 5:
                System.out.print("5 - Abertura de Contas\n"); 
            break;
            case 6:
                System.out.print("6 - Falar com o Gerente\n");
            break;
            default:
               System.out.printf("%d - Opção Inexistente\n", x);
        }
    } 
    entrada.close();  
}
