import java.util.Scanner;

public class Atv1 {
        public static void main(String[] args) {

            Scanner entrada = new Scanner(System.in);

            double n1,n2,n3,n4,media;

            n1 = entrada.nextDouble();
            n2 = entrada.nextDouble();
            n3 = entrada.nextDouble();
            n4 = entrada.nextDouble();
          
            media = (n1 + n2 + n3 + n4) / 4;

            System.out.printf("%.2f" + "\n",media);

            entrada.close();
        }



}