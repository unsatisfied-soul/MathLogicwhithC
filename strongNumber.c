#include<stdio.h>

int main(){
    int numberValue,multiplyNumber,i,facNumber=1,sum=0,strongNumber,tempValue;
    printf("enter a number:");
    scanf("%d", &numberValue);
    tempValue = numberValue;
    
    while(tempValue !=0){
        multiplyNumber = tempValue %10;

        for(i=1; i<=multiplyNumber;i++){
            facNumber = facNumber*i;
        }
        sum+=facNumber;

        //condition
        facNumber >0 ? facNumber = 1: facNumber;

        tempValue = tempValue /10;
    }   
    (numberValue == sum )? printf("it's strong number"):
    printf("it's not strong number");
}