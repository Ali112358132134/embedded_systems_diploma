#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a;
    float b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    float tmp = a;
    a = b + a;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
    return 0;
}