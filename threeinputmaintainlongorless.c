#include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("enter three number :");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("%d is greatter than %d and %d", num1, num2, num3);
    }
    else if(num2> num1 && num2 > num3){
        printf("%d is greatter than %d and %d", num2, num1, num3);
    }else{
        printf("%d is greatter than %d and %d", num3, num1, num2);
    }
}