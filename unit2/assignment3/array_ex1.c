#include <stdio.h>

int main(int argc, char *argv){
    float a[2][2];
    float b[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    printf("Sum of matrix:\n");
    printf("%f\t%f\n",a[0][0]+b[0][0], a[0][1]+b[0][1]);
    printf("%f\t%f\n",a[1][0]+b[1][0], a[1][1]+b[1][1]);
    return 0;
}