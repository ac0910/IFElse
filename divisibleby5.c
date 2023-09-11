#include<stdio.h>
#include<conio.h>
int main(){
    int N;
    printf("Enter the Number in N :");
    scanf("%d",&N);
    if(N%5==0){
        printf("It is Divisible by 5");
    }
    else{
        printf("It is Not Divisible by 5");
    }
    return 0;
}
