#include<stdio.h>
#include<stdlib.h>
#include<string.h>



char palin(char palavra[]){

    int m,n;
    int n_carac = strlen(palavra);

    for (int j = 0;j<n_carac;j++){

        for(int i=0; i<n_carac;i++){
            if(palavra[i] == ' '){
                palavra[i] = palavra[i+1];
                palavra[i+1] = ' ';
            }
        }
    }

    n_carac = strlen(palavra);

    m= (n_carac-2);

    n = 0;
    
    for(int i = 0;i<n_carac;i++){


        if (palavra[m] == palavra[n]){
            m-=1;
            n+=1;
            

            if ((n>=m)&&(m<=n)){
                return 1;
            }
            

        }
        
    }

    return 0;
    

}



int main(){

    char str[300];
    fgets(str, 300, stdin);

    printf("%d\n", palin(str));
}


