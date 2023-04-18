#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c program to find greatest number among given two number

    */

    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("num1 %d is greater",num1);
    }
    else
    {
        printf("num2 %d is greater",num2);
    }
    return 0;
}
