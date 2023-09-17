#include<stdio.h>
int main() {
    int Number;
    printf("Enter the Value in NUmber :");
    scanf("%d",&Number);
    if ((Number%5==0|| Number%3==0)&& Number%15!=0)
    {
        printf("The Number is divisble by 3 and 5");
    }
    else{
        printf("The required condition is not matching");
    }
    return 0;
}