#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be found: ");
    int elem;
    scanf("%d", &elem);
    for(int i = 0; i < n; i++){
        if(arr[i] == elem){
            printf("Number found at the location = %d\n", i + 1);
            break;
        }
    }
    return 0;
}