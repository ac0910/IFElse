#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter the 2nd number");
    scanf("%d",&b);
    printf("Enter the 3rd number:");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    if (b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    if (c>a && c>b)
    {
        printf("%d is greatest",c);
    }
    
     return 0;
}