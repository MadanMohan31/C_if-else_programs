#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    write a c program to check whether a number is even or odd

    */

    int number;
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
