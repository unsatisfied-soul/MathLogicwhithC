#include<stdio.h>

int main(){
    int numberValue, temValue, sum=0, result,rowNumber;

    printf("enter a number :\n");
    scanf("%d", &numberValue);
    temValue = numberValue;
    
    while(temValue !=0){
        result = temValue %10;
        sum += result;
        temValue = temValue /10;
    }
    printf("%d", sum);
}