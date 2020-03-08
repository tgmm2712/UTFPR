#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    double n1,n2,t;
    char c;
    int h;


    scanf("%lf %lf %c", &n1, &n2, &c);
    if (c=='a' || c=='A'){
        h=1;
    }
    else if(c=='d' || c=='D'){
        h=2;
    }
    else if(c=='m' || c=='M'){
        h=3;
    }
    else if(c=='s' || c=='S'){
        h=4;
    }
    else{
    printf("operacao invalida, realizando a soma\n");
        h=1;
    }
    switch (h)
    {
    case 1:
        t = n1 + n2;
        printf("Resultado da soma:%lf\n",t);
        break;
    case 2:
        if ( n2 != 0){
        t=n1/n2;
        printf("Resultado da divisao:%lf\n",t);
        break;
        }
        else{
        printf("nao pode dividir por zero\n");
        break;
        }
    case 3:
        t=n1*n2;
        printf("Resultado da mutiplicacao:%lf\n",t);
        break;
    case 4:
        t=n1-n2;
        printf("Resultado da subtracao:%lf\n",t);
        break;
    }
}

