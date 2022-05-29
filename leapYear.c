#include<stdio.h>

int main(){
    int year;
    printf("enter a year:");
    scanf("%d", &year);
    if(year %400 ==0){
        printf("%d is a leapYear number", year);
    }else if(year %4 ==0 && year %100 !=0){
        printf("%d is  a leapyear value", year);
    }else{
        printf("it's not leapyear value");
    }
}