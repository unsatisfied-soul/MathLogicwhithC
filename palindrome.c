#include<stdio.h>

int main(){
    int numberValue,temproalValue, sum =0, result;
    printf("enter a number :");
    scanf("%d", &numberValue);
    temproalValue = numberValue;
    while(temproalValue !=0){
        result =temproalValue %10;
        sum = sum*10+ result;
        temproalValue = temproalValue /10; 
    }
    (numberValue == temproalValue)? printf("it's palidrome Number") : printf("it's not parindrome number");
    // if(numberValue == temproalValue){
    //     printf("it's palidrome Number");
    // }else{
    //     printf("it's parindrome number");
    // }
}