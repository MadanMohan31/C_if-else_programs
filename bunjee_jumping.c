#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*write a C program to check whether a person is eligible for bunjee jumping.

    age > 12
    weight > 45 eligible
    weight >100 eligible with extra ropes

    */
    int age;
    float weight;
    printf("age : ");
    scanf("%d",&age);
    printf("weight : ");
    scanf("%f",&weight);

    if (age>0 && weight>0)
    {
        if(age>=12 && weight>=45.0 && weight<100.0)
        {
            printf("eligible");
        }
        else if (age>=12 && weight>=100.0)
        {
            printf("eligible with extra rope");
        }
        else
        {
            if(age<12 && weight<45)
            {
                printf("not eligible because of age and weight");
            }
            else
            {
                if(age<12)
                {
                    printf("not eligible due to age");
                }
                else
                {
                    printf("not eligible due to weight");
                }
            }
        }
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}
