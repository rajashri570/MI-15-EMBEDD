// 1. Write a C program to convert specified days into years, weeks and days.
#include <stdio.h>
int main()
{
    int d, y, w;        //here d stand for days and y stand for years and w stand for weeks

    d = 1329;

    y = d / 365;        // 3.6410
    w = (d % 365) / 7;
    d = d - ((y * 365) + (w * 7));

    printf("Years : %d\n", y);
    printf("Weeks : %d\n", w);
    printf("Days : %d\n", d);
}