#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if(c == 'i' || c == 'a' || c == 'o' || c == 'u' || c == 'e' || c == 'A' || c == 'O' || c == 'E' || c == 'U' || c == 'I'){
        printf("%c is vowel\n",c);
    }else{
        printf("%c is consonant\n", c);
    }
    return 0;
}