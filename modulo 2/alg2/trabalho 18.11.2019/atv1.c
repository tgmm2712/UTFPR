#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct cord cordenadas;

struct cord
{
  double x;
  double y;
};


int
main ()
{
  cordenadas x[2];

  for (int i = 0; i < 2; i++)
    {
      scanf ("%lf %lf", &x[i].x, &x[i].y);
    }
    
   
        printf("%.2lf\n",(sqrt((pow((x[0].x)-(x[1].x),2)) + (pow((x[0].y)-(x[1].y),2))))   );
    


}