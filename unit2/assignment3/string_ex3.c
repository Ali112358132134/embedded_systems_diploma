#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Enter the string: ");
    char str[256];
    fgets(str, 256, stdin);
    int len = strlen(str);
    char rev_str[len];
    for(int i = 0; i < len && str[i] != '\n'; i++){
        rev_str[len - 2 - i] = str[i]; // Minus 2 because we have zero indexing, so the last index should be (len - 1). We also need to consider that the last byte should be '\0'
    }
    rev_str[len - 1] = '\0';
    printf("Reverse string is: %s\n", rev_str);
}