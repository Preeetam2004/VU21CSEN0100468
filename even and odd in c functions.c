#include <stdio.h>

int even(int x,int y){
    
    int z;
    for(z=x;z<=y;++z){
        if(z%2==0)
     printf("%d",z);
    }
}

int odd(int a, int b){
    
    int c;
    for(c=a;c<=b;++c){
    if(c%2==1)
    printf("%d",c);
    }
}

int main(){
    
    int d,e,f,g;
    printf("enter range");
    scanf("%d %d",&d,&e);
    f=even(d,e);
    printf("%d",f);
    g=odd(d,e);
    printf("\n%d",g);
}
