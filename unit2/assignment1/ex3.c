#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    int j;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a second integer: ");
    scanf("%d", &j);
    printf("Sum %d\n", i + j);
    return 0;
}