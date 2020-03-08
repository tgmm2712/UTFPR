#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vetc[2][7] = {{1,2,3,4,5},{0,0,0,0,0}};
  int menu(){
        int n;
        printf("______________________________________________________\n");
        printf("__________________Urna_Eletronica_____________________\n");
        printf("______________________________________________________\n");
        printf("Selecione com numero a opção desejada!\n");
        printf("1-Votar\n");
        printf("2-Apuração\n");
        printf("3-Sair\n");
        printf("______________________________________________________\n");
        scanf("%d",&n);
        return(n);
    }
       void voto(){
        int v;
        while (v !=999){
           system("clear");
            for (int i=0; i<5;i++){
                printf("%d-Candidato\n",vetc[0][i]);
            }
            printf("0 Branco\n");
            scanf("%d",&v);
            switch (v)
            {
            case 1:
                vetc[1][0]+=1;
            break;
            case 2:
                vetc[1][1]+=1;
            break;
            case 3:
                vetc[1][2]+=1;
            break;
            case 4:
                vetc[1][3]+=1;
            break;
            case 5:
                vetc[1][4]+=1;
            break;
            case 0:
                vetc[1][5]+=1;            
            break;
            default:
            vetc[1][6]+=1;
                break;
            }
        }
    }
    void apuracao(){
       system("clear");
        for (int i=0;i<5;i++){
            printf("canditado %d = %d\n",vetc[0][i],vetc[1][i]);
        }
        printf("Brancos = %d\n",vetc[1][5]);
        printf("nulos = %d\n",vetc[1][6]);
        
    }    
int  main(){

    int n,v;
    while (n!= 3)
    {
    

    n=menu();       

    switch (n)
    {
    case 1:
       voto();
        
        break;
    
    case 2:
       
       apuracao();
        break;
   
    default:
        printf("invalido\n");
        break;
    }
}