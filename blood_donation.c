#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* write a C program to check whether a person is able to donate blood.

    criteria:
    age > 18
    weight > 50

    sample input:
    age : 20
    weight : 63.8
    sample output:
    eligible

    sample input:
    age : 17
    weight : 55.8
    sample output:
    eligible

    */

    int age;
    float weight;
    printf("age : ");
    scanf("%d",&age);
    printf("weight : ");
    scanf("%f",&weight);

    if(age>18 && weight>50.0)
    {
        printf("eligible");
    }
    else if(age<0 || weight<0)
    {
        printf("invalid input");
    }
    else
    {
        printf("not eligible");
    }

    return 0;
}
