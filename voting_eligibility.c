#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    write a C program to check wheather the person is eligible for voting or not

    sample input :
    age : 20

    sample output :
    eligible

    sample input :
    age : 17

    sample output :
    not eligible
    */

    int age;
    printf("age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("eligible");
    }
    else if(age<0)
    {
        printf("invalid input");
    }
    else
    {
        printf("not eligible");
    }

    return 0;

}
