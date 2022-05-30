#include <stdio.h>

int main(){
    char word;
    int lowerWord, upperWord;

    printf("enter a character :");
    scanf("%c", &word);
    lowerWord = (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u');
    upperWord = (word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U');

    if(lowerWord || upperWord){
        printf("%c is vowel", word);
    }else{
        printf("%c is consonant", word);
    }
}