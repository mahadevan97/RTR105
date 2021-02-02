#include <stdio.h>
#include <string.h>
 
int main()
{
  int i,j,choice;
  long l,m;
  char k;
  char dt[5];
  printf("Enter the desired data type (int/long/char) : ");
  scanf("%s",dt);
  if(strcmp(dt,"int")==0)
  {
      choice = 2;
  }
  else if (strcmp(dt,"long")==0)
  {
      choice = 3;
  }
  else
  {
      choice = 1;
  }
  switch(choice)
  {
    case 1:
        printf("Invalid datatype!");
        break;
    case 2:
        printf("Enter the number : ");
        scanf("%d",&i);
        for(j = i-1;j > 1;j--)
        {
            i = i * j;
        }
        printf("\n Factorial is %d",i);
        break;
    case 3:
        printf("Enter the number : ");
        scanf("%ld",&l);
        for(m = l-1;m > 1;m--)
        {
            l = l * m;
        }
        printf("\n Factorial is %ld",l);
        break;
    default:
        printf("Invalid datatype!");
        break;
  }
  return 0;
}