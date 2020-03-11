/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.Scanner;

/**
 *
 * @author tiago
 */
public class Media {
    public static void main(String[] args) {
     double notas[] = new double[4];
     double total = 0;
     Scanner sc = new Scanner(System.in);
     
     
     for(int i=0;i<4;i++){
         System.out.print("Digite a " + (i + 1) + " nota:");
        notas[i] = sc.nextDouble();
     }
     
     for(int i=0;i<4;i++){
        total+=notas[i];
     }
     
     System.out.println(total/4);
     
     
    }
    
}
