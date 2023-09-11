#include<stdio.h>
#include<conio.h>
int main(){
    int CP,SP;
    printf("Enter the CostPrice :");
    scanf("%d",&CP);
    printf("Enter the Value in Selling Price:");
    scanf("%d",&SP);
    if(CP>SP){
        printf("It is Loss");
    }
    if (CP==SP)
    {
        printf("Neither is Profit or Neither is Loss");

    }
    if (CP<SP)
    {printf("It is Profit");
     
    }
    return 0;
    
    
}