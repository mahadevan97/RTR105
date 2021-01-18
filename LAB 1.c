  
#include <stdio.h>
#include <conio.h>
#include <math.h>

int facto(int n)
{

int i = 1, faco = 1;
for (i = 1; i <= n; i++)
faco = faco * i;

return faco;
}


double log_e(double x, int n)
{

double sum = 0;
int i = 0;

for (i = 0; i < n; i++) {

sum = sum + pow(x, 2 * i+1) / facto(2 * i+1);
}

return sum;
}


int main()
{
double x;
printf("enter value to calculate sinh");
scanf("%lf",&x);
int k = 10;
    printf("                         500                             \n");
    printf("                       _ __                         \n");
    printf("                       \\                  2*k+1  \n");
    printf("                        \\               (x)  \n");
    printf("         sinh(x) ~=                   __     \n");
    printf("                        //                                 \n");
    printf("                       //__           (2*k+1)!            \n");
    printf("                          k=0                             \n");
   
printf("sinh(%lf)~ %lf  ", x,log_e(x, k));

return 0;
}