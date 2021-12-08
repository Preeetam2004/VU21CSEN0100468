#include <stdio.h>

int main() {
    
    int i=1,n;
    
printf("enter n");
scanf("%d",&n);

while(i<=20){
printf("\n%d*%d=%d",n,i,i*n);
++i;
}
    
    return 0;
}
