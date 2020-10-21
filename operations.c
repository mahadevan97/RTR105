//opertions:
//operation results are always some data
//+,-,*,/,%
//a + b

#include <stdio.h>

int main()
{
    char a = 5;
    char b = 10;
    char c = a + b;
//+
    printf("a+b=%d\n",a+b);
    printf("%d + %d = %d\n",a,b,c);
// /    
    char d = a / b; //char / char -> char -> char 
    printf("%d / %d = %d\n",a,b,d); // 5/10 = 0.5
    float dd = a / b; //char / char -> char -> float 
    printf("%d / %d = %d\n",a,b,dd); // 5/10 = 0.5
    printf("%d / %d = %f\n",a,b,dd); // 5/10 = 0.5
    float aa = 5;
    d = aa / b; // float / char -> float -> float
    printf("%f / %d = %.1f\n",aa,b,dd); // 5/10 = 0.5
    d = aa / b; // float / char -> float -> float
    dd = d;
    printf("%f / %d = %f\n",aa,b,dd);
    printf("(float)%d / %d = %f\n",a,b, (float)a/ b);
    
// %
    char e = a % b;
    //printf("%d \% %d = %d\n",a,b,e);
    printf("%d %c %d = %d\n",a,37,b,e);
    printf("%d %c %d = %d\n",a,0x25,b,e);
    printf("%d %c %d = %d\n",a,'%',b,e);
    printf("%d %c %d = %d\n",999,'%',990,999%990);//9
    printf("%d %c %d = %d\n",999,'%',1990,999%1990);//999
    return 0;
}
