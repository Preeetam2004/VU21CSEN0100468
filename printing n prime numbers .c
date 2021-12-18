#include <stdio.h>

int main(){
    
    int count=0,i,j,n;
    
    printf("enter last number");
    scanf("%d",&n);
    
    for(i=2;i<=n;++i){
    count=0;
    for(j=1;j<=i;++j){
    if(i%j==0)
    count++;
    }
    if(count==2)
    printf("\n%d",i);
    }
    return 0;
}
