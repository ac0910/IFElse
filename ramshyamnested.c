#include<stdio.h>
int main() {
  int Ram, Shyam, Ajay;
  printf("Enter the age of Ram :");
  scanf("%d",&Ram);
  printf("Enter the age of Shyam :");
  scanf("%d",&Shyam);
  printf("Enter the age of Ajay :");
  scanf("%d",&Ajay);
  if(Ram<Shyam){
    if(Ram<Ajay)
      printf("%d is Younger",Ram);
      else
      printf("%d is Elder",Ajay);
      }
      else{
        if(Shyam<Ajay)
        printf("%d is Younger",Shyam);
        else
        printf("%d is Elder",Ajay);
      }

}