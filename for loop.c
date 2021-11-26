#include <stdio.h>

int main(){
    
    int a=1,n;
    printf("enter the value");
    scanf("%d",&n);
    for(a=1;a<n;a++)
    printf("\n a after incremented %d",++a);
    return 0;
}
