#include <stdio.h>

int main() {
    int i,a=0,b=1,n,c=a+b;
 
 printf("enter number of series");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    
    for(i=3;i<=n;++i){
    printf("%d,",c);
    a=b;
    b=c;
    c=a+b;
    }
    
    return 0;
}
