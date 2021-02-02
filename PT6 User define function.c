#include <stdio.h>
#include <string.h>
 
void add_without_args_without_return();
void add_with_args_without_return(int,int);
int add_without_args_with_return();
int add_with_args_with_return(int,int);

int main()
{
    int a=5,b=10,res1=0,res2=0;
    add_without_args_without_return();
    add_with_args_without_return(a,b);
    res1 = add_without_args_with_return();
    res2 = add_with_args_with_return(a,b);
    printf("added 5 & 10 without args with return. Result = %d \n",res1);
    printf("added 5 & 10 with args with return. Result = %d \n",res2);
    return 0;
}

void add_without_args_without_return()
{
    printf("added 5 & 10 without args and without return. Result = %d \n",5+10);
}
void add_with_args_without_return(int x,int y)
{
    printf("added 5 & 10 with args and without return. Result = %d \n",x+y);
}
int add_without_args_with_return()
{
    return 5+10;
}
int add_with_args_with_return(int x,int y)
{
    return x+y;
}