#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float f1;
    printf("Enter a number: ");
    scanf("%f", &f1);
    if(f1 > 0){
        printf("%f is positive\n", f1);
    }
    else if(f1 < 0){
        printf("%f is negative\n", f1);
    }
    else{
        printf("You entered zero\n");
    }
    return 0;
}