           /* WAP to find area of trapezium */
#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,h;
    
    float area; 
    
    printf("Enter the side of trapezium and  height of trapezium ");
    
    scanf("%f%f%f",&a,&b,&h);
    
    // Area of trapezium
    area=(a+b)*h/2;
    
    printf("Area of trapezium is %f",area);
    
    return 0;
}
