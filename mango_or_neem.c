#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    Isha has a garden of n*n dimensions. Isha wants to plant two types of trees in her garden, they are neem and mango.
    But due to security reasons she cannot plant mango trees in any borders of the garden.
    So she plants only neem tress on the borders and only mango tress in the center of the garden.
    as Isha is weak physically, she has a person who doesn't know anything about the order of plantations.
    so help this guy by accepting tree number and letting him know what tree needs to be planted.

    To make this possible Isha numbers the plants or grid in row wise order.

    sample input:
    5
    3
    sample output:
    neem

    sample input:
    5
    13
    sample output:
    mango

    */


    int row,position;
    scanf("%d",&row);
    scanf("%d",&position);

    if(position>=1 && position<=row)
    {
        printf("neem");
    }
    else if(position%row==1 || position%row==0)
    {
        printf("neem");
    }
    else if(position>row*row-row && position<=row*row)
    {
        printf("neem");
    }
    else
    {
        printf("mango");
    }

    return 0;
}
