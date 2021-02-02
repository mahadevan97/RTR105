#include <stdio.h>

#include <stdio.h>
 
int main()
{
  char CharNum;
  int flag, IntNum, temp ;

  printf("Enter the decimal number : ");
  scanf("%c", &CharNum);

  IntNum = CharNum - '0';
  
  printf("Equivalent binary number is : ");
 
  for (flag = 31; flag >= 0; flag--)
  {
    temp = IntNum >> flag;
 
    if (temp & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}