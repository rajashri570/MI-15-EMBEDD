#include<stdio.h>
int main()
{
    float radius, area;

    printf("Enter the Radius of circle : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius ;
    printf("Area of Circle = %f\n", area);

    return 0;

}