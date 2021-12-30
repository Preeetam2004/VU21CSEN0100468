#include <stdio.h>

void even();
void odd();

void main(){
printf("even or odd in a given range\n");	
	even();
	 odd();
}

void even(){
	int i,n;
	printf("enter last number");
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		printf("\n%d",++i);
	}
}
	void odd(){
		int i,n;
	printf("enter last number");
	scanf("%d",&n);
	for(i=2;i<=n;++i){
		printf("\n%d",++i);
}
}

