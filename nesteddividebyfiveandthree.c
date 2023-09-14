#include<stdio.h>
int main(){
    int Number;
    printf("Enter the Number :");
    scanf("%d",&Number);
    if (Number%5==0)
    {
        if (Number%3==0)
        {
            printf("The Number is divisible by 3 and 5");
        }
        else {
            printf("The number is not divisible by 3 and 5");
        }
    }
        else{
            printf("The number is not divisible by 3 and 5 ");
        }
        return 0;
    
    }