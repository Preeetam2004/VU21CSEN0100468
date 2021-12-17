#include <stdio.h>

int main(){
	
	int ch,a,b,c,*x,*y;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("enter case");
	scanf("%d",&ch);
	x=&a;
	y=&b;
	switch(ch){
	
	case 1:
	c=*x+*y;
	printf("sum of %d and %d is %d",a,b,c);
	break;
	
	case 2:
	c=*x-*y;
	printf("difference of %d and %d is %d",a,b,c);
	break;
	
	case 3:
	c=*x * *y;
	printf("product of %d and %d is %d",a,b,c);
	break;
	
	case 4:
	c=*x / *y;
	printf("divisor %d and %d is %d",a,b,c);
	break;
	
    case 5:
	c=*x%*y;
	printf("remainder of %d and %d is %d",a,b,c);
	break;
	
	default:
	printf("error : enter valid number");
}
	return 0;
	
}
