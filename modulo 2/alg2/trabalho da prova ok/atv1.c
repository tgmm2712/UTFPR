#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {
    double x,y,z,aux; 
    scanf("%lf %lf %lf",&x,&y,&z);
        for(int i=0;i<2;i++){
            if (x<y){
                aux=x;
                x=y;
                y=aux;
            }
            if (y<z){
                aux=y;
                y=z;
                z=aux;
            }
        }
    printf("%lf\n%lf\n%lf\n", pow(x,2), pow(y,2),pow(z,2));

    if ((x) > (y)+(z)){ //condicao A
        printf("Triangulo Nao formado\n");
    }
    else if (pow(x,2) == ((pow(y,2))+(pow(z,2)))){ //condicao B
        printf("Triangulo retangulo\n");
    }

    else if (pow(x,2) > (pow(y,2)+pow(z,2))){ //condicao C
        printf("Triangulo obsangulo\n");
    }
        
    else if (pow(x,2) < (pow(y,2)+pow(z,2))){ //condicao d
        printf("Triangulo actangulo \n");
    }

    else if ((x==y)&&(y==z)){ //condicao e
        printf("Triangulo equilatero\n");
    }

    else if ((y)==(z)){ //condicao f
        printf("Triangulo isoceles\n");
    }
    else
    {
       printf("Triangulo escaleno\n");
    }


}
    


