import java.util.Scanner;

public class P2 {
    public static void main(String[] args) {
        int array[][] = new int[3][3];
        
        int aux = 0;

        Scanner sc = new Scanner(System.in);

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                array[i][j] = sc.nextInt();
            }
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.print(array[i][j] + " ");
            }
            System.out.println("");
            
        }
        System.out.println("");

        
        for(int i=2;i>=0;i--){
            for(int j=2;j>=0;j--){
                System.out.print(array[i][j] + " ");
            }
            System.out.println("");
        }
    
    }


}