#include <stdio.h>

 int main (){
 	
 	int i,j,n,ch,number=1;
 	
 	printf("enter case");
 	scanf("%d",&ch);
 	
 	printf("enter number of series");
 	scanf("%d",&n);
 	
 	switch(ch){
 		
 		case 1:
 		for(i=1;i<=n;++i){
 			for(j=1;j<=i;++j){
 				printf("*");
			 }
			 printf("\n");
		 }
		 break;
		 
		 case 2:
		for(i=1;i<=n;++i){
	    for(j=1;j<=i;++j){
	    	printf("%d",number);
	    	++number;
		}
		printf("\n");
		}
		break;
		case 3:
	    for(i=1;i<=n;++i){
	    for(j=1;j<=i;++j){
	    	printf("%c",i+64);
		}
		printf("\n");
		}
		break;
	
	 }
	
 	return 0;
 	
 }
