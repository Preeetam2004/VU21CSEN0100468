#include <stdio.h>

int main() {

int a=6,b=5,c,ch;
printf("enter case");
scanf("%d",&ch);

switch(ch){

case 1:
c=a+b;
printf("a+b = %d \n",c);
break;
case 2:
c=a-b;
printf("a-b = %d \n",c);
break;
case 3:
c=a*b;
printf("a*b = %d \n",c);
break;
case 4:
c=a-b;
printf("a/b = %d",c);
break;
case 5:
c=a%b;
printf("the remainder when a is divided by b = %d \n",c);
break;
}
return 0;
}
