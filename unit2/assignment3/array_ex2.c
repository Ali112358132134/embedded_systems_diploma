#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    float sum;
    printf("Enter number of data: ");
    scanf("%d", &n);
    float arr[n];
    for(int i = 0; i < n; i++){
        printf("%d. Enter a number: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %f\n", sum/n);
    return 0;
}