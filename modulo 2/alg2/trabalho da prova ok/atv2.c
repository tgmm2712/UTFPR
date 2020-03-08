#include <stdlib.h>
#include <stdio.h>
#include<math.h>
double calcular(double x1, double x2,double y1,double y2){
    printf("%lf\n",(sqrt(pow((x2+x1),2)+(pow((y2-y1),2)))));
    return 0;
}
int main(){
    double x1,x2,y1,y2;


    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
    calcular(x1,x2,y1,y2);
}