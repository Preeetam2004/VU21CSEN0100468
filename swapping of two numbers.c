#include <stdio.h>

int main(){
    
    int a,b,temp;
    
    printf(" enter the number a");
    scanf("%d",&a);
    printf(" enter the number b");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping a becomes %d",a);
    printf("\n after swapping b becomes %d",b);
    
    
}
