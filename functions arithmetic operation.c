#include <stdio.h>
void add();
void sub();
void mul();
void div();

void main() {
	
	printf("arithmetic operations of two numbers");
	add();
	sub();
	mul();
	div();
}
void add()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum of a and b is %d",c);
}
void sub()
{
	int a,b,c;
printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("difference of a and b is %d",c);
	
}
void mul()
{
	int a,b,c;

printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("sum of a and b is %d",c);
}
void div(){
	int a,b,c;

printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum of a and b is %d",c);
}


