#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c program to give a grade to a student by accepting his total marks and acquired marks
    90 > A
    80 > B
    70 > C
    60 > D
    <60 Fail

    sample input:
    1000
    900
    sample output:
    A

    */

    float total_marks, gain_marks;
    float percentage;
    scanf("%f %f",&total_marks,&gain_marks);

    percentage = gain_marks/total_marks*100;

    if(percentage>=90)
    {
        printf("A");
    }
    else if(percentage>=80)
    {
        printf("B");
    }
    else if(percentage>=70)
    {
        printf("C");
    }
    else if(percentage>=60)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
