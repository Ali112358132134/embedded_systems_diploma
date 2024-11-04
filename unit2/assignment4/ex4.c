#include <stdio.h>

int power(int b, int p){
    if(p <= 0)
        return 1;
    return b*power(b, p - 1);
}

int main(int argc, char *argv[]){
    int b, p;
    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter power number(positive integer): ");
    scanf("%d", &p);
    int res = power(b, p);
    printf("%d^%d = %d\n", b ,p ,res);
}