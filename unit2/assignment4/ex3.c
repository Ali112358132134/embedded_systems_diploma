#include <stdio.h>
#include <string.h>

void reverse_sentence(char str[]){
    char tmp;
    int len = strlen(str) - 2;
    for(int i = 0; i < len - i; i++){ //The condition is i < len - i because we want to swap element accross the middle character. So if we have das, it becomes sad. We want to swap accross the letter a
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
    }
}

int main(int argc, char *argv){
    char buff[256];
    printf("Enter a sentence: ");
    fgets(buff, 256, stdin);
    reverse_sentence(buff);
    printf("%s\n", buff);
}