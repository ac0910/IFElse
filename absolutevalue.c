#include<stdio.h>
#include<conio.h>
int main(){
    int Number;
    printf("Enter the Number:");
    scanf("%d",&Number);
    if (Number<0)
    {// If Number is Negative
      Number=Number*(-1);
    }
    printf("The Absolute Value is :%d",Number);
    
    return 0;
}