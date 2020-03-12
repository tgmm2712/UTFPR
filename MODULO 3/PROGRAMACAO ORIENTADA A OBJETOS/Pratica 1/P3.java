import java.util.Scanner;

public class P3{
        public static void main(String[] args) {
            
            int qtd = 0;
            Scanner sc = new Scanner(System.in);

            qtd = sc.nextInt();

            int array[] = new int[qtd];
            int array2[] = new int[qtd];

            for(int i=0;i<qtd;i++){
                array[i] = sc.nextInt();
            }      
            for(int i=0;i<qtd;i++){
                array2[i] = sc.nextInt();
            }
        
            for(int i=0;i<qtd;i++){
                System.out.print(array[i] + array2[i] + " ");
            }
            System.out.println();
        
        }

    }