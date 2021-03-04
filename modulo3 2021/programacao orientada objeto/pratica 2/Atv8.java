import java.util.Scanner;

public class Atv8 {
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner (System.in);
        int n1 = 0,n2 = 0,n3 = 0, n4 = 0, n = entrada.nextInt();
        
        while(n>=0){
            if ((n>=0) && (n<=25)){
                n1++;
            }
           else if ((n>=26) && (n<=50)){
                n2++;
            }
            else if ((n>=51) && (n<=75)){
                n3++;
            }
            else {
                n4++;
            }
            n = entrada.nextInt();
        }
        System.out.printf("[0,25] = %d\n", n1);
        System.out.printf("[26,50] = %d\n", n2);
        System.out.printf("[51,75] = %d\n", n3);
        System.out.printf("[76,100] = %d\n", n4);
        entrada.close();
    }
}
