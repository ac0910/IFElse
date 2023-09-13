#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("The Number is : %d",n);
    }
    else{
        printf("It is not a three digit number");
    }
    return 0;

}