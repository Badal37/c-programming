           /*  WAP to swap two numbers*/
#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter your numbers ");
    
    scanf("%d%d",&a,&b);
    
  // Logic for swapping
    a=a+b;
    
    b=a-b;
    
    a=a-b;
    
  // After swapping
    printf(" a is %d and b is %d",a,b);

    return 0;
}
