#include <stdio.h>
#include <string.h>

int main()
{
    int FirstNum, SecondNum, ThirdNum;
    char SortOrder[10];
    int order1,order2,order3;
    printf("Enter the Three Numbers: ");
    scanf("%d%d%d", &FirstNum, &SecondNum, &ThirdNum);
    printf("Enter the sort order (asc/desc): ");
    scanf("%s",SortOrder);
    printf("Check1: %d,%d,%d \n",FirstNum,SecondNum,ThirdNum);
    if(FirstNum > SecondNum)
    {
        printf("First if");
        if(FirstNum > ThirdNum)
        {
            order3 = FirstNum;
            if(SecondNum > ThirdNum)
            {
                order2 = SecondNum;
                order1 = ThirdNum;   
            }
            else
            {
                order1 = SecondNum;
                order2 = ThirdNum;
            }
        }
        else
        {
            printf("First else");
            order3 = ThirdNum;
            order2 = FirstNum;
            order1 = SecondNum;
        }
    }
    else
    {
        if(SecondNum > ThirdNum)
        {
            printf("else part");
            order3 = SecondNum;
            if(FirstNum > ThirdNum)
            {
                printf("inner if");
                order2 = FirstNum;
                order1 = ThirdNum;
            }
            else
            {
                printf("inner else");
                order1 = FirstNum;
                order2 = ThirdNum;
            }
        }
        else
        {
            order3 = ThirdNum;
            order2 = SecondNum;
            order1 = FirstNum;
        }
    }
                
    if(strcmp(SortOrder,"asc")==0)
    {
        printf("Ascending Order : %d, %d, %d", order1, order2, order3);    
    }
    else
    {
        printf("Descending Order : %d, %d, %d", order3, order2, order1);    
    }
    
    return 0;
}
