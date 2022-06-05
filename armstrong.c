#include<stdio.h>
#include<math.h>
int main(){
    int numberValue,temproalValue, sum =0, result,nNumber=0,forNnumber;

    printf("enter a number :");
    scanf("%d", &numberValue);
    temproalValue = numberValue;
    forNnumber = numberValue;

    while(forNnumber >0){
        ++nNumber;
        forNnumber = forNnumber /10; 
        
    }

    while(temproalValue !=0){
        result =temproalValue %10;
        sum += pow(result,nNumber);
        temproalValue = temproalValue /10; 
        
    }
    (numberValue == sum)? printf("%d is armstrong number", numberValue) : printf("%d is not armstrong number",sum);
    return 0;
}