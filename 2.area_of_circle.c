#include<stdio.h>
void main()
{
    float radius,area;

    printf("Enter the Radius of Circle\n");
    scanf("%f", &radius);

    area = 3.14 * radius *radius;
    printf("Area of Circle %f\n",area);
}

