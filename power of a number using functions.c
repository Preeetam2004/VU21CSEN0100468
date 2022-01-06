# include <stdio.h>
#include <math.h>
int power(int x,int y)
{
	int z;
	z=pow(x,y);
	return z;
}

int main(){
	
	int a,b,c;
	printf("enter base");
	scanf("%d",&a);
	printf("enter exp");
	scanf("%d",&b);
	c=power(a,b);
	printf("%d",c);
}
