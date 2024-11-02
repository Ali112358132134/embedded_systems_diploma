#include <stdio.h>
#include <string.h>
int main(int argc, char *argv){
    printf("Enter a string: ");
    char str[256];
    fgets(str, 256,stdin);
    printf("Enter a character to find frequency: ");
    char c;
    scanf("%c", &c);
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c)
            count++;
    }
    printf("Frequency of %c = %d\n", c, count);
    return 0;
}