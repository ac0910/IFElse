#include<stdio.h>
int main(){
    int Ram, Shyam , Ajay;
    printf("Enter the age of Ram:");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam :");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay:");
    scanf("%d",&Ajay);
    if (Ram < Shyam && Ajay> Ram) 
    {
        printf("Ram is Youngest ");
    }
    
     if (Shyam <Ram && Shyam < Ajay)
    {
        printf("Shyam is Youngest ");
    }
     if (Ram > Ajay && Shyam > Ajay)
    {
        printf("Ajay is Youngest ");
    }
    


    return 0;
}