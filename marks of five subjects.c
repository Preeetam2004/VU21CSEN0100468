#include <stdio.h>

int main(){
    
    int a,b,c,d,e,Total;
    float avg,percentage;
    printf("enter the marks a");
    scanf("%d",&a);
    printf("enter the marks b");
    scanf("%d",&b);
    printf("enter the marks c");
    scanf("%d",&c);
    printf("enter the marks d");
    scanf("%d",&d);
    printf("enter the marks e");
    scanf("%d",&e);
    Total=(a+b+c+d+e);
    printf("\n %d",Total);
  avg=(a+b+c+d+e)/5;
  printf("\n %f",avg);
  percentage=Total/5.0;
  printf("\n %f",percentage);
  
