// loop(s)
// construction of loop while
// while(expression){actions}
//while(expression) action;
// while(expression){actions;}





#include <stdio.h>

int main()
{
    double b = 3.5e-1; //3.5*10^*(-1)
    
    printf("3.5e-1 -> f format %.2f and e format %e\n",3.5e-1,3.5e-1);
    printf("0.35e0 -> f format %.30f and e format %e\n",0.35e0,0.35e0);
    printf("35.0e-2 -> f format %.30f and e format %e\n",35.0e-2,35.0e-2);
    
    while(b<=(1.0 + step/2))
    {
      printf("b = %.20f\n",b);
       b = b + step;
       while(a<=20)
    {
        printf("%d ",a);
        a += 1;
        a++;
    }

      printf("\n");
    }
    return 0;
}


