#include <stdio.h>

int main() {
	// your code goes here
   int a,b,c=0;
  scanf("%d",&a);
  while(a>0){
   b=a%10;
 // printf("%d",b);
 
  c=c+b;
   a=a/10;

    
  }
     printf("%d",c);


 retrun 0;
	
}
