#include<stdio.h>

int main(){
    int numberValue,result, sum=0;
    printf("enter a number :");
    scanf("%d", &numberValue);
    while(numberValue != 0){
        result = numberValue %10;
        sum = sum*10 + result;
        numberValue = numberValue /10;
    }
    printf ("%d", sum);
}