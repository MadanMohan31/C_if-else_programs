#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c program to find greatest number among given three number

    */

    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("num1 %d is greater",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("num2 %d is greater",num2);
    }
    else
    {
        printf("num3 %d is greater",num3);
    }


    return 0;
}
