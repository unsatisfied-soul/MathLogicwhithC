#include <stdio.h>

int main(){
    int num1,num2,n1,n2,reminder,lcm;
    printf("enter two value here : \n");
    scanf("%d \n %d",&num1,&num2);
    n1 = num1;
    n2=num2;
    (n1 > n2) ? (reminder = n1 %n2) :  (reminder = n2 %n1);    
        while(reminder !=0){
            n1=n2;
            n2 = reminder;
            reminder = n1%n2;
        }
        printf("gcd %d\n", n2);

    lcm = (num1 * num2)/n2;
    printf("lcm %d", lcm);
}