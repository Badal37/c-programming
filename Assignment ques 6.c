                        /*    WAP to compute quotient and remainder   */
#include <stdio.h>

int main()
{ 
  int a,quotient,rem; 
  
    printf("Enter your num\n");
   
    scanf("%d",&a);
   
    quotient=a/2;
   
    rem=a%2;
   
    printf("quotient is %d\n",quotient);
   
    printf("rem is %d",rem);
    
    return 0;
}
