
#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    //swapping of numbers
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d",x,y);

    return 0;
}
