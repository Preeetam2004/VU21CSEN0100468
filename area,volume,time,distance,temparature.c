#include <stdio.h>

int main(){
    
    int a,b,c,h,v,hour,m,s,C,K,km,meter,cm;
    printf("enter the length a");
    scanf("%d",&a);
    printf("enter the breadth b");
    scanf("%d",&b);
    c=a*b;
    printf("area of rectangle : %d",c);
    printf("\n enter the height h");
    scanf("%d",&h);
    v=h*c;
    printf("Volume of rectangle is : %d",v);

    hour=5;
    m=hour*60;
    printf("\n the value of minutes is %d",m);
    s=m*60;
    printf("\n the value of seconds is %d",s);
 
    printf("\n enter the value of C");
    scanf("%d",&C);
    K=C+273;
    printf("\n the value of kelvin is %d",K);

    
    km=5;
    meter = km*1000;
    printf("\n the value of meters is : %d",meter);
    cm=m*100;
    printf("\n the value of centimetres is : %d",cm);
}
