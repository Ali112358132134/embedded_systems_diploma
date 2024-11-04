#include <stdio.h>

void compute_prime_numbers(int start, int end){
    int prime;
    printf("Prime numbers between %d and %d are: ", start, end);
    while(start < end){
        prime = 1;
        for(int i = 2; i < start; i++){
            if(start % i == 0){
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ", start);
        start++;
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    int start, end;
    printf("Enter two numbers(Intervals): ");
    scanf("%d", &start);
    scanf("%d", &end);

    compute_prime_numbers(start, end);
    
    return 0;
}