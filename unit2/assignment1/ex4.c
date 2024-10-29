#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float i;
    float j;
    printf("Enter a float: ");
    scanf("%f", &i);
    printf("Enter a second float: ");
    scanf("%f", &j);
    printf("Product %f\n", i * j);
    return 0;
}