# include <stdio.h>

void even();
void odd();

void main(){
	printf("odd and even numbers in a given range");
	
	even();
	odd();
}
 void even()
 {
 	int a,b,c;
 	printf("enter range");
 	scanf("%d %d",&a,&b);
 	
 	for(c=a;c<=b;++c){
 		if(c%2==0)
 		printf("%d",c);
 		
	 }
 }
 
 void odd(){
 	int a,b,c;
 	printf("enter range");
 	scanf("%d %d",&a,&b);
 	
 	for(c=a;c<=b;++c){
 		if(c%2==1)
 		printf("\n%d",c);
 	
 }
}
