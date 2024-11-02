#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be inserted: ");
    int element;
    scanf("%d", &element);
    printf("Enter the location: ");
    int location;
    scanf("%d", &location);
    int new_arr[n+1];
    int offset = 0;
    for(int i = 0; i < n+1; i++){
        if(i == location - 1){
            new_arr[i] = element;
            offset++;
        }
        new_arr[i + offset] = arr[i];
    }
    for(int i = 0; i < n + 1; i++){
        printf("%d ", new_arr[i]);
    }
    printf("\n");
    return 0;
}