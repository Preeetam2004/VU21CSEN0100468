#include <stdio.h>

int main(){
    
    int a,b,c;
    printf("enter the value of first side");
    scanf("%d",&a);
    printf("enter the value of second side");
    scanf("%d",&b);
    printf("enter the value of third side");
    scanf("%d",&c);
    
    if(a==b && b==c)
    printf("the triangle is equilateral");
    else if(a==b || b==c || c==a )
    printf("the triangle is isoceles");
    else
    printf("the triangle is scalene");
    return 0;
}
