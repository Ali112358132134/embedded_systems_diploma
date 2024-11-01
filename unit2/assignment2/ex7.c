#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Error!!! Factorial of negative number doesn't exist\n");
        return 0;
    }
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial = %d\n", factorial);
    return 0;
}