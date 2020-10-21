//operations:
// bit operations << un >>

#include <stdio.h>

int main()
{
    char a = 5;//0000 0101
    char b = 1;
    char c = a << b;//0/000 0101 << 1 ->     0000 101/0(0000 1010)
    printf("%d << %d = %d\n",a,b,c);
/*    
    b = 2;
    c = a << b;//00/00 0101 << 2 ->     0001 01/00(0001 0100)
    printf("%d << %d = %d\n",a,b,c);
    b = 3;
    c = a << b;//000/0 0101 << 3 ->     0010 1/000(0010 1000)
    printf("%d << %d = %d\n",a,b,c);
*/    
    return 0;
}
