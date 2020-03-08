#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void funt (char *str, int *vet){

vet[0]=0;
vet[1]=0;
vet[2]=0;
vet[3]=0;
vet[4]=0;
    
    for (int i=0; i<strlen(str)-1;i++){
        switch (str[i])
        {
        case 'a': case 'A':
            vet[0]++;
            break;
        case 'e': case 'E':
            vet[1]++;
            break;
            case 'i': case 'I':
            vet[2]++;
            break;
            case 'o': case 'O':
            vet[3]++;
            break;
            case 'u': case 'U':
            vet[4]++;
            break;
        default:
            break;
        }



    }



}
int main(){
char str[100];
int vet[5];


funt(str,vet);


}