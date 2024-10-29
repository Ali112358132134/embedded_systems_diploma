#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c: %d\n", c, (int) c);
    return 0;
}