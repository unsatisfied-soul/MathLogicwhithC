#include<stdio.h>

int main(){
     int numberValue,countingInteger=0;

    printf("enter a number :");
    scanf("%d", &numberValue);
    while(numberValue !=0){
        numberValue/=10;
        countingInteger++;
    }
    printf("%d", countingInteger);
}