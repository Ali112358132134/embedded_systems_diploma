#include <stdio.h>

int factorial_rec(int i){
    if (i <= 1)
        return 1;
    else
        return i*factorial_rec(i-1);
}

int main(int argc, char *argv){
    printf("Enter a positive integer: ");
    int i;
    scanf("%d", &i);
    int factroial = factorial_rec(i);
    printf("Factorial of %d = %d\n", i, factroial);
}