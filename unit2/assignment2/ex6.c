#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    int n;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}