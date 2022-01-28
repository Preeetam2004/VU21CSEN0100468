#include <stdio.h>

int main()
{
    int a[10],i,n,key,f=0,l,h,m;
    printf("enter size of an array");
    scanf("%d",&n);
    printf("elements in array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
   printf("enter the key element");
   scanf("%d",&key);
   l=0;
   h=n-1;
   while(l<=h){
    m=l+h/2;
    if(a[m]==key)
    {
    f=1;
    break;
    }
    else{
    l=m+1;
   }
   }
   if(f==1)
   printf("element found");
   else
   printf("element not found");
}
