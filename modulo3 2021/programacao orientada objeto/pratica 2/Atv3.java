import java.util.Scanner;

public class Atv3 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner (System.in);

        int n1 = entrada.nextInt();
        int n2 = entrada.nextInt();
        int n3 = entrada.nextInt();
        
        if (n1 > n2){
            System.out.println(n1);
        } 
        else if (n2 > n3){
            System.out.println(n2);
        }
        else{
            System.out.println(n3);
        }
        entrada.close();

    }    
}
