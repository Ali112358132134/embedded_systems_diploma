#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Enter a string: ");
    char str[256];
    fgets(str, 256, stdin);
    int len = 0;
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        len++;
    }
    printf("Length of string: %d\n", len);
}