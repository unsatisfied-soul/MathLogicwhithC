#include <stdio.h>

int main(){
    char alphaV;
    printf("enter a character :");
    scanf("%c", &alphaV);
    int asciiValue = alphaV;
    if(asciiValue >64 && asciiValue< 97){
        printf("%c is capital alphabet",alphaV);
    }else{
        printf("%c is small alphabet",alphaV);
    }
}