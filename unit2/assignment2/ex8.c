#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float f1;
    float f2;
    float result;
    char op;
    printf("Enter operator either + or - or * or / : ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f", &f1);
    scanf("%f", &f2);
    switch (op)
    {
    case ('*'):
        result = f1*f2;
        break;
    case ('+'):
        result = f1+f2;
        break;
    case ('/'):
        result = f1/f2;
        break;
    case ('-'):
        result = f1-f2;
        break;    
    default:
        break;
    }
    printf("%f %c %f = %f\n", f1, op, f2, result);
    return 0;
}