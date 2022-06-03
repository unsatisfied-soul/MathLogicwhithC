#include<stdio.h>

int main(){
    int i,factorialNumber = 1;
    int value;
    printf("enter a number :\n");
    scanf("%d", &value);
    for(i=1; i<=value; i++){
        factorialNumber = factorialNumber*i;
    }
    printf("%d", factorialNumber);
}