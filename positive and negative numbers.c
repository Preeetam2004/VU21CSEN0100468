#include <stdio.h>

int main(){
    
    int number;
    printf("enter the number");
    scanf("%d",&number);
    
   if(number>0)
   printf("number is postive");
   else if(number<0)
   printf("number is negative");
   else
   printf("number is zero");
  
    return 0;
}
