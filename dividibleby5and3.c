#include<stdio.h>
int main(){
    int Number;
    printf("Enter the Number:");
    scanf("%d",&Number);
    if (Number%5==0 && Number%3==0)
    {
        printf("It is Divisble by both numbers ");
    }
    else{
        printf("It is not divisible by 3 and 5");
    }
    return 0;
}