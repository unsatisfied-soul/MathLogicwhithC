#include <stdio.h>

int main(){
    int numberValue,i,count =0;
    printf("enter a number : \n");
    scanf("%d", &numberValue);
    for (i=2; i<numberValue; i++){
       if(numberValue % i ==0){
           count++;
           break;
       }
    }
    if(count ==0){
           printf("it's not prime number");
       }else{
            printf("it's prime number");
    }
    return 0;
}