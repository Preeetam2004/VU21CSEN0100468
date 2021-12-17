#include <stdio.h>

int main(){
	
	int sum=0,n,r,a;
	
	printf("enter number");
	scanf("%d",&n);
	a=n;
	while(n>0){
		
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(a==sum)
	printf("number is palindrome");
	else
	printf("number is not palindrome");
	
	return 0;
	
}
