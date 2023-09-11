#include<stdio.h>
#include<conio.h>
int main()
{
    int Year;
    printf("Enter the year:");
    scanf("%d",&Year);
    if(Year%4==0)
    {
        printf("It is A leap Year");
    }
    else{
        printf("It is not a leap Year");
    }
    return 0;
}