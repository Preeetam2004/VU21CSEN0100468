#include <stdio.h>

int main() {
  int a,b,c;
  float d;
  printf("enter the value of a");
  scanf("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  printf("enter the value of c");
  scanf("%d",&c);
  d=(a+b+c)/3.0;
  printf("the average value of a,b,c is : %f",d);
    return 0;
}
