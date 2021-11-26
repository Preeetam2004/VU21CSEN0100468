#include <stdio.h>

int main(){
    
    int a,b,c;
    printf("enter the value of first side");
    scanf("%d",&a);
    printf("enter the value of second side");
    scanf("%d",&b);
    printf("enter the value of third side");
    scanf("%d",&c);
   
   if(a>b && b>c)
   printf("c is minimum");
   else if(b>c && c>a)
   printf("a is minimum");
   else
   printf("b is minimum");
    return 0;
}
