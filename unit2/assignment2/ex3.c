#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float f1;
    float f2;
    float f3;
    printf("Enter an three numbers: ");
    scanf("%f", &f1);
    scanf("%f", &f2);
    scanf("%f", &f3);
    if(f1 > f2 && f1 > f3){
        printf("Largest number = %f\n", f1);
    }
    else if(f1 < f2 && f3 < f2){
        printf("Largest number = %f\n", f2);
    }
    else{
        printf("Largest number = %f\n", f3);
    }
    return 0;
}